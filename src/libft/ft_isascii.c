/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleal <jleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 09:03:11 by jleal             #+#    #+#             */
/*   Updated: 2025/04/20 14:25:26 by jleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isascii(int c)
{
    if (c >= 0 && c <= 127)
        return (1);
    return (0);
}

// TESTING AREA//
/* static void test_ft_isascii(void) {
    printf(YELLOW "\nTESTING ft_isascii()\n" RESET);
    for (int c = -1; c <= 255; c++) {
        if ((ft_isascii(c) != 0) != (isascii(c) != 0)) {
            printf(RED "FAIL: ft_isascii(%d) = %d, expected %s\n" RESET,
                   c, ft_isascii(c), (isascii(c) ? "non-zero" : "zero"));
            return;
        }
    }
    printf(GREEN "ft_isprint: OK!\n" RESET);
}

int main(void)
{
    test_ft_isascii();
} */