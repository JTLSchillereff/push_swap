/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_command.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleal <jleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 15:32:39 by jleal             #+#    #+#             */
/*   Updated: 2025/05/22 19:19:12 by jleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void swap(t_node **stk)
{
	long tmp;

	if (!*stk || !(*stk)->next)
		return;
	tmp = (*stk)->value;
	(*stk)->value = (*stk)->next->value;
	(*stk)->next->value= tmp;
}

void	sa(t_node **a)
{
	swap(a);
	printf("sa\n");
}

void	sb(t_node **b)
{
	swap(b);
	printf("sb\n");
}

void	ss(t_node **a, t_node **b)
{
	swap(a);
	swap(b);
	printf("ss\n");
}