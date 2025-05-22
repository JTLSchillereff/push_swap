/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleal <jleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 13:18:09 by jleal             #+#    #+#             */
/*   Updated: 2025/05/22 18:21:18 by jleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	fetch_cheapest_b(t_node **a, t_node **b)
{
	t_node	*cheapest;
	t_node	*target;

	if (!*b && !*a)
		return ;
	cheapest = find_cheapest(*b);
	target = cheapest->target;
	if (*b == cheapest && *a == target)
		return ;
	if (!cheapest->above_median && !target->above_median)
	{
		while (*b != cheapest && *a != target)
			rrr(b, a);
		while (*b != cheapest)
			rrb(b);
		while (*a != target)
			rra(a);
		return ;
	}
	while (*b != cheapest && *a != target)
		rr(b, a);
	while (*b != cheapest)
		rb(b);
	while (*a != target)
		ra(a);
	return ;
}

void	push_swap(t_node **a, t_node **b)
{
	int sl;
	t_node	*smallest;

	sl = stack_len(*a);
	print_stacks(a, b);
	if (sl < 4)
	{
		mini_sort(a);
		return ;
	}
	while (sl-- > 3)
	{
		pb(a, b);
		print_stacks(a, b);
	}
	mini_sort(a);
	while (*b)
	{
		init_nodes(*a, *b);
		fetch_cheapest_b(a, b);
		pa(a, b);
		print_stacks(a, b);
	}
	set_current_position(*a);
	smallest = find_smallest(*a);
	if (!smallest->above_median)
		rra(a);
	else
		ra(a);
	print_stacks(a, b);
}