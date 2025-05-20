/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleal <jleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 20:48:06 by jleal             #+#    #+#             */
/*   Updated: 2025/04/20 12:35:35 by jleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

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
}

//TESTING AREA//
/* static t_list *create_node(long value) {
    t_list *new = ft_lstnew((void *)value);
    if (!new)
        return (NULL);
    return (new);
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

// Sample content deletion function
static void del_content(void *content) {
    printf("Deleting content: %d\n", (int)(long)content);
    // If content was malloc'd: free(content);
}

static void test_ft_lstadd_back(void) {
    printf(YELLOW "\n=== Testing ft_lstadd_back ===\n" RESET);
    
    t_list *list = NULL;
    
    // Test 1: Add to empty list
    t_list *node1 = create_node(10);
    ft_lstadd_back(&list, node1);
    printf("After adding 10 to empty list: ");
    print_list(list);  // Expected: [10]
    
    // Test 2: Add to existing list
    t_list *node2 = create_node(20);
    ft_lstadd_back(&list, node2);
    printf("After adding 20 at back:       ");
    print_list(list);  // Expected: [10 -> 20]
    
    // Test 3: Add another node
    t_list *node3 = create_node(30);
    ft_lstadd_back(&list, node3);
    printf("After adding 30 at back:       ");
    print_list(list);  // Expected: [10 -> 20 -> 30]
    
    ft_lstclear(&list, del_content);
} 

int main(void)
{
    test_ft_lstadd_back();
} */