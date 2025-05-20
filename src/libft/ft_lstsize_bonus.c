/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleal <jleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 20:46:02 by jleal             #+#    #+#             */
/*   Updated: 2025/04/20 12:54:52 by jleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list			*tmp;
	unsigned int	i;

	tmp = lst;
	i = 0;
	while (tmp)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}

//TESTING AREA//
/* static t_list *create_node(long value) {
    t_list *new = ft_lstnew((void *)value);
    if (!new)
        return (NULL);
    return (new);
}

// Sample content deletion function
static void del_content(void *content) {
    //printf("Deleting content: %d\n", (int)(long)content);
    // If content was malloc'd: free(content);
}

static void test_ft_lstsize(void) {
    printf(YELLOW "\n=== Testing ft_lstsize ===\n" RESET);
    
    t_list *list = NULL;
    
    // Test 1: Empty list
    printf("Size of empty list: %d (Expected: 0)\n", ft_lstsize(list));
    
    // Test 2: 1-element list
    list = create_node(10);
    printf("Size after adding 10: %d (Expected: 1)\n", ft_lstsize(list));
    
    // Test 3: Multi-element list
    t_list *node = create_node(20);
    ft_lstadd_front(&list, node);
    printf("Size after adding 20: %d (Expected: 2)\n", ft_lstsize(list));
    
    ft_lstclear(&list, del_content);
}

int main(void)
{
    test_ft_lstsize();
}  */