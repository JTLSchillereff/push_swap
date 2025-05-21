/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleal <jleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 12:23:37 by jleal             #+#    #+#             */
/*   Updated: 2025/05/21 15:32:56 by jleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int ac, char **av)
{
	t_node *a_stack;
	t_node *b_stack;

	a_stack = NULL;
	b_stack = NULL;
	if (ac > 1)
	{
		a_stack = make_stack(&av[1]);
		if (!a_stack)
			return (-1);
		print_stacks(&a_stack, &b_stack);
		printf("swap a\n");
		swap(&a_stack);
		print_stacks(&a_stack, &b_stack);
		printf("push b ");
		push(&a_stack, &b_stack);
		printf("I");
		push(&a_stack, &b_stack);
		printf("I");
		push(&a_stack, &b_stack);
		printf("I\n");
		print_stacks(&a_stack, &b_stack);
		printf("rotate\n");
		rotate(&b_stack);
		rrotate(&a_stack);
		print_stacks(&a_stack, &b_stack);
	}
	return (0);
}
