/* Generated by ./xlat/gen.sh from ./xlat/rtnl_neightbl_attrs.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(NDTA_UNSPEC) || (defined(HAVE_DECL_NDTA_UNSPEC) && HAVE_DECL_NDTA_UNSPEC)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((NDTA_UNSPEC) == (0), "NDTA_UNSPEC != 0");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define NDTA_UNSPEC 0
#endif
#if defined(NDTA_NAME) || (defined(HAVE_DECL_NDTA_NAME) && HAVE_DECL_NDTA_NAME)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((NDTA_NAME) == (1), "NDTA_NAME != 1");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define NDTA_NAME 1
#endif
#if defined(NDTA_THRESH1) || (defined(HAVE_DECL_NDTA_THRESH1) && HAVE_DECL_NDTA_THRESH1)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((NDTA_THRESH1) == (2), "NDTA_THRESH1 != 2");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define NDTA_THRESH1 2
#endif
#if defined(NDTA_THRESH2) || (defined(HAVE_DECL_NDTA_THRESH2) && HAVE_DECL_NDTA_THRESH2)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((NDTA_THRESH2) == (3), "NDTA_THRESH2 != 3");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define NDTA_THRESH2 3
#endif
#if defined(NDTA_THRESH3) || (defined(HAVE_DECL_NDTA_THRESH3) && HAVE_DECL_NDTA_THRESH3)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((NDTA_THRESH3) == (4), "NDTA_THRESH3 != 4");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define NDTA_THRESH3 4
#endif
#if defined(NDTA_CONFIG) || (defined(HAVE_DECL_NDTA_CONFIG) && HAVE_DECL_NDTA_CONFIG)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((NDTA_CONFIG) == (5), "NDTA_CONFIG != 5");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define NDTA_CONFIG 5
#endif
#if defined(NDTA_PARMS) || (defined(HAVE_DECL_NDTA_PARMS) && HAVE_DECL_NDTA_PARMS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((NDTA_PARMS) == (6), "NDTA_PARMS != 6");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define NDTA_PARMS 6
#endif
#if defined(NDTA_STATS) || (defined(HAVE_DECL_NDTA_STATS) && HAVE_DECL_NDTA_STATS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((NDTA_STATS) == (7), "NDTA_STATS != 7");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define NDTA_STATS 7
#endif
#if defined(NDTA_GC_INTERVAL) || (defined(HAVE_DECL_NDTA_GC_INTERVAL) && HAVE_DECL_NDTA_GC_INTERVAL)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((NDTA_GC_INTERVAL) == (8), "NDTA_GC_INTERVAL != 8");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define NDTA_GC_INTERVAL 8
#endif
#if defined(NDTA_PAD) || (defined(HAVE_DECL_NDTA_PAD) && HAVE_DECL_NDTA_PAD)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((NDTA_PAD) == (9), "NDTA_PAD != 9");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define NDTA_PAD 9
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat rtnl_neightbl_attrs in mpers mode

# else

static
const struct xlat rtnl_neightbl_attrs[] = {
 XLAT(NDTA_UNSPEC),
 XLAT(NDTA_NAME),
 XLAT(NDTA_THRESH1),
 XLAT(NDTA_THRESH2),
 XLAT(NDTA_THRESH3),
 XLAT(NDTA_CONFIG),
 XLAT(NDTA_PARMS),
 XLAT(NDTA_STATS),
 XLAT(NDTA_GC_INTERVAL),
 XLAT(NDTA_PAD),
 XLAT_END
};

# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
