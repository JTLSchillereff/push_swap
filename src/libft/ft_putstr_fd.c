/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleal <jleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 09:40:10 by jleal             #+#    #+#             */
/*   Updated: 2025/04/20 14:25:26 by jleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putstr_fd(char *s, int fd)
{
    if (!s)
        return;
    write(fd, s, ft_strlen(s));
}

// TESTING AREA//
/* static void test_ft_putstr_fd(void) {
    printf(YELLOW "\nTESTING ft_putstr_fd():" RESET);
    printf(BLUE "\n" RESET);

    ft_putstr_fd("Hello World!", 1);
    printf(BLUE "\n" RESET);
    ft_putstr_fd("Hello World!", 2);

    printf("\n");
}

int main(void)
{
    test_ft_putstr_fd();
} */