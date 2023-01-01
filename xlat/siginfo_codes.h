/* Generated by ./xlat/gen.sh from ./xlat/siginfo_codes.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(SI_USER) || (defined(HAVE_DECL_SI_USER) && HAVE_DECL_SI_USER)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SI_USER) == (0), "SI_USER != 0");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SI_USER 0
#endif
#if defined(SI_KERNEL) || (defined(HAVE_DECL_SI_KERNEL) && HAVE_DECL_SI_KERNEL)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SI_KERNEL) == (0x80), "SI_KERNEL != 0x80");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SI_KERNEL 0x80
#endif
#if defined(SI_QUEUE) || (defined(HAVE_DECL_SI_QUEUE) && HAVE_DECL_SI_QUEUE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SI_QUEUE) == (-1), "SI_QUEUE != -1");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SI_QUEUE -1
#endif
#ifdef __mips__
#if defined(SI_ASYNCIO) || (defined(HAVE_DECL_SI_ASYNCIO) && HAVE_DECL_SI_ASYNCIO)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SI_ASYNCIO) == (-2), "SI_ASYNCIO != -2");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SI_ASYNCIO -2
#endif
#if defined(SI_TIMER) || (defined(HAVE_DECL_SI_TIMER) && HAVE_DECL_SI_TIMER)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SI_TIMER) == (-3), "SI_TIMER != -3");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SI_TIMER -3
#endif
#if defined(SI_MESGQ) || (defined(HAVE_DECL_SI_MESGQ) && HAVE_DECL_SI_MESGQ)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SI_MESGQ) == (-4), "SI_MESGQ != -4");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SI_MESGQ -4
#endif
#else
#if defined(SI_TIMER) || (defined(HAVE_DECL_SI_TIMER) && HAVE_DECL_SI_TIMER)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SI_TIMER) == (-2), "SI_TIMER != -2");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SI_TIMER -2
#endif
#if defined(SI_MESGQ) || (defined(HAVE_DECL_SI_MESGQ) && HAVE_DECL_SI_MESGQ)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SI_MESGQ) == (-3), "SI_MESGQ != -3");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SI_MESGQ -3
#endif
#if defined(SI_ASYNCIO) || (defined(HAVE_DECL_SI_ASYNCIO) && HAVE_DECL_SI_ASYNCIO)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SI_ASYNCIO) == (-4), "SI_ASYNCIO != -4");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SI_ASYNCIO -4
#endif
#endif
#if defined(SI_SIGIO) || (defined(HAVE_DECL_SI_SIGIO) && HAVE_DECL_SI_SIGIO)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SI_SIGIO) == (-5), "SI_SIGIO != -5");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SI_SIGIO -5
#endif
#if defined(SI_TKILL) || (defined(HAVE_DECL_SI_TKILL) && HAVE_DECL_SI_TKILL)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SI_TKILL) == (-6), "SI_TKILL != -6");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SI_TKILL -6
#endif
#if defined(SI_DETHREAD) || (defined(HAVE_DECL_SI_DETHREAD) && HAVE_DECL_SI_DETHREAD)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SI_DETHREAD) == (-7), "SI_DETHREAD != -7");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SI_DETHREAD -7
#endif
#if defined(SI_ASYNCNL) || (defined(HAVE_DECL_SI_ASYNCNL) && HAVE_DECL_SI_ASYNCNL)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SI_ASYNCNL) == (-60), "SI_ASYNCNL != -60");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SI_ASYNCNL -60
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

extern const struct xlat siginfo_codes[];

# else

#  if !(defined HAVE_M32_MPERS || defined HAVE_MX32_MPERS)
static
#  endif
const struct xlat siginfo_codes[] = {
 XLAT(SI_USER),
 XLAT(SI_KERNEL),
 XLAT(SI_QUEUE),

#ifdef __mips__
 XLAT(SI_ASYNCIO),
 XLAT(SI_TIMER),
 XLAT(SI_MESGQ),
#else
 XLAT(SI_TIMER),
 XLAT(SI_MESGQ),
 XLAT(SI_ASYNCIO),
#endif

 XLAT(SI_SIGIO),
 XLAT(SI_TKILL),
 XLAT(SI_DETHREAD),
 XLAT(SI_ASYNCNL),
#if defined(SI_NOINFO) || (defined(HAVE_DECL_SI_NOINFO) && HAVE_DECL_SI_NOINFO)
  XLAT(SI_NOINFO),
#endif
#if defined(SI_LWP) || (defined(HAVE_DECL_SI_LWP) && HAVE_DECL_SI_LWP)
  XLAT(SI_LWP),
#endif
 XLAT_END
};

# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
