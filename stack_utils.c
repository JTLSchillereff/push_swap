/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleal <jleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 15:24:35 by jleal             #+#    #+#             */
/*   Updated: 2025/05/21 16:02:20 by jleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node *make_node(int n)
{
	t_node *new;

	new = malloc(sizeof(t_node));
	if (!new)
		return (NULL);
	new->next = NULL;
	new->prev = NULL;
	new->target = NULL;
	new->value = n;
	new->index = 0;
	new->final_index = 0;
	new->push_price = 0;
	new->above_median = false;
	new->cheapest = false;
	return (new);
}

void append_node(t_node **lst, t_node *new)
{
	t_node *last;

	if (!new)
		return;
	if (!*lst)
	{
		*lst = new;
		return;
	}
	last = *lst;
	while (last->next)
		last = last->next;
	last->next = new;
	new->prev = last;
}

void print_stacks(t_node **a_stack, t_node **b_stack)
{
	t_node *a;
	t_node *b;

	if (!*a_stack && !*b_stack)
		return;
	a = *a_stack;
	b = *b_stack;
	printf(" A\t B\n");
	while (a || b)
	{
		if (a)
		{
			printf("[%d]", a->value);
			a = a->next;
		}
		printf("\t");
		if (b)
		{
			printf("[%d]", b->value);
			b = b->next;
		}
		printf("\n");
	}
}

void free_stack(t_node **stack)
{
	t_node *tmp;

	if (!*stack)
		return;
	while ((*stack)->next)
	{
		tmp = *stack;
		*stack = (*stack)->next;
		free(tmp);
	}
	free(*stack);
}

t_node *make_stack(char **av)
{
	t_node *stack;
	t_node *node;
	int num;

	stack = NULL;
	node = NULL;
	num = 0;
	while (*av)
	{
		num = ft_atoi(*av);
		node = make_node(num);
		if (!node)
		{
			free_stack(&stack);
			return (NULL);
		}
		append_node(&stack, node);
		av++;
	}
	return (stack);
}

t_node	*last_node(t_node *stk)
{
	if (!stk)
		return (NULL);
	while (stk->next)
		stk = stk->next;
	return (stk);
}
