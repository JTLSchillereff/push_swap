/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mini_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleal <jleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 10:17:34 by jleal             #+#    #+#             */
/*   Updated: 2025/05/22 13:38:10 by jleal            ###   ########.fr       */
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
