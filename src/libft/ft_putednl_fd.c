/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putednl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleal <jleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 09:40:49 by jleal             #+#    #+#             */
/*   Updated: 2025/04/20 14:25:26 by jleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putendl_fd(char *s, int fd)
{
    while (*s)
        write(fd, s++, 1);
    write(fd, "\n", 1);
}

// TESTING AREA//
/* static void test_ft_putendl_fd(void) {
    printf(YELLOW "\nTESTING ft_putendl_fd():" RESET);
    printf(BLUE "\n" RESET);

    ft_putendl_fd("Hello World!", 1);
    printf(BLUE "" RESET);
    ft_putendl_fd("Hello World!", 2);

    printf("\n");
}

int main(void)
{
    test_ft_putendl_fd();
} */