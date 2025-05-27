/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleal <jleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 17:59:11 by jleal             #+#    #+#             */
/*   Updated: 2025/05/27 12:29:16 by jleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <limits.h>
# include <string.h>
# include <stdbool.h>

typedef struct s_node
{
	struct s_node	*next;
	struct s_node	*prev;
	struct s_node	*target;
	int				value;
	int				index;
	int				final_index;
	int				push_price;
	bool			above_median;
	bool			cheapest;
}					t_node;

//algorithms
void	mini_sort(t_node **stk);

void	push_swap(t_node **a, t_node **b);

void	ft_quicksort(int arr[], int low, int high);

void	sort_push(t_node **a, t_node **b);

//string utils
char	**ft_split(const char *str, char c);

void	*ft_calloc(size_t count, size_t size);

long	ft_atol(const char *str);

int		ft_isdigit(char c);

void	*ft_memcpy(void *dst, const void *src, size_t n);

//stack_utils
void	append_node(t_node **stk, int nbr);

void	print_stacks(t_node **a_stack, t_node **b_stack);

t_node	*last_node(t_node *stk);

int		stack_len(t_node *stk);

t_node	*find_smallest(t_node *stk);

t_node	*find_biggest(t_node *stk);

t_node	*find_cheapest(t_node *stk);

void	stack_init(t_node **a, char **av, bool flag_ac_2);

int		stack_sorted(t_node	*stk);

//commands
void	push(t_node **stk1, t_node **stk2);

void	swap(t_node **stk);

void	rotate(t_node **stk);

void	rrotate(t_node **stk);

//push_swap_init
void	set_current_position(t_node *stk);

void	set_price(t_node *a, t_node *b);

void	set_cheapest(t_node *b);

void	init_nodes(t_node *a, t_node *b);

//error_handling
void	free_matrix(char **av);

void	free_stack(t_node **stack);

void	error_free(t_node **a, char **av, bool flag_ac_2);

int		filter_syntax(char *str);

int		filter_repetition(t_node *a, int n);

//commands
void	ra(t_node **a);

void	rb(t_node **b);

void	rr(t_node **a, t_node **b);

void	rra(t_node **a);

void	rrb(t_node **b);

void	rrr(t_node **a, t_node **b);

void	pa(t_node **a, t_node **b);

void	pb(t_node **a, t_node **b);

void	sa(t_node **a);

void	sb(t_node **b);

void	ss(t_node **a, t_node **b);

#endif
