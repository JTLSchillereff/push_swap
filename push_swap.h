#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "stdlib.h"

typedef struct		s_node
{
	int n;
	struct s_node	*next;
	struct s_node	*prev;
}					t_node;

#endif