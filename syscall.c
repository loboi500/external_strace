/*
 * Copyright (c) 1991, 1992 Paul Kranenburg <pk@cs.few.eur.nl>
 * Copyright (c) 1993 Branko Lankester <branko@hacktic.nl>
 * Copyright (c) 1993, 1994, 1995, 1996 Rick Sladkey <jrs@world.std.com>
 * Copyright (c) 1996-1999 Wichert Akkerman <wichert@cistron.nl>
 * Copyright (c) 1999 IBM Deutschland Entwicklung GmbH, IBM Corporation
 *                     Linux for s390 port by D.J. Barrow
 *                    <barrow_dj@mail.yahoo.com,djbarrow@de.ibm.com>
 * Copyright (c) 1999-2018 The strace developers.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. The name of the author may not be used to endorse or promote products
 *    derived from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
 * OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
 * IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
 * NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
 * THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#include "defs.h"
#include "mmap_notify.h"
#include "native_defs.h"
#include "ptrace.h"
#include "nsig.h"
#include "number_set.h"
#include "delay.h"
#include "retval.h"
#include <limits.h>

/* for struct iovec */
#include <sys/uio.h>

/* for __X32_SYSCALL_BIT */
#include <asm/unistd.h>

#include "regs.h"

#if defined(SPARC64)
# undef PTRACE_GETREGS
# define PTRACE_GETREGS PTRACE_GETREGS64
# undef PTRACE_SETREGS
# define PTRACE_SETREGS PTRACE_SETREGS64
#endif

#include "syscall.h"
#include "xstring.h"

/* Define these shorthand notations to simplify the syscallent files. */
#include "sysent_shorthand_defs.h"

#define SEN(syscall_name) SEN_ ## syscall_name, SYS_FUNC_NAME(sys_ ## syscall_name)

const struct_sysent sysent0[] = {
#include "syscallent.h"
};

#if SUPPORTED_PERSONALITIES > 1
# include PERSONALITY1_INCLUDE_FUNCS
static const struct_sysent sysent1[] = {
# include "syscallent1.h"
};
#endif

#if SUPPORTED_PERSONALITIES > 2
# include PERSONALITY2_INCLUDE_FUNCS
static const struct_sysent sysent2[] = {
# include "syscallent2.h"
};
#endif

/* Now undef them since short defines cause wicked namespace pollution. */
#include "sysent_shorthand_undefs.h"

const char *const errnoent[] = {
#include "errnoent.h"
};
const char *const signalent[] = {
#include "signalent.h"

};
/*
 * `ioctlent[012].h' files are automatically generated by the auxiliary
 * program `ioctlsort', such that the list is sorted by the `code' field.
 * This has the side-effect of resolving the _IO.. macros into
 * plain integers, eliminating the need to include here everything
 * in "/usr/include".
 */

const struct_ioctlent ioctlent0[] = {
#include "ioctlent0.h"
};

#if SUPPORTED_PERSONALITIES > 1
static const struct_ioctlent ioctlent1[] = {
# include "ioctlent1.h"
};
# include PERSONALITY0_INCLUDE_PRINTERS_DECLS
static const struct_printers printers0 = {
# include PERSONALITY0_INCLUDE_PRINTERS_DEFS
};
# include PERSONALITY1_INCLUDE_PRINTERS_DECLS
static const struct_printers printers1 = {
# include PERSONALITY1_INCLUDE_PRINTERS_DEFS
};
#endif

#if SUPPORTED_PERSONALITIES > 2
static const struct_ioctlent ioctlent2[] = {
# include "ioctlent2.h"
};
# include PERSONALITY2_INCLUDE_PRINTERS_DECLS
static const struct_printers printers2 = {
# include PERSONALITY2_INCLUDE_PRINTERS_DEFS
};
#endif

enum {
	nsyscalls0 = ARRAY_SIZE(sysent0)
#if SUPPORTED_PERSONALITIES > 1
	, nsyscalls1 = ARRAY_SIZE(sysent1)
# if SUPPORTED_PERSONALITIES > 2
	, nsyscalls2 = ARRAY_SIZE(sysent2)
# endif
#endif
};

enum {
	nioctlents0 = ARRAY_SIZE(ioctlent0)
#if SUPPORTED_PERSONALITIES > 1
	, nioctlents1 = ARRAY_SIZE(ioctlent1)
# if SUPPORTED_PERSONALITIES > 2
	, nioctlents2 = ARRAY_SIZE(ioctlent2)
# endif
#endif
};

#if SUPPORTED_PERSONALITIES > 1
const struct_sysent *sysent = sysent0;
const struct_ioctlent *ioctlent = ioctlent0;
const struct_printers *printers = &printers0;
#endif

const unsigned int nerrnos = ARRAY_SIZE(errnoent);
const unsigned int nsignals = ARRAY_SIZE(signalent);
unsigned nsyscalls = nsyscalls0;
unsigned nioctlents = nioctlents0;

