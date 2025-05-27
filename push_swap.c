/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleal <jleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 13:18:09 by jleal             #+#    #+#             */
/*   Updated: 2025/05/27 12:30:21 by jleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	mini_sort(t_node **stk)
{
	t_node	*biggest;

	if (stack_sorted(*stk))
		return ;
	if (stack_len(*stk) < 3)
	{
		sa(stk);
		return ;
	}
	biggest = find_biggest(*stk);
	if (*stk == biggest)
		ra(stk);
	else if ((*stk)->next == biggest)
		rra(stk);
	if ((*stk)->value > (*stk)->next->value)
		sa(stk);
}

static void	fetch_cheapest_pa(t_node **a, t_node **b)
{
	t_node	*cheapest;
	t_node	*target;

	if (!*b && !*a)
		return ;
	cheapest = find_cheapest(*b);
	target = cheapest->target;
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
	int		sl;
	t_node	*smallest;

	sl = stack_len(*a);
	if (sl < 4)
	{
		mini_sort(a);
		return ;
	}
	sort_push(a, b);
	mini_sort(a);
	while (*b)
	{
		init_nodes(*a, *b);
		fetch_cheapest_pa(a, b);
		pa(a, b);
	}
	set_current_position(*a);
	smallest = find_smallest(*a);
	if (!smallest->above_median)
		while (*a != smallest)
			rra(a);
	while (*a != smallest)
		ra(a);
}

int	stack_sorted(t_node	*stk)
{
	int	num;

	if (!stk)
		return (1);
	num = INT_MIN;
	while (stk)
	{
		if (stk->value < num)
			return (0);
		num = stk->value;
		stk = stk->next;
	}
	return (1);
}

int	main(int ac, char **av)
{
	t_node	*a;
	t_node	*b;

	a = NULL;
	b = NULL;
	if (ac == 1 || (ac == 2 && !av[1][0]))
		return (1);
	else if (ac == 2)
		av = ft_split(av[1], ' ');
	stack_init(&a, av, ac == 2);
	if (!stack_sorted(a))
		push_swap(&a, &b);
	free_stack(&a);
}
