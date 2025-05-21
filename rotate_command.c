/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_command.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleal <jleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 15:31:45 by jleal             #+#    #+#             */
/*   Updated: 2025/05/21 16:19:38 by jleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void rotate(t_node **stk)
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

void rrotate(t_node **stk)
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