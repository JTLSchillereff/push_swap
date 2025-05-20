/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleal <jleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 20:51:10 by jleal             #+#    #+#             */
/*   Updated: 2025/04/20 14:25:26 by jleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list *new_list;
    t_list *new_obj;

    if (!lst || !f || !del)
        return (NULL);
    new_list = NULL;
    while (lst)
    {
        new_obj = ft_lstnew(f(lst->content));
        if (!new_obj)
        {
            ft_lstclear(&new_list, del);
            return (NULL);
        }
        ft_lstadd_back(&new_list, new_obj);
        lst = lst->next;
    }
    return (new_list);
}

// TESTING AREA//
/* static t_list *create_node(long value) {
    t_list *new = ft_lstnew((void *)value);
    if (!new)
        return (NULL);
    return (new);
}

// Sample content modification function
static void *map_content(void *content) {
    int value = (int)(long)content;
    return (void *)(long)(value * 10); // Multiply by 10 for testing
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

static void test_ft_lstmap(void) {
    printf(YELLOW "\n=== Testing ft_lstmap ===\n" RESET);

    // Create source list
    t_list *src = create_node(1);
    ft_lstadd_back(&src, create_node(2));
    ft_lstadd_back(&src, create_node(3));

    printf("Source list: ");
    print_list(src);

    // Map each value to value*10
    t_list *new_list = ft_lstmap(src, map_content, del_content);

    printf("Mapped list (should be 10,20,30): ");
    print_list(new_list);

    // Cleanup
    ft_lstclear(&src, del_content);
    ft_lstclear(&new_list, del_content);
}

int main(void)
{
    test_ft_lstmap();
} */