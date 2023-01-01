/* Generated by ./xlat/gen.sh from ./xlat/mmap_prot.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"


#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat mmap_prot in mpers mode

# else

static
const struct xlat mmap_prot[] = {
#if defined(PROT_NONE) || (defined(HAVE_DECL_PROT_NONE) && HAVE_DECL_PROT_NONE)
  XLAT(PROT_NONE),
#endif
#if defined(PROT_READ) || (defined(HAVE_DECL_PROT_READ) && HAVE_DECL_PROT_READ)
  XLAT(PROT_READ),
#endif
#if defined(PROT_WRITE) || (defined(HAVE_DECL_PROT_WRITE) && HAVE_DECL_PROT_WRITE)
  XLAT(PROT_WRITE),
#endif
#if defined(PROT_EXEC) || (defined(HAVE_DECL_PROT_EXEC) && HAVE_DECL_PROT_EXEC)
  XLAT(PROT_EXEC),
#endif
#if defined(PROT_SEM) || (defined(HAVE_DECL_PROT_SEM) && HAVE_DECL_PROT_SEM)
  XLAT(PROT_SEM),
#endif
#if defined(PROT_GROWSDOWN) || (defined(HAVE_DECL_PROT_GROWSDOWN) && HAVE_DECL_PROT_GROWSDOWN)
  XLAT(PROT_GROWSDOWN),
#endif
#if defined(PROT_GROWSUP) || (defined(HAVE_DECL_PROT_GROWSUP) && HAVE_DECL_PROT_GROWSUP)
  XLAT(PROT_GROWSUP),
#endif
#if defined(PROT_SAO) || (defined(HAVE_DECL_PROT_SAO) && HAVE_DECL_PROT_SAO)
  XLAT(PROT_SAO),
#endif
#if defined(PROT_ADI) || (defined(HAVE_DECL_PROT_ADI) && HAVE_DECL_PROT_ADI)
  XLAT(PROT_ADI),
#endif
 XLAT_END
};

# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
