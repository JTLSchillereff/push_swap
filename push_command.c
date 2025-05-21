/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_command.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleal <jleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 15:29:20 by jleal             #+#    #+#             */
/*   Updated: 2025/05/21 15:54:17 by jleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void push(t_node **stk1, t_node **stk2)
{
	t_node *tmp;

	if (!*stk1)
		return;
	tmp = *stk1;
	*stk1 = (*stk1)->next;
	(*stk1)->prev = NULL;
	tmp->next = NULL;
	if (!*stk2)
		*stk2 = tmp;
	else
	{
		tmp->next = *stk2;
		(*stk2)->prev = tmp;
		*stk2 = tmp;
	}
}
