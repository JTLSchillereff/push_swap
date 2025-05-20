/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleal <jleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 20:46:44 by jleal             #+#    #+#             */
/*   Updated: 2025/04/20 14:25:26 by jleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
       t_list *tmp;

       if (!lst)
              return (NULL);
       tmp = lst;
       while (tmp->next)
              tmp = tmp->next;
       return (tmp);
}

// TESTING AREA//
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

static void test_ft_lstlast(void) {
    printf(YELLOW "\n=== Testing ft_lstlast ===\n" RESET);

    t_list *list = NULL;

    // Test 1: Empty list
    printf("Last of empty list: %s (Expected: NULL)\n",
           ft_lstlast(list) ? "NOT NULL" : "NULL");

    // Test 2: 1-element list
    list = create_node(10);
    printf("Last of [10]: %d (Expected: 10)\n",
           (int)(long)ft_lstlast(list)->content);

    // Test 3: Multi-element list
    t_list *node = create_node(20);
    ft_lstadd_front(&list, node);
    printf("Last of [20->10]: %d (Expected: 10)\n",
           (int)(long)ft_lstlast(list)->content);

    ft_lstclear(&list, del_content);
}

int main(void)
{
    test_ft_lstlast();
}  */