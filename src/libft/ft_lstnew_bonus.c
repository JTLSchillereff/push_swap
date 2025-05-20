/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleal <jleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 08:55:18 by jleal             #+#    #+#             */
/*   Updated: 2025/04/20 14:25:26 by jleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content)
{
    t_list *elem;

    elem = malloc(sizeof(t_list));
    if (!elem)
        return (NULL);
    elem->content = content;
    elem->next = NULL;
    return (elem);
}

// TESTING AREA//
/* static void test_ft_lstnew(void) {
    printf(YELLOW "\nTESTING ft_lstnew()\n" RESET);
    int content = 42;
    t_list *node = ft_lstnew(&content);
    if (node == NULL || *(int *)node->content != 42) {
        printf(RED "FAIL: ft_lstnew() did not create node correctly\n" RESET);
        free(node);
        return;
    }
    free(node);
    printf(GREEN "ft_lstnew: OK!\n" RESET);
}

int main(void)
{
    test_ft_lstnew();
}  */