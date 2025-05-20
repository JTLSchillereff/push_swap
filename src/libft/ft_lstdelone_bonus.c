/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleal <jleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 09:34:14 by jleal             #+#    #+#             */
/*   Updated: 2025/04/20 14:25:26 by jleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstdelone(t_list *lst, void (*del)(void *))
{
    if (!del)
        return;
    if (lst)
    {
        del(lst->content);
        free(lst);
    }
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
    printf("Deleting content: %d\n", (int)(long)content);
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

static void test_ft_lstdelone(void) {
    printf(YELLOW "\n=== Testing ft_lstdelone ===\n" RESET);

    // Create and test single node deletion
    t_list *node = create_node(42);
    printf("Before deletion: ");
    print_list(node);

    ft_lstdelone(node, del_content);
    printf("After deletion (should see deletion message above)\n");

    // Note: Don't access 'node' after deletion!
    printf("Test passed if you saw deletion message\n");
}

int main(void)
{
    test_ft_lstdelone();
}  */