const unsigned int nsyscall_vec[SUPPORTED_PERSONALITIES] = {
	nsyscalls0,
#if SUPPORTED_PERSONALITIES > 1
	nsyscalls1,
#endif
#if SUPPORTED_PERSONALITIES > 2
	nsyscalls2,
#endif
};
const struct_sysent *const sysent_vec[SUPPORTED_PERSONALITIES] = {
	sysent0,
#if SUPPORTED_PERSONALITIES > 1
	sysent1,
#endif
#if SUPPORTED_PERSONALITIES > 2
	sysent2,
#endif
};

const char *const personality_names[] =
# if defined X86_64
	{"64 bit", "32 bit", "x32"}
# elif defined X32
	{"x32", "32 bit"}
# elif SUPPORTED_PERSONALITIES == 2
	{"64 bit", "32 bit"}
# else
	{STRINGIFY_VAL(__WORDSIZE) " bit"}
# endif
	;

const char *const personality_designators[] =
# if defined X86_64
	{ "64", "32", "x32" }
# elif defined X32
	{ "x32", "32" }
# elif SUPPORTED_PERSONALITIES == 2
	{ "64", "32" }
# else
	{ STRINGIFY_VAL(__WORDSIZE) }
# endif
	;

#if SUPPORTED_PERSONALITIES > 1

unsigned current_personality;

# ifndef current_wordsize
unsigned current_wordsize = PERSONALITY0_WORDSIZE;
static const int personality_wordsize[SUPPORTED_PERSONALITIES] = {
	PERSONALITY0_WORDSIZE,
	PERSONALITY1_WORDSIZE,
# if SUPPORTED_PERSONALITIES > 2
	PERSONALITY2_WORDSIZE,
# endif
};
# endif

# ifndef current_klongsize
unsigned current_klongsize = PERSONALITY0_KLONGSIZE;
static const int personality_klongsize[SUPPORTED_PERSONALITIES] = {
	PERSONALITY0_KLONGSIZE,
	PERSONALITY1_KLONGSIZE,
#  if SUPPORTED_PERSONALITIES > 2
	PERSONALITY2_KLONGSIZE,
#  endif
};
# endif

void
set_personality(unsigned int personality)
{
	if (personality == current_personality)
		return;

	if (personality >= SUPPORTED_PERSONALITIES)
		error_msg_and_die("Requested switch to unsupported personality "
				  "%u", personality);

	nsyscalls = nsyscall_vec[personality];
	sysent = sysent_vec[personality];

	switch (personality) {
	case 0:
		ioctlent = ioctlent0;
		nioctlents = nioctlents0;
		printers = &printers0;
		break;

	case 1:
		ioctlent = ioctlent1;
		nioctlents = nioctlents1;
		printers = &printers1;
		break;

# if SUPPORTED_PERSONALITIES > 2
	case 2:
		ioctlent = ioctlent2;
		nioctlents = nioctlents2;
		printers = &printers2;
		break;
# endif
	}

	current_personality = personality;
# ifndef current_wordsize
	current_wordsize = personality_wordsize[personality];
# endif
# ifndef current_klongsize
	current_klongsize = personality_klongsize[personality];
# endif
}

static void
update_personality(struct tcb *tcp, unsigned int personality)
{
	static bool need_mpers_warning[] =
		{ false, !HAVE_PERSONALITY_1_MPERS, !HAVE_PERSONALITY_2_MPERS };

	set_personality(personality);

	if (personality == tcp->currpers)
		return;
	tcp->currpers = personality;

	if (!qflag) {
		error_msg("[ Process PID=%d runs in %s mode. ]",
			  tcp->pid, personality_names[personality]);
	}

	if (need_mpers_warning[personality]) {
		error_msg("WARNING: Proper structure decoding for this "
			  "personality is not supported, please consider "
			  "building strace with mpers support enabled.");
		need_mpers_warning[personality] = false;
	}
}
#endif

#ifdef SYS_socket_subcall
static void
decode_socket_subcall(struct tcb *tcp)
{
	const int call = tcp->u_arg[0];

	if (call < 1 || call >= SYS_socket_nsubcalls)
		return;

	const kernel_ulong_t scno = SYS_socket_subcall + call;
	const unsigned int nargs = sysent[scno].nargs;
	uint64_t buf[nargs];

	if (umoven(tcp, tcp->u_arg[1], nargs * current_wordsize, buf) < 0)
		return;

	tcp->scno = scno;
	tcp->qual_flg = qual_flags(scno);
	tcp->s_ent = &sysent[scno];

	unsigned int i;
	for (i = 0; i < nargs; ++i)
		tcp->u_arg[i] = (sizeof(uint32_t) == current_wordsize)
				? ((uint32_t *) (void *) buf)[i] : buf[i];
}
#endif /* SYS_socket_subcall */

#ifdef SYS_ipc_subcall
static void
decode_ipc_subcall(struct tcb *tcp)
{
	unsigned int call = tcp->u_arg[0];
	const unsigned int version = call >> 16;

	if (version) {
# if defined S390 || defined S390X
		return;
# else
#  ifdef SPARC64
		if (current_wordsize == 8)
			return;
#  endif
		set_tcb_priv_ulong(tcp, version);
		call &= 0xffff;
# endif
	}

	switch (call) {
		case  1: case  2: case  3: case  4:
		case 11: case 12: case 13: case 14:
		case 21: case 22: case 23: case 24:
			break;
		default:
			return;
	}

	tcp->scno = SYS_ipc_subcall + call;
	tcp->qual_flg = qual_flags(tcp->scno);
	tcp->s_ent = &sysent[tcp->scno];

	const unsigned int n = tcp->s_ent->nargs;
	unsigned int i;
	for (i = 0; i < n; i++)
		tcp->u_arg[i] = tcp->u_arg[i + 1];
}
#endif /* SYS_ipc_subcall */

