/* Generated by ./xlat/gen.sh from ./xlat/bt_protocols.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(BTPROTO_L2CAP) || (defined(HAVE_DECL_BTPROTO_L2CAP) && HAVE_DECL_BTPROTO_L2CAP)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BTPROTO_L2CAP) == (0), "BTPROTO_L2CAP != 0");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BTPROTO_L2CAP 0
#endif
#if defined(BTPROTO_HCI) || (defined(HAVE_DECL_BTPROTO_HCI) && HAVE_DECL_BTPROTO_HCI)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BTPROTO_HCI) == (1), "BTPROTO_HCI != 1");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BTPROTO_HCI 1
#endif
#if defined(BTPROTO_SCO) || (defined(HAVE_DECL_BTPROTO_SCO) && HAVE_DECL_BTPROTO_SCO)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BTPROTO_SCO) == (2), "BTPROTO_SCO != 2");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BTPROTO_SCO 2
#endif
#if defined(BTPROTO_RFCOMM) || (defined(HAVE_DECL_BTPROTO_RFCOMM) && HAVE_DECL_BTPROTO_RFCOMM)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BTPROTO_RFCOMM) == (3), "BTPROTO_RFCOMM != 3");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BTPROTO_RFCOMM 3
#endif
#if defined(BTPROTO_BNEP) || (defined(HAVE_DECL_BTPROTO_BNEP) && HAVE_DECL_BTPROTO_BNEP)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BTPROTO_BNEP) == (4), "BTPROTO_BNEP != 4");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BTPROTO_BNEP 4
#endif
#if defined(BTPROTO_CMTP) || (defined(HAVE_DECL_BTPROTO_CMTP) && HAVE_DECL_BTPROTO_CMTP)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BTPROTO_CMTP) == (5), "BTPROTO_CMTP != 5");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BTPROTO_CMTP 5
#endif
#if defined(BTPROTO_HIDP) || (defined(HAVE_DECL_BTPROTO_HIDP) && HAVE_DECL_BTPROTO_HIDP)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BTPROTO_HIDP) == (6), "BTPROTO_HIDP != 6");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BTPROTO_HIDP 6
#endif
#if defined(BTPROTO_AVDTP) || (defined(HAVE_DECL_BTPROTO_AVDTP) && HAVE_DECL_BTPROTO_AVDTP)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BTPROTO_AVDTP) == (7), "BTPROTO_AVDTP != 7");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BTPROTO_AVDTP 7
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat bt_protocols in mpers mode

# else

static
const struct xlat bt_protocols[] = {
 [BTPROTO_L2CAP] = XLAT(BTPROTO_L2CAP),
 [BTPROTO_HCI] = XLAT(BTPROTO_HCI),
 [BTPROTO_SCO] = XLAT(BTPROTO_SCO),
 [BTPROTO_RFCOMM] = XLAT(BTPROTO_RFCOMM),
 [BTPROTO_BNEP] = XLAT(BTPROTO_BNEP),
 [BTPROTO_CMTP] = XLAT(BTPROTO_CMTP),
 [BTPROTO_HIDP] = XLAT(BTPROTO_HIDP),
 [BTPROTO_AVDTP] = XLAT(BTPROTO_AVDTP),
 XLAT_END
};

# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
