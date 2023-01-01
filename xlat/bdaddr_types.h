/* Generated by ./xlat/gen.sh from ./xlat/bdaddr_types.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(BDADDR_BREDR) || (defined(HAVE_DECL_BDADDR_BREDR) && HAVE_DECL_BDADDR_BREDR)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BDADDR_BREDR) == (0), "BDADDR_BREDR != 0");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BDADDR_BREDR 0
#endif
#if defined(BDADDR_LE_PUBLIC) || (defined(HAVE_DECL_BDADDR_LE_PUBLIC) && HAVE_DECL_BDADDR_LE_PUBLIC)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BDADDR_LE_PUBLIC) == (1), "BDADDR_LE_PUBLIC != 1");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BDADDR_LE_PUBLIC 1
#endif
#if defined(BDADDR_LE_RANDOM) || (defined(HAVE_DECL_BDADDR_LE_RANDOM) && HAVE_DECL_BDADDR_LE_RANDOM)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BDADDR_LE_RANDOM) == (2), "BDADDR_LE_RANDOM != 2");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BDADDR_LE_RANDOM 2
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat bdaddr_types in mpers mode

# else

static
const struct xlat bdaddr_types[] = {
 [BDADDR_BREDR] = XLAT(BDADDR_BREDR),
 [BDADDR_LE_PUBLIC] = XLAT(BDADDR_LE_PUBLIC),
 [BDADDR_LE_RANDOM] = XLAT(BDADDR_LE_RANDOM),
 XLAT_END
};

# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
