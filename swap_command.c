/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_command.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleal <jleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 15:32:39 by jleal             #+#    #+#             */
/*   Updated: 2025/05/21 15:57:03 by jleal            ###   ########.fr       */
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