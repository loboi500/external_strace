/* Generated by ./xlat/gen.sh from ./xlat/sg_io_flags.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(SG_FLAG_DIRECT_IO) || (defined(HAVE_DECL_SG_FLAG_DIRECT_IO) && HAVE_DECL_SG_FLAG_DIRECT_IO)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SG_FLAG_DIRECT_IO) == (1), "SG_FLAG_DIRECT_IO != 1");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SG_FLAG_DIRECT_IO 1
#endif
#if defined(SG_FLAG_UNUSED_LUN_INHIBIT) || (defined(HAVE_DECL_SG_FLAG_UNUSED_LUN_INHIBIT) && HAVE_DECL_SG_FLAG_UNUSED_LUN_INHIBIT)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SG_FLAG_UNUSED_LUN_INHIBIT) == (2), "SG_FLAG_UNUSED_LUN_INHIBIT != 2");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SG_FLAG_UNUSED_LUN_INHIBIT 2
#endif
#if defined(SG_FLAG_MMAP_IO) || (defined(HAVE_DECL_SG_FLAG_MMAP_IO) && HAVE_DECL_SG_FLAG_MMAP_IO)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SG_FLAG_MMAP_IO) == (4), "SG_FLAG_MMAP_IO != 4");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SG_FLAG_MMAP_IO 4
#endif
#if defined(SG_FLAG_NO_DXFER) || (defined(HAVE_DECL_SG_FLAG_NO_DXFER) && HAVE_DECL_SG_FLAG_NO_DXFER)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SG_FLAG_NO_DXFER) == (0x10000), "SG_FLAG_NO_DXFER != 0x10000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SG_FLAG_NO_DXFER 0x10000
#endif
#if defined(SG_FLAG_Q_AT_TAIL) || (defined(HAVE_DECL_SG_FLAG_Q_AT_TAIL) && HAVE_DECL_SG_FLAG_Q_AT_TAIL)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SG_FLAG_Q_AT_TAIL) == (0x10), "SG_FLAG_Q_AT_TAIL != 0x10");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SG_FLAG_Q_AT_TAIL 0x10
#endif
#if defined(SG_FLAG_Q_AT_HEAD) || (defined(HAVE_DECL_SG_FLAG_Q_AT_HEAD) && HAVE_DECL_SG_FLAG_Q_AT_HEAD)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SG_FLAG_Q_AT_HEAD) == (0x20), "SG_FLAG_Q_AT_HEAD != 0x20");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SG_FLAG_Q_AT_HEAD 0x20
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

extern const struct xlat sg_io_flags[];

# else

#  if !(defined HAVE_M32_MPERS || defined HAVE_MX32_MPERS)
static
#  endif
const struct xlat sg_io_flags[] = {
 XLAT(SG_FLAG_DIRECT_IO),
 XLAT(SG_FLAG_UNUSED_LUN_INHIBIT),
 XLAT(SG_FLAG_MMAP_IO),
 XLAT(SG_FLAG_NO_DXFER),
 XLAT(SG_FLAG_Q_AT_TAIL),
 XLAT(SG_FLAG_Q_AT_HEAD),
 XLAT_END
};

# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
