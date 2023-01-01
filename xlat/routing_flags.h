/* Generated by ./xlat/gen.sh from ./xlat/routing_flags.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"


#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat routing_flags in mpers mode

# else

static
const struct xlat routing_flags[] = {
#if defined(RTM_F_NOTIFY) || (defined(HAVE_DECL_RTM_F_NOTIFY) && HAVE_DECL_RTM_F_NOTIFY)
  XLAT(RTM_F_NOTIFY),
#endif
#if defined(RTM_F_CLONED) || (defined(HAVE_DECL_RTM_F_CLONED) && HAVE_DECL_RTM_F_CLONED)
  XLAT(RTM_F_CLONED),
#endif
#if defined(RTM_F_EQUALIZE) || (defined(HAVE_DECL_RTM_F_EQUALIZE) && HAVE_DECL_RTM_F_EQUALIZE)
  XLAT(RTM_F_EQUALIZE),
#endif
#if defined(RTM_F_PREFIX) || (defined(HAVE_DECL_RTM_F_PREFIX) && HAVE_DECL_RTM_F_PREFIX)
  XLAT(RTM_F_PREFIX),
#endif
#if defined(RTM_F_LOOKUP_TABLE) || (defined(HAVE_DECL_RTM_F_LOOKUP_TABLE) && HAVE_DECL_RTM_F_LOOKUP_TABLE)
  XLAT(RTM_F_LOOKUP_TABLE),
#endif
 XLAT_END
};

# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
