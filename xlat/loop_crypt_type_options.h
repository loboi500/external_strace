/* Generated by ./xlat/gen.sh from ./xlat/loop_crypt_type_options.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"


#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

extern const struct xlat loop_crypt_type_options[];

# else

#  if !(defined HAVE_M32_MPERS || defined HAVE_MX32_MPERS)
static
#  endif
const struct xlat loop_crypt_type_options[] = {
#if defined(LO_CRYPT_NONE) || (defined(HAVE_DECL_LO_CRYPT_NONE) && HAVE_DECL_LO_CRYPT_NONE)
  XLAT(LO_CRYPT_NONE),
#endif
#if defined(LO_CRYPT_XOR) || (defined(HAVE_DECL_LO_CRYPT_XOR) && HAVE_DECL_LO_CRYPT_XOR)
  XLAT(LO_CRYPT_XOR),
#endif
#if defined(LO_CRYPT_DES) || (defined(HAVE_DECL_LO_CRYPT_DES) && HAVE_DECL_LO_CRYPT_DES)
  XLAT(LO_CRYPT_DES),
#endif
#if defined(LO_CRYPT_FISH2) || (defined(HAVE_DECL_LO_CRYPT_FISH2) && HAVE_DECL_LO_CRYPT_FISH2)
  XLAT(LO_CRYPT_FISH2),
#endif
#if defined(LO_CRYPT_BLOW) || (defined(HAVE_DECL_LO_CRYPT_BLOW) && HAVE_DECL_LO_CRYPT_BLOW)
  XLAT(LO_CRYPT_BLOW),
#endif
#if defined(LO_CRYPT_CAST128) || (defined(HAVE_DECL_LO_CRYPT_CAST128) && HAVE_DECL_LO_CRYPT_CAST128)
  XLAT(LO_CRYPT_CAST128),
#endif
#if defined(LO_CRYPT_IDEA) || (defined(HAVE_DECL_LO_CRYPT_IDEA) && HAVE_DECL_LO_CRYPT_IDEA)
  XLAT(LO_CRYPT_IDEA),
#endif
#if defined(LO_CRYPT_DUMMY) || (defined(HAVE_DECL_LO_CRYPT_DUMMY) && HAVE_DECL_LO_CRYPT_DUMMY)
  XLAT(LO_CRYPT_DUMMY),
#endif
#if defined(LO_CRYPT_SKIPJACK) || (defined(HAVE_DECL_LO_CRYPT_SKIPJACK) && HAVE_DECL_LO_CRYPT_SKIPJACK)
  XLAT(LO_CRYPT_SKIPJACK),
#endif
#if defined(LO_CRYPT_CRYPTOAPI) || (defined(HAVE_DECL_LO_CRYPT_CRYPTOAPI) && HAVE_DECL_LO_CRYPT_CRYPTOAPI)
  XLAT(LO_CRYPT_CRYPTOAPI),
#endif
 XLAT_END
};

# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