#ifdef SYS_syscall_subcall
static void
decode_syscall_subcall(struct tcb *tcp)
{
	if (!scno_is_valid(tcp->u_arg[0]))
		return;
	tcp->scno = tcp->u_arg[0];
	tcp->qual_flg = qual_flags(tcp->scno);
	tcp->s_ent = &sysent[tcp->scno];
	memmove(&tcp->u_arg[0], &tcp->u_arg[1],
		sizeof(tcp->u_arg) - sizeof(tcp->u_arg[0]));
# ifdef LINUX_MIPSO32
	/*
	 * Fetching the last arg of 7-arg syscalls (fadvise64_64
	 * and sync_file_range) requires additional code,
	 * see linux/mips/get_syscall_args.c
	 */
	if (tcp->s_ent->nargs == MAX_ARGS) {
		if (umoven(tcp,
			   mips_REG_SP + MAX_ARGS * sizeof(tcp->u_arg[0]),
			   sizeof(tcp->u_arg[0]),
			   &tcp->u_arg[MAX_ARGS - 1]) < 0)
		tcp->u_arg[MAX_ARGS - 1] = 0;
	}
# endif /* LINUX_MIPSO32 */
}
#endif /* SYS_syscall_subcall */

static void
dumpio(struct tcb *tcp)
{
	int fd = tcp->u_arg[0];
	if (fd < 0)
		return;

	if (is_number_in_set(fd, write_set)) {
		switch (tcp->s_ent->sen) {
		case SEN_write:
		case SEN_pwrite:
		case SEN_send:
		case SEN_sendto:
		case SEN_mq_timedsend:
			dumpstr(tcp, tcp->u_arg[1], tcp->u_arg[2]);
			break;
		case SEN_writev:
		case SEN_pwritev:
		case SEN_pwritev2:
		case SEN_vmsplice:
			dumpiov_upto(tcp, tcp->u_arg[2], tcp->u_arg[1], -1);
			break;
		case SEN_sendmsg:
			dumpiov_in_msghdr(tcp, tcp->u_arg[1], -1);
			break;
		case SEN_sendmmsg:
			dumpiov_in_mmsghdr(tcp, tcp->u_arg[1]);
			break;
		}
	}

	if (syserror(tcp))
		return;

	if (is_number_in_set(fd, read_set)) {
		switch (tcp->s_ent->sen) {
		case SEN_read:
		case SEN_pread:
		case SEN_recv:
		case SEN_recvfrom:
		case SEN_mq_timedreceive:
			dumpstr(tcp, tcp->u_arg[1], tcp->u_rval);
			return;
		case SEN_readv:
		case SEN_preadv:
		case SEN_preadv2:
			dumpiov_upto(tcp, tcp->u_arg[2], tcp->u_arg[1],
				     tcp->u_rval);
			return;
		case SEN_recvmsg:
			dumpiov_in_msghdr(tcp, tcp->u_arg[1], tcp->u_rval);
			return;
		case SEN_recvmmsg:
			dumpiov_in_mmsghdr(tcp, tcp->u_arg[1]);
			return;
		}
	}
}

const char *
err_name(unsigned long err)
{
	if ((err < nerrnos) && errnoent[err])
		return errnoent[err];

	return NULL;
}

static void
print_err_ret(kernel_ulong_t ret, unsigned long u_error)
{
	const char *u_error_str = err_name(u_error);

	if (u_error_str)
		tprintf("= %" PRI_kld " %s (%s)",
			ret, u_error_str, strerror(u_error));
	else
		tprintf("= %" PRI_kld " (errno %lu)", ret, u_error);
}

static long get_regs(struct tcb *);
static int get_syscall_args(struct tcb *);
static int get_syscall_result(struct tcb *);
static int arch_get_scno(struct tcb *tcp);
static int arch_set_scno(struct tcb *, kernel_ulong_t);
static void get_error(struct tcb *, const bool);
static int arch_set_error(struct tcb *);
static int arch_set_success(struct tcb *);

struct inject_opts *inject_vec[SUPPORTED_PERSONALITIES];

static struct inject_opts *
tcb_inject_opts(struct tcb *tcp)
{
	return (scno_in_range(tcp->scno) && tcp->inject_vec[current_personality])
	       ? &tcp->inject_vec[current_personality][tcp->scno] : NULL;
}


