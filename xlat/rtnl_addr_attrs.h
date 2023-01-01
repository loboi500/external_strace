/* Generated by ./xlat/gen.sh from ./xlat/rtnl_addr_attrs.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(IFA_UNSPEC) || (defined(HAVE_DECL_IFA_UNSPEC) && HAVE_DECL_IFA_UNSPEC)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IFA_UNSPEC) == (0), "IFA_UNSPEC != 0");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IFA_UNSPEC 0
#endif
#if defined(IFA_ADDRESS) || (defined(HAVE_DECL_IFA_ADDRESS) && HAVE_DECL_IFA_ADDRESS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IFA_ADDRESS) == (1), "IFA_ADDRESS != 1");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IFA_ADDRESS 1
#endif
#if defined(IFA_LOCAL) || (defined(HAVE_DECL_IFA_LOCAL) && HAVE_DECL_IFA_LOCAL)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IFA_LOCAL) == (2), "IFA_LOCAL != 2");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IFA_LOCAL 2
#endif
#if defined(IFA_LABEL) || (defined(HAVE_DECL_IFA_LABEL) && HAVE_DECL_IFA_LABEL)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IFA_LABEL) == (3), "IFA_LABEL != 3");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IFA_LABEL 3
#endif
#if defined(IFA_BROADCAST) || (defined(HAVE_DECL_IFA_BROADCAST) && HAVE_DECL_IFA_BROADCAST)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IFA_BROADCAST) == (4), "IFA_BROADCAST != 4");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IFA_BROADCAST 4
#endif
#if defined(IFA_ANYCAST) || (defined(HAVE_DECL_IFA_ANYCAST) && HAVE_DECL_IFA_ANYCAST)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IFA_ANYCAST) == (5), "IFA_ANYCAST != 5");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IFA_ANYCAST 5
#endif
#if defined(IFA_CACHEINFO) || (defined(HAVE_DECL_IFA_CACHEINFO) && HAVE_DECL_IFA_CACHEINFO)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IFA_CACHEINFO) == (6), "IFA_CACHEINFO != 6");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IFA_CACHEINFO 6
#endif
#if defined(IFA_MULTICAST) || (defined(HAVE_DECL_IFA_MULTICAST) && HAVE_DECL_IFA_MULTICAST)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IFA_MULTICAST) == (7), "IFA_MULTICAST != 7");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IFA_MULTICAST 7
#endif
#if defined(IFA_FLAGS) || (defined(HAVE_DECL_IFA_FLAGS) && HAVE_DECL_IFA_FLAGS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IFA_FLAGS) == (8), "IFA_FLAGS != 8");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IFA_FLAGS 8
#endif
#if defined(IFA_RT_PRIORITY) || (defined(HAVE_DECL_IFA_RT_PRIORITY) && HAVE_DECL_IFA_RT_PRIORITY)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IFA_RT_PRIORITY) == (9), "IFA_RT_PRIORITY != 9");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IFA_RT_PRIORITY 9
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat rtnl_addr_attrs in mpers mode

# else

static
const struct xlat rtnl_addr_attrs[] = {
 XLAT(IFA_UNSPEC),
 XLAT(IFA_ADDRESS),
 XLAT(IFA_LOCAL),
 XLAT(IFA_LABEL),
 XLAT(IFA_BROADCAST),
 XLAT(IFA_ANYCAST),
 XLAT(IFA_CACHEINFO),
 XLAT(IFA_MULTICAST),
 XLAT(IFA_FLAGS),
 XLAT(IFA_RT_PRIORITY),
 XLAT_END
};

# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
