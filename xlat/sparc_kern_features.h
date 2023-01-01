/* Generated by ./xlat/gen.sh from ./xlat/sparc_kern_features.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(KERN_FEATURE_MIXED_MODE_STACK) || (defined(HAVE_DECL_KERN_FEATURE_MIXED_MODE_STACK) && HAVE_DECL_KERN_FEATURE_MIXED_MODE_STACK)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((KERN_FEATURE_MIXED_MODE_STACK) == (1), "KERN_FEATURE_MIXED_MODE_STACK != 1");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define KERN_FEATURE_MIXED_MODE_STACK 1
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat sparc_kern_features in mpers mode

# else

static
const struct xlat sparc_kern_features[] = {
 XLAT(KERN_FEATURE_MIXED_MODE_STACK),
 XLAT_END
};

# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