static long
tamper_with_syscall_entering(struct tcb *tcp, unsigned int *signo)
{
	if (!tcp->inject_vec[current_personality]) {
		tcp->inject_vec[current_personality] =
			xcalloc(nsyscalls, sizeof(**inject_vec));
		memcpy(tcp->inject_vec[current_personality],
		       inject_vec[current_personality],
		       nsyscalls * sizeof(**inject_vec));
	}

	struct inject_opts *opts = tcb_inject_opts(tcp);

	if (!opts || opts->first == 0)
		return 0;

	--opts->first;

	if (opts->first != 0)
		return 0;

	opts->first = opts->step;

	if (!recovering(tcp)) {
		if (opts->data.flags & INJECT_F_SIGNAL)
			*signo = opts->data.signo;
		if (opts->data.flags & (INJECT_F_ERROR | INJECT_F_RETVAL)) {
			kernel_long_t scno =
				(opts->data.flags & INJECT_F_SYSCALL)
				? (kernel_long_t) shuffle_scno(opts->data.scno)
				: -1;

			if (!arch_set_scno(tcp, scno)) {
				tcp->flags |= TCB_TAMPERED;
				if (scno != -1)
					tcp->flags |= TCB_TAMPERED_NO_FAIL;
			}
		}
		if (opts->data.flags & INJECT_F_DELAY_ENTER)
			delay_tcb(tcp, opts->data.delay_idx, true);
		if (opts->data.flags & INJECT_F_DELAY_EXIT)
			tcp->flags |= TCB_INJECT_DELAY_EXIT;
	}

	return 0;
}

static long
tamper_with_syscall_exiting(struct tcb *tcp)
{
	struct inject_opts *opts = tcb_inject_opts(tcp);
	if (!opts)
		return 0;

	if (inject_delay_exit(tcp))
		delay_tcb(tcp, opts->data.delay_idx, false);

	if (!syscall_tampered(tcp))
		return 0;

	if (!syserror(tcp) ^ !!syscall_tampered_nofail(tcp)) {
		error_msg("Failed to tamper with process %d: unexpectedly got"
			  " %serror (return value %#" PRI_klx ", error %lu)",
			  tcp->pid, syscall_tampered_nofail(tcp) ? "" : "no ",
			  tcp->u_rval, tcp->u_error);

		return 1;
	}

	bool update_tcb = false;

	if (opts->data.flags & INJECT_F_RETVAL) {
		kernel_long_t inject_rval =
			retval_get(opts->data.rval_idx);
		kernel_long_t u_rval = tcp->u_rval;

		tcp->u_rval = inject_rval;
		if (arch_set_success(tcp)) {
			tcp->u_rval = u_rval;
		} else {
			update_tcb = true;
			tcp->u_error = 0;
		}
	} else {
		unsigned long new_error = retval_get(opts->data.rval_idx);

		if (new_error != tcp->u_error && new_error <= MAX_ERRNO_VALUE) {
			unsigned long u_error = tcp->u_error;

			tcp->u_error = new_error;
			if (arch_set_error(tcp)) {
				tcp->u_error = u_error;
			} else {
				update_tcb = true;
			}
		}
	}

	if (update_tcb) {
		tcp->u_error = 0;
		get_error(tcp, !(tcp->s_ent->sys_flags & SYSCALL_NEVER_FAILS));
	}

	return 0;
}

/*
 * Returns:
 * 0: "ignore this ptrace stop", bail out silently.
 * 1: ok, decoded; call
 *    syscall_entering_finish(tcp, syscall_entering_trace(tcp, ...)).
 * other: error; call syscall_entering_finish(tcp, res), where res is the value
 *    returned.
 */
int
syscall_entering_decode(struct tcb *tcp)
{
	int res = get_scno(tcp);
	if (res == 0)
		return res;
	int scno_good = res;
	if (res != 1 || (res = get_syscall_args(tcp)) != 1) {
		printleader(tcp);
		tprintf("%s(", scno_good == 1 ? tcp->s_ent->sys_name : "????");
		/*
		 * " <unavailable>" will be added later by the code which
		 * detects ptrace errors.
		 */
		return res;
	}

#if defined SYS_ipc_subcall	\
 || defined SYS_socket_subcall	\
 || defined SYS_syscall_subcall
	for (;;) {
		switch (tcp->s_ent->sen) {
# ifdef SYS_ipc_subcall
		case SEN_ipc:
			decode_ipc_subcall(tcp);
			break;
# endif
# ifdef SYS_socket_subcall
		case SEN_socketcall:
			decode_socket_subcall(tcp);
			break;
# endif
# ifdef SYS_syscall_subcall
		case SEN_syscall:
			decode_syscall_subcall(tcp);
			if (tcp->s_ent->sen != SEN_syscall)
				continue;
			break;
# endif
		}
		break;
	}
#endif

	return 1;
}

