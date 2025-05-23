/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_command.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleal <jleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 17:34:56 by jleal             #+#    #+#             */
/*   Updated: 2025/05/23 17:54:59 by jleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrotate(t_node **stk)
{
	t_node	*last;

	if (!*stk || !(*stk)->next)
		return ;
	last = last_node(*stk);
	last->prev->next = NULL;
	last->prev = NULL;
	last->next = *stk;
	last->next->prev = last;
	*stk = last;
}

void	rra(t_node **a)
{
	rrotate(a);
	printf("rra\n");
}

void	rrb(t_node **b)
{
	rrotate(b);
	printf("rrb\n");
}

void	rrr(t_node **a, t_node **b)
{
	rrotate(a);
	rrotate(b);
	printf("rrr\n");
}
