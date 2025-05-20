/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleal <jleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 20:27:51 by jleal             #+#    #+#             */
/*   Updated: 2025/04/20 14:25:26 by jleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putchar_fd(char c, int fd)
{
    write(fd, &c, 1);
}

// TESTING AREA//
/* static void test_ft_putchar_fd(void) {
    printf(YELLOW "\nTESTING ft_putchar_fd():" RESET);
    printf(BLUE "\n" RESET);

    ft_putchar_fd('a', 1);
    printf(BLUE "\n" RESET);
    ft_putchar_fd('1', 2);

    printf("\n");
}

int main(void)
{
    test_ft_putchar_fd();
}  */