/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleal <jleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 09:24:55 by jleal             #+#    #+#             */
/*   Updated: 2025/04/20 14:25:26 by jleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char ft_toupper(char c)
{
    if (c >= 'a' && c <= 'z')
        c = c - 32;
    return (c);
}

// TESTING AREA//
/* static void test_ft_toupper(void) {
    printf(YELLOW "\nTESTING ft_toupper()\n" RESET);

    for (int c = -1; c <= 255; c++) {
        if ((ft_toupper(c) != 0) != (toupper(c) != 0)) {
            printf(RED "FAIL: ft_toupper(%d) = %d, expected %d\n" RESET,
                   c, ft_toupper(c), toupper(c));
            return;
        }
    }
    printf(GREEN "ft_toupper: OK!\n" RESET);
}

int main(void)
{
    test_ft_toupper();
} */