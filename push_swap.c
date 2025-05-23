/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleal <jleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 13:18:09 by jleal             #+#    #+#             */
/*   Updated: 2025/05/23 11:42:51 by jleal            ###   ########.fr       */
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
		while (*b != cheapest && *a != target)
			rrr(b, a);
	else if (cheapest->above_median && target->above_median)
		while (*b != cheapest && *a != target)
			rr(b, a);	
	if (!cheapest->above_median)
		while (*b != cheapest)
			rrb(b);
	else if (cheapest->above_median)
		while (*b != cheapest)
			rb(b);
	if (!target->above_median)
		while (*a != target)
			rra(a);
	else if (target->above_median)
		while (*a != target)
			ra(a);
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
	}
	print_stacks(a, b);
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
		while (*a != smallest)
			rra(a);
	else
		while (*a != smallest)
			ra(a);
	print_stacks(a, b);
}
