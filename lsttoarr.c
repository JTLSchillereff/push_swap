/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lsttoarr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleal <jleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 11:13:33 by jleal             #+#    #+#             */
/*   Updated: 2025/05/25 11:57:56by jleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*lsttoarr(t_node *stk)
{
	int len;
	int *arr;
	int i;

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