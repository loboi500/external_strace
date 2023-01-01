/* Generated by Makefile from block.c.mpers.i btrfs.c.mpers.i dirent.c.mpers.i evdev_mpers.c.mpers.i fetch_bpf_fprog.c.mpers.i fetch_struct_flock.c.mpers.i fetch_struct_keyctl_kdf_params.c.mpers.i fetch_struct_mmsghdr.c.mpers.i fetch_struct_msghdr.c.mpers.i fetch_struct_stat.c.mpers.i fetch_struct_stat64.c.mpers.i fetch_struct_statfs.c.mpers.i fetch_struct_xfs_quotastat.c.mpers.i hdio.c.mpers.i ipc_msgctl.c.mpers.i ipc_shmctl.c.mpers.i loop.c.mpers.i mtd.c.mpers.i perf_ioctl.c.mpers.i print_aio_sigset.c.mpers.i print_group_req.c.mpers.i print_mq_attr.c.mpers.i print_msgbuf.c.mpers.i print_sg_req_info.c.mpers.i print_sigevent.c.mpers.i print_time.c.mpers.i print_timespec.c.mpers.i print_timeval.c.mpers.i print_timex.c.mpers.i printrusage.c.mpers.i printsiginfo.c.mpers.i rt_sigreturn.c.mpers.i rtc.c.mpers.i sg_io_v3.c.mpers.i sigaltstack.c.mpers.i sock.c.mpers.i sysinfo.c.mpers.i times.c.mpers.i ustat.c.mpers.i utime.c.mpers.i v4l2.c.mpers.i; do not edit. */
extern int m32_block_ioctl(struct tcb *const tcp, const unsigned int code, const kernel_ulong_t arg);
extern int m32_btrfs_ioctl(struct tcb *const tcp, const unsigned int code, const kernel_ulong_t arg);
extern int m32_evdev_write_ioctl_mpers(struct tcb *const tcp, const unsigned int code, const kernel_ulong_t arg);
extern unsigned int m32_get_sock_fprog_size(void);
extern _Bool m32_fetch_bpf_fprog(struct tcb *const tcp, const kernel_ulong_t addr, void *const p);
extern _Bool m32_fetch_struct_flock(struct tcb *const tcp, const kernel_ulong_t addr, void *const p);
extern _Bool m32_fetch_struct_flock64(struct tcb *const tcp, const kernel_ulong_t addr, void *const p);
extern int m32_fetch_keyctl_kdf_params(struct tcb *const tcp, kernel_ulong_t addr, struct strace_keyctl_kdf_params *p);
extern int m32_fetch_struct_mmsghdr(struct tcb *const tcp, const kernel_ulong_t addr, void *const p);
extern unsigned int m32_sizeof_struct_mmsghdr(void);
extern int m32_fetch_struct_msghdr(struct tcb *const tcp, const kernel_ulong_t addr, void *const p);
extern _Bool m32_fetch_struct_stat(struct tcb *const tcp, const kernel_ulong_t addr, struct strace_stat *const dst);
extern _Bool m32_fetch_struct_stat64(struct tcb *const tcp, const kernel_ulong_t addr, struct strace_stat *const dst);
extern _Bool m32_fetch_struct_statfs(struct tcb *const tcp, const kernel_ulong_t addr, struct strace_statfs *const p);
extern _Bool m32_fetch_struct_statfs64(struct tcb *const tcp, const kernel_ulong_t addr, const kernel_ulong_t size, struct strace_statfs *const p);
extern _Bool m32_fetch_struct_quotastat(struct tcb *const tcp, const kernel_ulong_t data, void *p);
extern int m32_hdio_ioctl(struct tcb *const tcp, const unsigned int code, const kernel_ulong_t arg);
extern int m32_loop_ioctl(struct tcb *tcp, const unsigned int code, const kernel_ulong_t arg);
extern int m32_mtd_ioctl(struct tcb *const tcp, const unsigned int code, const kernel_ulong_t arg);
extern int m32_perf_ioctl(struct tcb *const tcp, const unsigned int code, const kernel_ulong_t arg);
extern void m32_print_aio_sigset(struct tcb *tcp, const kernel_ulong_t addr);
extern void m32_print_group_req(struct tcb *const tcp, const kernel_ulong_t addr, const int len);
extern void m32_printmqattr(struct tcb *const tcp, const kernel_ulong_t addr, const _Bool decode_flags);
extern void m32_tprint_msgbuf(struct tcb *const tcp, const kernel_ulong_t addr, const kernel_ulong_t count);
extern int m32_decode_sg_req_info(struct tcb *const tcp, const kernel_ulong_t arg);
extern void m32_print_sigevent(struct tcb *const tcp, const kernel_ulong_t addr);
extern _Bool m32_print_struct_timespec_data_size(const void *arg, const size_t size);
extern _Bool m32_print_struct_timespec_array_data_size(const void *arg, const unsigned int nmemb, const size_t size);
extern void m32_print_timespec(struct tcb *const tcp, const kernel_ulong_t addr);
extern const char * m32_sprint_timespec(struct tcb *const tcp, const kernel_ulong_t addr);
extern void m32_print_timespec_utime_pair(struct tcb *const tcp, const kernel_ulong_t addr);
extern void m32_print_itimerspec(struct tcb *const tcp, const kernel_ulong_t addr);
extern void m32_print_struct_timeval(const void *arg);
extern _Bool m32_print_struct_timeval_data_size(const void *arg, const size_t size);
extern void m32_print_timeval(struct tcb *const tcp, const kernel_ulong_t addr);
extern void m32_print_timeval_utimes(struct tcb *const tcp, const kernel_ulong_t addr);
extern const char * m32_sprint_timeval(struct tcb *const tcp, const kernel_ulong_t addr);
extern void m32_print_itimerval(struct tcb *const tcp, const kernel_ulong_t addr);
extern int m32_print_timex(struct tcb *const tcp, const kernel_ulong_t addr);
extern void m32_printrusage(struct tcb *const tcp, const kernel_ulong_t addr);
extern void m32_printsiginfo_at(struct tcb *const tcp, const kernel_ulong_t addr);
extern void m32_print_siginfo_array(struct tcb *const tcp, const kernel_ulong_t addr, const kernel_ulong_t len);
extern int m32_rtc_ioctl(struct tcb *const tcp, const unsigned int code, const kernel_ulong_t arg);
extern int m32_decode_sg_io_v3(struct tcb *const tcp, const kernel_ulong_t arg);
extern int m32_sock_ioctl(struct tcb *tcp, const unsigned int code, const kernel_ulong_t arg);
extern int m32_v4l2_ioctl(struct tcb *const tcp, const unsigned int code, const kernel_ulong_t arg);
