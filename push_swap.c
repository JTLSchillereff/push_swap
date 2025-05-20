/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleal <jleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 12:23:37 by jleal             #+#    #+#             */
/*   Updated: 2025/05/20 21:17:28 by jleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"
#include "push_swap.h"

t_node	*make_node(int n)
{
	t_node	*new;

	new = malloc(sizeof(t_node));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	return (new);
}

void	append_node(t_node **lst, t_node *new)
{
	t_node	*last;

	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last = *lst;
	while (last->next)
		last = last->next;
	last->next = new;
	new->prev = last;
}

void	print_stacks(t_node **a_stack, t_node **b_stack)
{
	t_node *a;
	t_node *b;

	if (!*a_stack && !*b_stack)
		return;
	a = *a_stack;
	b = *b_stack;
	ft_printf(" A\t B\n");
	while (a || b)
	{
		if (a)
		{
			ft_printf("[%d]", a->n);
			a = a->next;
			if (a == *a_stack)
				a = NULL;
		}
		ft_printf("\t");
		if (b)
		{
			ft_printf("[%d]", b->n);
			b = b->next;
			if (b == *b_stack)
				b = NULL;
		}
		ft_printf("\n");
	}
}

void	free_stack(t_node **stack)
{
	t_node *tmp;

	if (!*stack)
		return ;
	while ((*stack)->next)
	{
		tmp = *stack;
		*stack = (*stack)->next;
		free(tmp);
	}
	free(*stack);
}

t_node	*make_stack(char **av)
{
	t_node	**stack;
	t_node	*node;
	int		num;

	*stack = NULL;
	node = NULL;
	num = 0;
	while (*av)
	{
		num = ft_atoi(*av);
		node = make_node(num);
		if (!node)
		{
			free_stack(stack);
			return (NULL);
		}
		append_node(stack, node);
		av++;
	}
	node->next = *stack;
	(*stack)->prev = node;
	return (*stack);
}

void	swap(t_node **stk)
{
	int tmp;

	if (!stk || !*stk)
		return ;
	if (!((*stk)->next))
		return ;
	tmp = (*stk)->n;
	(*stk)->n = (*stk)->next->n;
	(*stk)->next->n = tmp;
}

void	push(t_node **stk1, t_node **stk2)
{
	t_node *tmp;

	if (!stk1 || !*stk1)
		return ;
	tmp = *stk1;
	if ((*stk1)->next == NULL)
		*stk1 = NULL;
	else
	{
		tmp->prev->next = tmp->next;
		tmp->next->prev = tmp->prev;
		*stk1 = (*stk1)->next;
	}
	tmp->prev = NULL;
	tmp->next = NULL;
	if (!stk2)
		stk2 = &tmp;
	else if (!*stk2)
		*stk2 = tmp;
	else if ((*stk2)->next == NULL)
	{
		tmp->next = *stk2;
		tmp->prev = *stk2;
		(*stk2)->next = tmp;
		(*stk2)->prev = tmp;
		*stk2 = tmp;
	}
	else
	{
		tmp->next = *stk2;
		tmp->prev = (*stk2)->prev;
		(*stk2)->prev->next = tmp;
		(*stk2)->prev = tmp;
		*stk2 = tmp;
	}
}

void	rotate(t_node **stk)
{
	*stk = (*stk)->next;
}

void	rrotate(t_node **stk)
{
	*stk = (*stk)->prev;
}

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
		ft_printf("swap a\n");
		swap(&a_stack);
		print_stacks(&a_stack, &b_stack);
		ft_printf("push b ");
		push(&a_stack, &b_stack);
		ft_printf("I");
		push(&a_stack, &b_stack);
		ft_printf("I");
		push(&a_stack, &b_stack);
		ft_printf("I");
		push(&a_stack, &b_stack);
		ft_printf("I");
		push(&a_stack, &b_stack);
		ft_printf("I\n");
		print_stacks(&a_stack, &b_stack);
		ft_printf("rotate\n");
		rotate(&b_stack);
		rrotate(&a_stack);
		print_stacks(&a_stack, &b_stack);
	}
	return (0);
}