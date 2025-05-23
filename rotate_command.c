/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_command.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleal <jleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 15:31:45 by jleal             #+#    #+#             */
/*   Updated: 2025/05/23 17:57:51 by jleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_node **stk)
{
	t_node	*last;

	if (!*stk || !(*stk)->next)
		return ;
	last = last_node(*stk);
	last->next = *stk;
	last->next->prev = last;
	*stk = (*stk)->next;
	last->next->next = NULL;
	(*stk)->prev = NULL;
}

void	ra(t_node **a)
{
	rotate(a);
	printf("ra\n");
}

void	rb(t_node **b)
{
	rotate(b);
	printf("rb\n");
}

void	rr(t_node **a, t_node **b)
{
	rotate(a);
	rotate(b);
	printf("rr\n");
}
