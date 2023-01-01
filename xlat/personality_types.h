/* Generated by ./xlat/gen.sh from ./xlat/personality_types.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(PER_LINUX) || (defined(HAVE_DECL_PER_LINUX) && HAVE_DECL_PER_LINUX)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PER_LINUX) == (0), "PER_LINUX != 0");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define PER_LINUX 0
#endif
#if defined(PER_LINUX_32BIT) || (defined(HAVE_DECL_PER_LINUX_32BIT) && HAVE_DECL_PER_LINUX_32BIT)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PER_LINUX_32BIT) == (ADDR_LIMIT_32BIT), "PER_LINUX_32BIT != ADDR_LIMIT_32BIT");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define PER_LINUX_32BIT ADDR_LIMIT_32BIT
#endif
#if defined(PER_LINUX_FDPIC) || (defined(HAVE_DECL_PER_LINUX_FDPIC) && HAVE_DECL_PER_LINUX_FDPIC)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PER_LINUX_FDPIC) == (FDPIC_FUNCPTRS), "PER_LINUX_FDPIC != FDPIC_FUNCPTRS");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define PER_LINUX_FDPIC FDPIC_FUNCPTRS
#endif
#if defined(PER_SVR4) || (defined(HAVE_DECL_PER_SVR4) && HAVE_DECL_PER_SVR4)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PER_SVR4) == ((0x0001 | STICKY_TIMEOUTS | MMAP_PAGE_ZERO)), "PER_SVR4 != (0x0001 | STICKY_TIMEOUTS | MMAP_PAGE_ZERO)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define PER_SVR4 (0x0001 | STICKY_TIMEOUTS | MMAP_PAGE_ZERO)
#endif
#if defined(PER_SVR3) || (defined(HAVE_DECL_PER_SVR3) && HAVE_DECL_PER_SVR3)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PER_SVR3) == ((0x0002 | STICKY_TIMEOUTS | SHORT_INODE)), "PER_SVR3 != (0x0002 | STICKY_TIMEOUTS | SHORT_INODE)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define PER_SVR3 (0x0002 | STICKY_TIMEOUTS | SHORT_INODE)
#endif
#if defined(PER_SCOSVR3) || (defined(HAVE_DECL_PER_SCOSVR3) && HAVE_DECL_PER_SCOSVR3)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PER_SCOSVR3) == ((0x0003 | STICKY_TIMEOUTS | WHOLE_SECONDS | SHORT_INODE)), "PER_SCOSVR3 != (0x0003 | STICKY_TIMEOUTS | WHOLE_SECONDS | SHORT_INODE)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define PER_SCOSVR3 (0x0003 | STICKY_TIMEOUTS | WHOLE_SECONDS | SHORT_INODE)
#endif
#if defined(PER_OSR5) || (defined(HAVE_DECL_PER_OSR5) && HAVE_DECL_PER_OSR5)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PER_OSR5) == ((0x0003 | STICKY_TIMEOUTS | WHOLE_SECONDS)), "PER_OSR5 != (0x0003 | STICKY_TIMEOUTS | WHOLE_SECONDS)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define PER_OSR5 (0x0003 | STICKY_TIMEOUTS | WHOLE_SECONDS)
#endif
#if defined(PER_WYSEV386) || (defined(HAVE_DECL_PER_WYSEV386) && HAVE_DECL_PER_WYSEV386)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PER_WYSEV386) == ((0x0004 | STICKY_TIMEOUTS | SHORT_INODE)), "PER_WYSEV386 != (0x0004 | STICKY_TIMEOUTS | SHORT_INODE)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define PER_WYSEV386 (0x0004 | STICKY_TIMEOUTS | SHORT_INODE)
#endif
#if defined(PER_ISCR4) || (defined(HAVE_DECL_PER_ISCR4) && HAVE_DECL_PER_ISCR4)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PER_ISCR4) == ((0x0005 | STICKY_TIMEOUTS)), "PER_ISCR4 != (0x0005 | STICKY_TIMEOUTS)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define PER_ISCR4 (0x0005 | STICKY_TIMEOUTS)
#endif
#if defined(PER_BSD) || (defined(HAVE_DECL_PER_BSD) && HAVE_DECL_PER_BSD)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PER_BSD) == (0x0006), "PER_BSD != 0x0006");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define PER_BSD 0x0006
#endif
#if defined(PER_SUNOS) || (defined(HAVE_DECL_PER_SUNOS) && HAVE_DECL_PER_SUNOS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PER_SUNOS) == ((0x0006 | STICKY_TIMEOUTS)), "PER_SUNOS != (0x0006 | STICKY_TIMEOUTS)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define PER_SUNOS (0x0006 | STICKY_TIMEOUTS)
#endif
#if defined(PER_XENIX) || (defined(HAVE_DECL_PER_XENIX) && HAVE_DECL_PER_XENIX)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PER_XENIX) == ((0x0007 | STICKY_TIMEOUTS | SHORT_INODE)), "PER_XENIX != (0x0007 | STICKY_TIMEOUTS | SHORT_INODE)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define PER_XENIX (0x0007 | STICKY_TIMEOUTS | SHORT_INODE)
#endif
#if defined(PER_LINUX32) || (defined(HAVE_DECL_PER_LINUX32) && HAVE_DECL_PER_LINUX32)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PER_LINUX32) == (0x0008), "PER_LINUX32 != 0x0008");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define PER_LINUX32 0x0008
#endif
#if defined(PER_LINUX32_3GB) || (defined(HAVE_DECL_PER_LINUX32_3GB) && HAVE_DECL_PER_LINUX32_3GB)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PER_LINUX32_3GB) == ((0x0008 | ADDR_LIMIT_3GB)), "PER_LINUX32_3GB != (0x0008 | ADDR_LIMIT_3GB)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define PER_LINUX32_3GB (0x0008 | ADDR_LIMIT_3GB)
#endif
#if defined(PER_IRIX32) || (defined(HAVE_DECL_PER_IRIX32) && HAVE_DECL_PER_IRIX32)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PER_IRIX32) == ((0x0009 | STICKY_TIMEOUTS)), "PER_IRIX32 != (0x0009 | STICKY_TIMEOUTS)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define PER_IRIX32 (0x0009 | STICKY_TIMEOUTS)
#endif
#if defined(PER_IRIXN32) || (defined(HAVE_DECL_PER_IRIXN32) && HAVE_DECL_PER_IRIXN32)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PER_IRIXN32) == ((0x000a | STICKY_TIMEOUTS)), "PER_IRIXN32 != (0x000a | STICKY_TIMEOUTS)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define PER_IRIXN32 (0x000a | STICKY_TIMEOUTS)
#endif
#if defined(PER_IRIX64) || (defined(HAVE_DECL_PER_IRIX64) && HAVE_DECL_PER_IRIX64)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PER_IRIX64) == ((0x000b | STICKY_TIMEOUTS)), "PER_IRIX64 != (0x000b | STICKY_TIMEOUTS)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define PER_IRIX64 (0x000b | STICKY_TIMEOUTS)
#endif
#if defined(PER_RISCOS) || (defined(HAVE_DECL_PER_RISCOS) && HAVE_DECL_PER_RISCOS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PER_RISCOS) == (0x000c), "PER_RISCOS != 0x000c");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define PER_RISCOS 0x000c
#endif
#if defined(PER_SOLARIS) || (defined(HAVE_DECL_PER_SOLARIS) && HAVE_DECL_PER_SOLARIS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PER_SOLARIS) == ((0x000d | STICKY_TIMEOUTS)), "PER_SOLARIS != (0x000d | STICKY_TIMEOUTS)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define PER_SOLARIS (0x000d | STICKY_TIMEOUTS)
#endif
#if defined(PER_UW7) || (defined(HAVE_DECL_PER_UW7) && HAVE_DECL_PER_UW7)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PER_UW7) == ((0x000e | STICKY_TIMEOUTS | MMAP_PAGE_ZERO)), "PER_UW7 != (0x000e | STICKY_TIMEOUTS | MMAP_PAGE_ZERO)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define PER_UW7 (0x000e | STICKY_TIMEOUTS | MMAP_PAGE_ZERO)
#endif
#if defined(PER_OSF4) || (defined(HAVE_DECL_PER_OSF4) && HAVE_DECL_PER_OSF4)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PER_OSF4) == (0x000f), "PER_OSF4 != 0x000f");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define PER_OSF4 0x000f
#endif
#if defined(PER_HPUX) || (defined(HAVE_DECL_PER_HPUX) && HAVE_DECL_PER_HPUX)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PER_HPUX) == (0x0010), "PER_HPUX != 0x0010");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define PER_HPUX 0x0010
#endif
#if defined(PER_MASK) || (defined(HAVE_DECL_PER_MASK) && HAVE_DECL_PER_MASK)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PER_MASK) == (0x00ff), "PER_MASK != 0x00ff");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define PER_MASK 0x00ff
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat personality_types in mpers mode

# else

static
const struct xlat personality_types[] = {
 XLAT(PER_LINUX),
 XLAT(PER_LINUX_32BIT),
 XLAT(PER_LINUX_FDPIC),
 XLAT(PER_SVR4),
 XLAT(PER_SVR3),
 XLAT(PER_SCOSVR3),
 XLAT(PER_OSR5),
 XLAT(PER_WYSEV386),
 XLAT(PER_ISCR4),
 XLAT(PER_BSD),
 XLAT(PER_SUNOS),
 XLAT(PER_XENIX),
 XLAT(PER_LINUX32),
 XLAT(PER_LINUX32_3GB),
 XLAT(PER_IRIX32),
 XLAT(PER_IRIXN32),
 XLAT(PER_IRIX64),
 XLAT(PER_RISCOS),
 XLAT(PER_SOLARIS),
 XLAT(PER_UW7),
 XLAT(PER_OSF4),
 XLAT(PER_HPUX),
 XLAT(PER_MASK),
 XLAT_END
};

# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
