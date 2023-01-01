/* Generated by ./xlat/gen.sh from ./xlat/netlink_states.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(NETLINK_UNCONNECTED) || (defined(HAVE_DECL_NETLINK_UNCONNECTED) && HAVE_DECL_NETLINK_UNCONNECTED)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((NETLINK_UNCONNECTED) == (0), "NETLINK_UNCONNECTED != 0");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define NETLINK_UNCONNECTED 0
#endif
#if defined(NETLINK_CONNECTED) || (defined(HAVE_DECL_NETLINK_CONNECTED) && HAVE_DECL_NETLINK_CONNECTED)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((NETLINK_CONNECTED) == (1), "NETLINK_CONNECTED != 1");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define NETLINK_CONNECTED 1
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat netlink_states in mpers mode

# else

static
const struct xlat netlink_states[] = {
 XLAT(NETLINK_UNCONNECTED),
 XLAT(NETLINK_CONNECTED),
 XLAT_END
};

# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
