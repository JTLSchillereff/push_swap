/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleal <jleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 09:01:12 by jleal             #+#    #+#             */
/*   Updated: 2025/04/20 14:25:26 by jleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isdigit(int c)
{
    if (c >= '0' && c <= '9')
        return (1);
    return (0);
}

// TESTING AREA//
/* static void test_ft_isdigit(void) {
    printf(YELLOW "\nTESTING ft_isdigit()\n" RESET);
    for (int c = -1; c <= 255; c++) {
        if ((ft_isdigit(c) != 0) != (isdigit(c) != 0)) {
            printf(RED "FAIL: ft_isdigit(%d) = %d, expected %s\n" RESET,
                   c, ft_isdigit(c), (isdigit(c) ? "non-zero" : "zero"));
            return;
        }
    }
    printf(GREEN "ft_isdigit: OK!\n" RESET);
}

int main(void)
{
    test_ft_isdigit();
}*/