int
syscall_entering_trace(struct tcb *tcp, unsigned int *sig)
{
	/* Restrain from fault injection while the trace executes strace code. */
	if (hide_log(tcp)) {
		tcp->qual_flg &= ~QUAL_INJECT;
	}

	switch (tcp->s_ent->sen) {
		case SEN_execve:
		case SEN_execveat:
#if defined SPARC || defined SPARC64
		case SEN_execv:
#endif
			tcp->flags &= ~TCB_HIDE_LOG;
			break;
	}

	if (!traced(tcp) || (tracing_paths && !pathtrace_match(tcp))) {
		tcp->flags |= TCB_FILTERED;
		return 0;
	}

	tcp->flags &= ~TCB_FILTERED;

	if (hide_log(tcp)) {
		return 0;
	}

	if (inject(tcp))
		tamper_with_syscall_entering(tcp, sig);

	if (cflag == CFLAG_ONLY_STATS) {
		return 0;
	}

#ifdef ENABLE_STACKTRACE
	if (stack_trace_enabled) {
		if (tcp->s_ent->sys_flags & STACKTRACE_CAPTURE_ON_ENTER)
			unwind_tcb_capture(tcp);
	}
#endif

	printleader(tcp);
	tprintf("%s(", tcp->s_ent->sys_name);
	int res = raw(tcp) ? printargs(tcp) : tcp->s_ent->sys_func(tcp);
	fflush(tcp->outf);
	return res;
}

void
syscall_entering_finish(struct tcb *tcp, int res)
{
	tcp->flags |= TCB_INSYSCALL;
	tcp->sys_func_rval = res;
	/* Measure the entrance time as late as possible to avoid errors. */
	if ((Tflag || cflag) && !filtered(tcp))
		clock_gettime(CLOCK_MONOTONIC, &tcp->etime);
}

/* Returns:
 * 0: "bail out".
 * 1: ok.
 * -1: error in one of ptrace ops.
 *
 * If not 0, call syscall_exiting_trace(tcp, res), where res is the return
 *    value. Anyway, call syscall_exiting_finish(tcp) then.
 */
int
syscall_exiting_decode(struct tcb *tcp, struct timespec *pts)
{
	/* Measure the exit time as early as possible to avoid errors. */
	if ((Tflag || cflag) && !(filtered(tcp) || hide_log(tcp)))
		clock_gettime(CLOCK_MONOTONIC, pts);

	if (tcp->s_ent->sys_flags & MEMORY_MAPPING_CHANGE)
		mmap_notify_report(tcp);

	if (filtered(tcp) || hide_log(tcp))
		return 0;

#if SUPPORTED_PERSONALITIES > 1
	update_personality(tcp, tcp->currpers);
#endif

	return get_syscall_result(tcp);
}

