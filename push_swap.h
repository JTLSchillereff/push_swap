#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <limits.h>
# include <string.h>
# include <stdbool.h>

typedef struct		s_node
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

//string utils
char	**ft_split(const char *str, char c);

void	*ft_calloc(size_t count, size_t size);

long	ft_atol(const char *str);

int		ft_isdigit(char c);

void *ft_memcpy(void *dst, const void *src, size_t n);

//stack_utils
t_node	*last_node(t_node *stk);

//push_swap_init
void	set_current_position(t_node *stk);

void	set_price(t_node *a, t_node *b);

void	set_cheapest(t_node *b);

void	init_nodes(t_node *a, t_node *b);

#endif
