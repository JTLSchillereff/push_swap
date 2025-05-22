/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleal <jleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 12:23:37 by jleal             #+#    #+#             */
/*   Updated: 2025/05/22 18:13:43 by jleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

int main(int ac, char **av)
{
	t_node *a;
	t_node *b;

	a = NULL;
	b = NULL;
	if (ac == 1 || (ac == 2 && !av[1][0]))
		return (1);
	else if (ac == 2)
		av = ft_split(av[1], ' ');
	stack_init(&a, av, ac == 2);
	if (!stack_sorted(a))
	{
		push_swap(&a, &b);
	}
}
