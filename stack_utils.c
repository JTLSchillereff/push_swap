/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleal <jleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 15:24:35 by jleal             #+#    #+#             */
/*   Updated: 2025/05/22 19:20:06 by jleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void append_node(t_node **stk, int nbr)
{
	t_node *node;
	t_node *last;

	if (!stk)
		return;
	node = malloc(sizeof(t_node));
	if (!node)
		return;
	node->next = NULL;
	node->value = nbr;
	if (!*stk)
	{
		*stk = node;
		node->prev = NULL;
	}
	else
	{
		last = last_node(*stk);
		last->next = node;
		node->prev = last;
	}
}

void print_stacks(t_node **a_stack, t_node **b_stack)
{
	t_node	*a;
	t_node	*b;
	
	if (!*a_stack && !*b_stack)
		return;
	a = *a_stack;
	b = *b_stack;
	printf("___________\n");
	printf(" A \t B \n");
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
	printf("___________\n");
}

t_node *last_node(t_node *stk)
{
	if (!stk)
		return (NULL);
	while (stk->next)
		stk = stk->next;
	return (stk);
}

int stack_len(t_node *stk)
{
	int i;

	if (!stk)
		return (0);
	i = 0;
	while (stk)
	{
		i++;
		stk = stk->next;
	}
	return (i);
}

t_node *find_smallest(t_node *stk)
{
	long smallest;
	t_node *smallest_node;

	if (!stk)
		return (NULL);
	smallest = LONG_MAX;
	while (stk)
	{
		if (stk->value < smallest)
		{
			smallest = stk->value;
			smallest_node = stk;
		}
		stk = stk->next;
	}
	return (smallest_node);
}

t_node *find_biggest(t_node *stk)
{
	long biggest;
	t_node *biggest_node;

	if (!stk)
		return (NULL);
	biggest = LONG_MIN;
	while (stk)
	{
		if (stk->value > biggest)
		{
			biggest = stk->value;
			biggest_node = stk;
		}
		stk = stk->next;
	}
	return (biggest_node);
}

t_node *find_cheapest(t_node *stk)
{
	if (!stk)
		return (NULL);
	while (stk)
	{
		if (stk->cheapest)
			return (stk);
		stk = stk->next;
	}
	return (NULL);
}