int
syscall_exiting_trace(struct tcb *tcp, struct timespec *ts, int res)
{
	if (syscall_tampered(tcp) || inject_delay_exit(tcp))
		tamper_with_syscall_exiting(tcp);

	if (cflag) {
		count_syscall(tcp, ts);
		if (cflag == CFLAG_ONLY_STATS) {
			return 0;
		}
	}

	/* If not in -ff mode, and printing_tcp != tcp,
	 * then the log currently does not end with output
	 * of _our syscall entry_, but with something else.
	 * We need to say which syscall's return is this.
	 *
	 * Forced reprinting via TCB_REPRINT is used only by
	 * "strace -ff -oLOG test/threaded_execve" corner case.
	 * It's the only case when -ff mode needs reprinting.
	 */
	if ((followfork < 2 && printing_tcp != tcp) || (tcp->flags & TCB_REPRINT)) {
		tcp->flags &= ~TCB_REPRINT;
		printleader(tcp);
		tprintf("<... %s resumed> ", tcp->s_ent->sys_name);
	}
	printing_tcp = tcp;

	tcp->s_prev_ent = NULL;
	if (res != 1) {
		/* There was error in one of prior ptrace ops */
		tprints(") ");
		tabto();
		tprints("= ? <unavailable>\n");
		line_ended();
		return res;
	}
	tcp->s_prev_ent = tcp->s_ent;

	int sys_res = 0;
	if (raw(tcp)) {
		/* sys_res = printargs(tcp); - but it's nop on sysexit */
	} else {
	/* FIXME: not_failing_only (IOW, option -z) is broken:
	 * failure of syscall is known only after syscall return.
	 * Thus we end up with something like this on, say, ENOENT:
	 *     open("does_not_exist", O_RDONLY <unfinished ...>
	 *     {next syscall decode}
	 * whereas the intended result is that open(...) line
	 * is not shown at all.
	 */
		if (not_failing_only && tcp->u_error)
			return 0;	/* ignore failed syscalls */
		if (tcp->sys_func_rval & RVAL_DECODED)
			sys_res = tcp->sys_func_rval;
		else
			sys_res = tcp->s_ent->sys_func(tcp);
	}

	tprints(") ");
	tabto();

	if (raw(tcp)) {
		if (tcp->u_error)
			print_err_ret(tcp->u_rval, tcp->u_error);
		else
			tprintf("= %#" PRI_klx, tcp->u_rval);

		if (syscall_tampered(tcp))
			tprints(" (INJECTED)");
	} else if (!(sys_res & RVAL_NONE) && tcp->u_error) {
		switch (tcp->u_error) {
		/* Blocked signals do not interrupt any syscalls.
		 * In this case syscalls don't return ERESTARTfoo codes.
		 *
		 * Deadly signals set to SIG_DFL interrupt syscalls
		 * and kill the process regardless of which of the codes below
		 * is returned by the interrupted syscall.
		 * In some cases, kernel forces a kernel-generated deadly
		 * signal to be unblocked and set to SIG_DFL (and thus cause
		 * death) if it is blocked or SIG_IGNed: for example, SIGSEGV
		 * or SIGILL. (The alternative is to leave process spinning
		 * forever on the faulty instruction - not useful).
		 *
		 * SIG_IGNed signals and non-deadly signals set to SIG_DFL
		 * (for example, SIGCHLD, SIGWINCH) interrupt syscalls,
		 * but kernel will always restart them.
		 */
		case ERESTARTSYS:
			/* Most common type of signal-interrupted syscall exit code.
			 * The system call will be restarted with the same arguments
			 * if SA_RESTART is set; otherwise, it will fail with EINTR.
			 */
			tprints("= ? ERESTARTSYS (To be restarted if SA_RESTART is set)");
			break;
		case ERESTARTNOINTR:
			/* Rare. For example, fork() returns this if interrupted.
			 * SA_RESTART is ignored (assumed set): the restart is unconditional.
			 */
			tprints("= ? ERESTARTNOINTR (To be restarted)");
			break;
		case ERESTARTNOHAND:
			/* pause(), rt_sigsuspend() etc use this code.
			 * SA_RESTART is ignored (assumed not set):
			 * syscall won't restart (will return EINTR instead)
			 * even after signal with SA_RESTART set. However,
			 * after SIG_IGN or SIG_DFL signal it will restart
			 * (thus the name "restart only if has no handler").
			 */
			tprints("= ? ERESTARTNOHAND (To be restarted if no handler)");
			break;
		case ERESTART_RESTARTBLOCK:
			/* Syscalls like nanosleep(), poll() which can't be
			 * restarted with their original arguments use this
			 * code. Kernel will execute restart_syscall() instead,
			 * which changes arguments before restarting syscall.
			 * SA_RESTART is ignored (assumed not set) similarly
			 * to ERESTARTNOHAND. (Kernel can't honor SA_RESTART
			 * since restart data is saved in "restart block"
			 * in task struct, and if signal handler uses a syscall
			 * which in turn saves another such restart block,
			 * old data is lost and restart becomes impossible)
			 */
			tprints("= ? ERESTART_RESTARTBLOCK (Interrupted by signal)");
			break;
		default:
			print_err_ret(tcp->u_rval, tcp->u_error);
			break;
		}
		if (syscall_tampered(tcp))
			tprints(" (INJECTED)");
		if ((sys_res & RVAL_STR) && tcp->auxstr)
			tprintf(" (%s)", tcp->auxstr);
	} else {
		if (sys_res & RVAL_NONE)
			tprints("= ?");
		else {
			switch (sys_res & RVAL_MASK) {
			case RVAL_HEX:
#if ANY_WORDSIZE_LESS_THAN_KERNEL_LONG
				if (current_klongsize < sizeof(tcp->u_rval)) {
					tprintf("= %#x",
						(unsigned int) tcp->u_rval);
				} else
#endif
				{
					tprintf("= %#" PRI_klx, tcp->u_rval);
				}
				break;
			case RVAL_OCTAL:
				tprints("= ");
				print_numeric_long_umask(tcp->u_rval);
				break;
			case RVAL_UDECIMAL:
#if ANY_WORDSIZE_LESS_THAN_KERNEL_LONG
				if (current_klongsize < sizeof(tcp->u_rval)) {
					tprintf("= %u",
						(unsigned int) tcp->u_rval);
				} else
#endif
				{
					tprintf("= %" PRI_klu, tcp->u_rval);
				}
				break;
			case RVAL_FD:
				if (show_fd_path) {
					tprints("= ");
					printfd(tcp, tcp->u_rval);
				} else
					tprintf("= %" PRI_kld, tcp->u_rval);
				break;
			default:
				error_msg("invalid rval format");
				break;
			}
		}
		if ((sys_res & RVAL_STR) && tcp->auxstr)
			tprintf(" (%s)", tcp->auxstr);
		if (syscall_tampered(tcp))
			tprints(" (INJECTED)");
	}
	if (Tflag) {
		ts_sub(ts, ts, &tcp->etime);
		tprintf(" <%ld.%06ld>",
			(long) ts->tv_sec, (long) ts->tv_nsec / 1000);
	}
	tprints("\n");
	dumpio(tcp);
	line_ended();

#ifdef ENABLE_STACKTRACE
	if (stack_trace_enabled)
		unwind_tcb_print(tcp);
#endif
	return 0;
}

void
syscall_exiting_finish(struct tcb *tcp)
{
	tcp->flags &= ~(TCB_INSYSCALL | TCB_TAMPERED | TCB_INJECT_DELAY_EXIT);
	tcp->sys_func_rval = 0;
	free_tcb_priv_data(tcp);
}

bool
is_erestart(struct tcb *tcp)
{
	switch (tcp->u_error) {
		case ERESTARTSYS:
		case ERESTARTNOINTR:
		case ERESTARTNOHAND:
		case ERESTART_RESTARTBLOCK:
			return true;
		default:
			return false;
	}
}

static unsigned long saved_u_error;

void
temporarily_clear_syserror(struct tcb *tcp)
{
	saved_u_error = tcp->u_error;
	tcp->u_error = 0;
}

