/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleal <jleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 20:50:38 by jleal             #+#    #+#             */
/*   Updated: 2025/04/20 14:25:26 by jleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstiter(t_list *lst, void (*f)(void *))
{
    t_list *tmp;

    tmp = lst;
    while (tmp)
    {
        f(tmp->content);
        tmp = tmp->next;
    }
}

// TESTING AREA//
/* static t_list *create_node(long value) {
    t_list *new = ft_lstnew((void *)value);
    if (!new)
        return (NULL);
    return (new);
}

// Print content function for lstiter
static void print_content(void *content) {
    printf("%d -> ", (int)(long)content);
}

// Sample content deletion function
static void del_content(void *content) {
    //printf("Deleting content: %d\n", (int)(long)content);
    // If content was malloc'd: free(content);
}

static void print_list(t_list *lst) {
    printf(BLUE "[");
    while (lst) {
        printf("%d", (int)(long)lst->content);
        if (lst->next) printf("->");
        lst = lst->next;
    }
    printf("]\n" RESET);
}

static void test_ft_lstiter(void) {
    printf(YELLOW "\n=== Testing ft_lstiter ===\n" RESET);

    // Create a 3-node list
    t_list *list = create_node(10);
    ft_lstadd_back(&list, create_node(20));
    ft_lstadd_back(&list, create_node(30));

    printf("Original list: ");
    print_list(list);

    printf("Iterating with print: ");
    ft_lstiter(list, print_content);
    printf("NULL\n");

    // Expected output: "10 -> 20 -> 30 -> NULL"

    ft_lstclear(&list, del_content);
}

int main(void)
{
    test_ft_lstiter();
}  */