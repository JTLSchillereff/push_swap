/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleal <jleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 09:27:22 by jleal             #+#    #+#             */
/*   Updated: 2025/04/20 14:25:26 by jleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char ft_tolower(char c)
{
    if (c >= 'A' && c <= 'Z')
        c = c + 32;
    return (c);
}

// TESTING AREA//
/* static void test_ft_tolower(void) {
    printf(YELLOW "\nTESTING ft_tolower()\n" RESET);

    for (int c = -1; c <= 255; c++) {
        if ((ft_tolower(c) != 0) != (tolower(c) != 0)) {
            printf(RED "FAIL: ft_tolower(%d) = %d, expected %d\n" RESET,
                   c, ft_tolower(c), tolower(c));
            return;
        }
    }
    printf(GREEN "ft_tolower: OK!\n" RESET);
}

int main(void)
{
    test_ft_tolower();
} */