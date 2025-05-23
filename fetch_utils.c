/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fetch_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleal <jleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 17:53:24 by jleal             #+#    #+#             */
/*   Updated: 2025/05/23 17:54:05 by jleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*find_smallest(t_node *stk)
{
	long	smallest;
	t_node	*smallest_node;

	if (!stk)
		return (NULL);
	smallest = LONG_MAX;
	while (stk)
	{
		if (stk->value < smallest)
		{
			smallest = stk->value;
			smallest_node = stk;
		}
		stk = stk->next;
	}
	return (smallest_node);
}

t_node	*find_biggest(t_node *stk)
{
	long	biggest;
	t_node	*biggest_node;

	if (!stk)
		return (NULL);
	biggest = LONG_MIN;
	while (stk)
	{
		if (stk->value > biggest)
		{
			biggest = stk->value;
			biggest_node = stk;
		}
		stk = stk->next;
	}
	return (biggest_node);
}

t_node	*find_cheapest(t_node *stk)
{
	if (!stk)
		return (NULL);
	while (stk)
	{
		if (stk->cheapest)
			return (stk);
		stk = stk->next;
	}
	return (NULL);
}
