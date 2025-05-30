/*
 * This code is distributed under the terms of the GNU General Public License.
 * For more information, please refer to the LICENSE file in the root directory.
 * -------------------------------------------------
 * Copyright (C) 2025 Rodrigo R.
 * This program comes with ABSOLUTELY NO WARRANTY; for details type show w'.
 * This is free software, and you are welcome to redistribute it
 * under certain conditions; type show c' for details.
*/

#ifndef FLUENT_LIBC_PAIR_LIBRARY_H
#define FLUENT_LIBC_PAIR_LIBRARY_H

// ============= FLUENT LIB C =============
// Generic Pair Utility
// ----------------------------------------
// Lightweight utility to group two arbitrary pointers together.
// Useful for functions that need to return or associate two values.
//
// Features:
// - `pair_t`: Struct with two `void *` fields: `first` and `second`
// - `pair_new`: Inline constructor for easy instantiation
//
// Usage Example:
// ----------------------------------------
//   int a = 1, b = 2;
//   pair_t p = pair_new(&a, &b);
//   printf("First = %d, Second = %d\n", *(int*)p.first, *(int*)p.second);

// ============= FLUENT LIB C++ =============
#if defined(__cplusplus)
extern "C"
{
#endif

#define DEFINE_PAIR_T(K, V, NAME)                             \
    typedef struct                                            \
    {                                                         \
        K first;                                              \
        V second;                                             \
    } pair_##NAME##_t;                                        \
                                                              \
    static inline pair_##NAME##_t pair_##NAME##_new(K first, V second)  \
    {                                                         \
        pair_##NAME##_t p;                                             \
        p.first = first;                                      \
        p.second = second;                                    \
        return p;                                             \
    }

#ifndef FLUENT_LIBC_PAIR_GENERIC_DEFINED
    DEFINE_PAIR_T(void *, void *, generic)
#   define FLUENT_LIBC_PAIR_GENERIC_DEFINED 1
#endif

// ============= FLUENT LIB C++ =============
#if defined(__cplusplus)
}
#endif

#endif //FLUENT_LIBC_PAIR_LIBRARY_H