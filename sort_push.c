/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_push.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleal <jleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 16:30:34 by jleal             #+#    #+#             */
/*   Updated: 2025/05/27 12:37:47 by jleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	*lsttoarr(t_node *stk)
{
	int	len;
	int	*arr;
	int	i;

	if (!stk)
		return (NULL);
	len = stack_len(stk);
	arr = malloc(len * (sizeof(int)));
	if (!arr)
		return (NULL);
	i = 0;
	while (i < len)
	{
		arr[i++] = stk->value;
		stk = stk->next;
	}
	i = 0;
	return (arr);
}

static int	find_mid(t_node *stk, int len)
{
	int	*nums;
	int	mid;

	if (!stk || !len)
		return (INT_MAX);
	nums = lsttoarr(stk);
	if (!nums)
		return (INT_MAX);
	ft_quicksort(nums, 0, len - 1);
	mid = nums[len / 2];
	free(nums);
	return (mid);
}

static void	rotate_or_swap(t_node **a, t_node **b)
{
	if (*b && (*b)->next)
	{
		if ((*a)->value > (*a)->next->value
			&& (*b)->value > (*b)->next->value)
			rr(a, b);
		else if ((*a)->value < (*a)->next->value
			&& (*b)->value < (*b)->next->value)
			ss(a, b);
		else
		{
			if ((*b)->value > (*b)->next->value)
				rb(b);
			else
				sb(b);
			if ((*a)->value > (*a)->next->value)
				ra(a);
			else
				sa(a);
		}
		return ;
	}
	if ((*a)->value > (*a)->next->value)
		ra(a);
	else
		sa(a);
}

void	sort_push(t_node **a, t_node **b)
{
	int	alen;
	int	mid_a;

	if (!*a)
		return ;
	alen = stack_len(*a);
	while (alen > 3)
	{
		mid_a = find_mid(*a, alen);
		if ((*a)->value < mid_a)
		{
			pb(a, b);
			alen--;
		}
		else
			rotate_or_swap(a, b);
	}
}
