/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleal <jleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 20:50:00 by jleal             #+#    #+#             */
/*   Updated: 2025/04/20 14:25:48 by jleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;

	if (!del || !lst || !*lst)
		return ;
	while (*lst && lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
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

static void test_ft_lstclear(void) {
    printf(YELLOW "\n=== Testing ft_lstclear ===\n" RESET);
    
    // Create a 3-node list
    t_list *list = create_node(1);
    ft_lstadd_back(&list, create_node(2));
    ft_lstadd_back(&list, create_node(3));
    
    printf("Before clear: ");
    print_list(list);
    
    ft_lstclear(&list, del_content);
    printf("After clear (should see 3 deletion messages above)\n");
    
    if (list == NULL) {
        printf(GREEN "Success: List pointer is now NULL\n" RESET);
    } else {
        printf(RED "Error: List pointer not set to NULL\n" RESET);
    }
}

int main(void)
{
    test_ft_lstclear();
} */