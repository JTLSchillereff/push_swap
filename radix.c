/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleal <jleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 21:18:01 by jleal             #+#    #+#             */
/*   Updated: 2025/05/25 09:44:33 by jleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Function to find the maximum number in the stack
int find_max_bits(t_node *stack) {
    int max = 0;
    int max_bits = 0;

    // Find the largest number in the stack
    while (stack) {
        if (stack->value > max)
            max = stack->value;
        stack = stack->next;
    }

    // Count the number of bits needed to represent the largest number
    while ((max >> max_bits) != 0)
        max_bits++;
    return max_bits;
}

// Radix sort implementation
void ps_radix_sort(t_node **a, t_node **b) {
    int max_bits = find_max_bits(*a);
    int i, j, sl;

    sl = stack_len(*a);
    for (i = 0; i < max_bits; i++) {
        for (j = 0; j < sl; j++) {
            if ((((*a)->value >> i) & 1) == 0)
                pb(a, b);  // Push to stack b if the i-th bit is 0
            else
                ra(a);     // Rotate stack a if the i-th bit is 1
        }

        // Move all numbers back from stack b to stack a
        while (*b)
            pa(a, b);
    }
}