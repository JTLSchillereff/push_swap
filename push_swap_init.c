/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_init.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleal <jleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 14:11:29 by jleal             #+#    #+#             */
/*   Updated: 2025/05/22 12:42:50 by jleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	set_current_position(t_node *stk)
{
	int	i;
	int	centerline;

	i = 0;
	if (!stk)
		return ;
	centerline = stack_len(stk) / 2;
	while (stk)
	{
		stk->index = i;
		if (i <= centerline)
			stk->above_median = true;
		else
			stk->above_median = false;
		stk = stk->next;
		i++;
	}
}

static void	set_target_node(t_node *a, t_node *b)
{
	t_node	*curr_a;
	t_node	*target;
	long	best_match;

	while (b)
	{
		best_match = LONG_MAX;
		curr_a = a;
		while (curr_a)
		{
			if (curr_a->value > b->value && curr_a->value < best_match)
			{
				best_match = curr_a->value;
				target = curr_a;
			}
			curr_a = curr_a->next;
		}
		if (LONG_MAX == best_match)
			b->target = find_smallest(a);
		else
			b->target = target;
		b = b->next;
	}
}

void	set_price(t_node *a, t_node *b)
{
	int	len_a;
	int	len_b;

	len_a = stack_len(a);
	len_b = stack_len(b);
	while (b)
	{
		b->push_price = b->index;
		if (!(b->above_median))
			b->push_price = len_b - (b->index);
		if (b->target->above_median)
			b->push_price += b->target->index;
		else
			b->push_price += len_a - (b->target->index);
		b = b->next;
	}
}

void	set_cheapest(t_node *b)
{
	long	best_match_value;
	t_node	*best_match_node;

	if (NULL == b)
		return ;
	best_match_value = LONG_MAX;
	while (b)
	{
		if (b->push_price < best_match_value)
		{
			best_match_value = b->push_price;
			best_match_node = b;
		}
		b = b->next;
	}
	best_match_node->cheapest = true;
}

void	init_nodes(t_node *a, t_node *b)
{
	set_current_position(a);
	set_current_position(b);
	set_target_node(a, b);
	set_price(a, b);
	set_cheapest(b);
}