void
restore_cleared_syserror(struct tcb *tcp)
{
	tcp->u_error = saved_u_error;
}

#define XLAT_MACROS_ONLY
# include "xlat/nt_descriptor_types.h"
#undef XLAT_MACROS_ONLY

#include "arch_regs.c"

#if HAVE_ARCH_GETRVAL2
# include "arch_getrval2.c"
#endif

void
print_pc(struct tcb *tcp)
{
#if defined ARCH_PC_REG
# define ARCH_GET_PC 0
#elif defined ARCH_PC_PEEK_ADDR
	kernel_ulong_t pc;
# define ARCH_PC_REG pc
# define ARCH_GET_PC upeek(tcp, ARCH_PC_PEEK_ADDR, &pc)
#else
# error Neither ARCH_PC_REG nor ARCH_PC_PEEK_ADDR is defined
#endif
	if (get_regs(tcp) < 0 || ARCH_GET_PC)
		tprints(current_wordsize == 4 ? "[????????] "
					      : "[????????????????] ");
	else
		tprintf(current_wordsize == 4
			? "[%08" PRI_klx "] " : "[%016" PRI_klx "] ",
			(kernel_ulong_t) ARCH_PC_REG);
}

#include "getregs_old.h"

#undef ptrace_getregset_or_getregs
#undef ptrace_setregset_or_setregs
#ifdef ARCH_REGS_FOR_GETREGSET

# define ptrace_getregset_or_getregs ptrace_getregset
static long
ptrace_getregset(pid_t pid)
{
# ifdef ARCH_IOVEC_FOR_GETREGSET
	/* variable iovec */
	ARCH_IOVEC_FOR_GETREGSET.iov_len = sizeof(ARCH_REGS_FOR_GETREGSET);
	return ptrace(PTRACE_GETREGSET, pid, NT_PRSTATUS,
		      &ARCH_IOVEC_FOR_GETREGSET);
# else
	/* constant iovec */
	static struct iovec io = {
		.iov_base = &ARCH_REGS_FOR_GETREGSET,
		.iov_len = sizeof(ARCH_REGS_FOR_GETREGSET)
	};
	return ptrace(PTRACE_GETREGSET, pid, NT_PRSTATUS, &io);

# endif
}

# ifndef HAVE_GETREGS_OLD
#  define ptrace_setregset_or_setregs ptrace_setregset
static int
ptrace_setregset(pid_t pid)
{
#  ifdef ARCH_IOVEC_FOR_GETREGSET
	/* variable iovec */
	return ptrace(PTRACE_SETREGSET, pid, NT_PRSTATUS,
		      &ARCH_IOVEC_FOR_GETREGSET);
#  else
	/* constant iovec */
	static struct iovec io = {
		.iov_base = &ARCH_REGS_FOR_GETREGSET,
		.iov_len = sizeof(ARCH_REGS_FOR_GETREGSET)
	};
	return ptrace(PTRACE_SETREGSET, pid, NT_PRSTATUS, &io);
#  endif
}
# endif /* !HAVE_GETREGS_OLD */

#elif defined ARCH_REGS_FOR_GETREGS

# define ptrace_getregset_or_getregs ptrace_getregs
static long
ptrace_getregs(pid_t pid)
{
# if defined SPARC || defined SPARC64
	/* SPARC systems have the meaning of data and addr reversed */
	return ptrace(PTRACE_GETREGS, pid, (void *) &ARCH_REGS_FOR_GETREGS, 0);
# else
	return ptrace(PTRACE_GETREGS, pid, NULL, &ARCH_REGS_FOR_GETREGS);
# endif
}

# ifndef HAVE_GETREGS_OLD
#  define ptrace_setregset_or_setregs ptrace_setregs
static int
ptrace_setregs(pid_t pid)
{
#  if defined SPARC || defined SPARC64
	/* SPARC systems have the meaning of data and addr reversed */
	return ptrace(PTRACE_SETREGS, pid, (void *) &ARCH_REGS_FOR_GETREGS, 0);
#  else
	return ptrace(PTRACE_SETREGS, pid, NULL, &ARCH_REGS_FOR_GETREGS);
#  endif
}
# endif /* !HAVE_GETREGS_OLD */

#endif /* ARCH_REGS_FOR_GETREGSET || ARCH_REGS_FOR_GETREGS */

#ifdef ptrace_getregset_or_getregs
static long get_regs_error;
#endif

void
clear_regs(struct tcb *tcp)
{
#ifdef ptrace_getregset_or_getregs
	get_regs_error = -1;
#endif
}

