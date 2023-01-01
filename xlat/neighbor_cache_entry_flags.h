/* Generated by ./xlat/gen.sh from ./xlat/neighbor_cache_entry_flags.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"


#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat neighbor_cache_entry_flags in mpers mode

# else

static
const struct xlat neighbor_cache_entry_flags[] = {
#if defined(NTF_USE) || (defined(HAVE_DECL_NTF_USE) && HAVE_DECL_NTF_USE)
  XLAT(NTF_USE),
#endif
#if defined(NTF_SELF) || (defined(HAVE_DECL_NTF_SELF) && HAVE_DECL_NTF_SELF)
  XLAT(NTF_SELF),
#endif
#if defined(NTF_MASTER) || (defined(HAVE_DECL_NTF_MASTER) && HAVE_DECL_NTF_MASTER)
  XLAT(NTF_MASTER),
#endif
#if defined(NTF_PROXY) || (defined(HAVE_DECL_NTF_PROXY) && HAVE_DECL_NTF_PROXY)
  XLAT(NTF_PROXY),
#endif
#if defined(NTF_EXT_LEARNED) || (defined(HAVE_DECL_NTF_EXT_LEARNED) && HAVE_DECL_NTF_EXT_LEARNED)
  XLAT(NTF_EXT_LEARNED),
#endif
#if defined(NTF_ROUTER) || (defined(HAVE_DECL_NTF_ROUTER) && HAVE_DECL_NTF_ROUTER)
  XLAT(NTF_ROUTER),
#endif
 XLAT_END
};

# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
