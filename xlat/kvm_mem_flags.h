/* Generated by ./xlat/gen.sh from ./xlat/kvm_mem_flags.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(KVM_MEM_LOG_DIRTY_PAGES) || (defined(HAVE_DECL_KVM_MEM_LOG_DIRTY_PAGES) && HAVE_DECL_KVM_MEM_LOG_DIRTY_PAGES)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((KVM_MEM_LOG_DIRTY_PAGES) == ((1 << 0)), "KVM_MEM_LOG_DIRTY_PAGES != (1 << 0)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define KVM_MEM_LOG_DIRTY_PAGES (1 << 0)
#endif
#if defined(KVM_MEM_READONLY) || (defined(HAVE_DECL_KVM_MEM_READONLY) && HAVE_DECL_KVM_MEM_READONLY)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((KVM_MEM_READONLY) == ((1 << 1)), "KVM_MEM_READONLY != (1 << 1)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define KVM_MEM_READONLY (1 << 1)
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat kvm_mem_flags in mpers mode

# else

static
const struct xlat kvm_mem_flags[] = {
 XLAT(KVM_MEM_LOG_DIRTY_PAGES),
 XLAT(KVM_MEM_READONLY),
 XLAT_END
};

# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
