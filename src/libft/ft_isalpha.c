/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleal <jleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 18:32:32 by jleal             #+#    #+#             */
/*   Updated: 2025/04/20 14:25:26 by jleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isalpha(int c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        return (1);
    return (0);
}

// TESTING AREA//
/* static void test_ft_isalpha(void) {
    printf(YELLOW "\nTESTING ft_isalpha()\n" RESET);
    for (int c = -1; c <= 255; c++) {
        if ((ft_isalpha(c) != 0) != (isalpha(c) != 0)) {
            printf(RED "FAIL: ft_isalpha(%d) = %d, expected %s\n" RESET,
                   c, ft_isalpha(c), (isalpha(c) ? "non-zero" : "zero"));
            return;
        }
    }
    printf(GREEN "ft_isalpha: OK!\n" RESET);
}

int main(void)
{
    test_ft_isalpha();
} */