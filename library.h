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
} pair_t;

/**
 * \brief Creates a generic pair from two pointers.
 *
 * This function initializes a \ref pair_t structure with the provided pointers.
 *
 * \param first  Pointer to the first element of the pair.
 * \param second Pointer to the second element of the pair.
 * \return Initialized \ref pair_t containing the two pointers.
 */
static inline pair_t pair_new(void *first, void *second)
{
    pair_t p;
    p.first = first;   /**< Initialize the first element of the pair */
    p.second = second; /**< Initialize the second element of the pair */
    return p;          /**< Return the initialized pair */
}

#endif //FLUENT_LIBC_PAIR_LIBRARY_H