static long
get_regs(struct tcb *const tcp)
{
#ifdef ptrace_getregset_or_getregs

	if (get_regs_error != -1)
		return get_regs_error;

# ifdef HAVE_GETREGS_OLD
	/*
	 * Try PTRACE_GETREGSET/PTRACE_GETREGS first,
	 * fallback to getregs_old.
	 */
	static int use_getregs_old;
	if (use_getregs_old < 0) {
		return get_regs_error = ptrace_getregset_or_getregs(tcp->pid);
	} else if (use_getregs_old == 0) {
		get_regs_error = ptrace_getregset_or_getregs(tcp->pid);
		if (get_regs_error >= 0) {
			use_getregs_old = -1;
			return get_regs_error;
		}
		if (errno == EPERM || errno == ESRCH)
			return get_regs_error;
		use_getregs_old = 1;
	}
	return get_regs_error = getregs_old(tcp);
# else /* !HAVE_GETREGS_OLD */
	/* Assume that PTRACE_GETREGSET/PTRACE_GETREGS works. */
	get_regs_error = ptrace_getregset_or_getregs(tcp->pid);

#  if defined ARCH_PERSONALITY_0_IOV_SIZE
	if (get_regs_error)
		return get_regs_error;

	switch (ARCH_IOVEC_FOR_GETREGSET.iov_len) {
	case ARCH_PERSONALITY_0_IOV_SIZE:
		update_personality(tcp, 0);
		break;
	case ARCH_PERSONALITY_1_IOV_SIZE:
		update_personality(tcp, 1);
		break;
	default: {
		static bool printed = false;

		if (!printed) {
			error_msg("Unsupported regset size returned by "
				  "PTRACE_GETREGSET: %zu",
				  ARCH_IOVEC_FOR_GETREGSET.iov_len);

			printed = true;
		}

		update_personality(tcp, 0);
	}
	}
#  endif /* ARCH_PERSONALITY_0_IOV_SIZE */

	return get_regs_error;

# endif /* !HAVE_GETREGS_OLD */

#else /* !ptrace_getregset_or_getregs */

# warning get_regs is not implemented for this architecture yet
	return 0;

#endif /* !ptrace_getregset_or_getregs */
}

#ifdef ptrace_setregset_or_setregs
static int
set_regs(pid_t pid)
{
	return ptrace_setregset_or_setregs(pid);
}
#endif /* ptrace_setregset_or_setregs */

struct sysent_buf {
	struct tcb *tcp;
	struct_sysent ent;
	char buf[sizeof("syscall_0x") + sizeof(kernel_ulong_t) * 2];
};

static void
free_sysent_buf(void *ptr)
{
	struct sysent_buf *s = ptr;
	s->tcp->s_prev_ent = s->tcp->s_ent = NULL;
	free(ptr);
}

/*
 * Returns:
 * 0: "ignore this ptrace stop", syscall_entering_decode() should return a "bail
 *    out silently" code.
 * 1: ok, continue in syscall_entering_decode().
 * other: error, syscall_entering_decode() should print error indicator
 *    ("????" etc) and return an appropriate code.
 */
int
get_scno(struct tcb *tcp)
{
	if (get_regs(tcp) < 0)
		return -1;

	int rc = arch_get_scno(tcp);
	if (rc != 1)
		return rc;

	tcp->scno = shuffle_scno(tcp->scno);

	if (scno_is_valid(tcp->scno)) {
		tcp->s_ent = &sysent[tcp->scno];
		tcp->qual_flg = qual_flags(tcp->scno);
	} else {
		struct sysent_buf *s = xcalloc(1, sizeof(*s));

		s->tcp = tcp;
		s->ent.nargs = MAX_ARGS;
		s->ent.sen = SEN_printargs;
		s->ent.sys_func = printargs;
		s->ent.sys_name = s->buf;
		xsprintf(s->buf, "syscall_%#" PRI_klx, shuffle_scno(tcp->scno));

		tcp->s_ent = &s->ent;
		tcp->qual_flg = QUAL_RAW | DEFAULT_QUAL_FLAGS;

		set_tcb_priv_data(tcp, s, free_sysent_buf);

		debug_msg("pid %d invalid syscall %#" PRI_klx,
			  tcp->pid, shuffle_scno(tcp->scno));
	}

	/*
	 * We refrain from argument decoding during recovering
	 * as tracee memory mappings has changed and the registers
	 * are very likely pointing to garbage already.
	 */
	if (recovering(tcp))
		tcp->qual_flg |= QUAL_RAW;

	return 1;
}

#ifdef ptrace_getregset_or_getregs
# define get_syscall_result_regs get_regs
#else
static int get_syscall_result_regs(struct tcb *);
#endif

/* Returns:
 * 1: ok, continue in syscall_exiting_trace().
 * -1: error, syscall_exiting_trace() should print error indicator
 *    ("????" etc) and bail out.
 */
static int
get_syscall_result(struct tcb *tcp)
{
	if (get_syscall_result_regs(tcp) < 0)
		return -1;
	tcp->u_error = 0;
	get_error(tcp,
		  (!(tcp->s_ent->sys_flags & SYSCALL_NEVER_FAILS)
			|| syscall_tampered(tcp))
                  && !syscall_tampered_nofail(tcp));

	return 1;
}

#include "get_scno.c"
#include "set_scno.c"
#include "get_syscall_args.c"
#ifndef ptrace_getregset_or_getregs
# include "get_syscall_result.c"
#endif
#include "get_error.c"
#include "set_error.c"
#ifdef HAVE_GETREGS_OLD
# include "getregs_old.c"
#endif
#include "shuffle_scno.c"

const char *
syscall_name(kernel_ulong_t scno)
{
	return scno_is_valid(scno) ? sysent[scno].sys_name : NULL;
}
