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
    static inline pair_##NAME##_t pair_##NAME##_new(void *first, void *second)  \
    {                                                         \
        pair_t p;                                             \
        p.first = first;                                      \
        p.second = second;                                    \
        return p;                                             \
    }

/**
 * \brief Generic pair structure to hold two pointers.
 *
 * This struct allows storing a pair of pointers to any type of data.
 * It is commonly used to associate two related values without specifying their types.
 *
 * Members:
 *   void *first  - Pointer to the first element of the pair.
 *   void *second - Pointer to the second element of the pair.
 */
typedef struct
{
    void *first;  /**< Pointer to the first element of the pair */
    void *second; /**< Pointer to the second element of the pair */
} generic_pair_t;

/**
 * \brief Creates a generic pair from two pointers.
 *
 * This function initializes a \ref pair_t structure with the provided pointers.
 *
 * \param first  Pointer to the first element of the pair.
 * \param second Pointer to the second element of the pair.
 * \return Initialized \ref pair_t containing the two pointers.
 */
static inline generic_pair_t generic_pair_new(void *first, void *second)
{
    generic_pair_t p;
    p.first = first;   /**< Initialize the first element of the pair */
    p.second = second; /**< Initialize the second element of the pair */
    return p;          /**< Return the initialized pair */
}

// ============= FLUENT LIB C++ =============
#if defined(__cplusplus)
}
#endif

#endif //FLUENT_LIBC_PAIR_LIBRARY_H