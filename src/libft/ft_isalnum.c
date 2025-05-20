/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleal <jleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 09:02:15 by jleal             #+#    #+#             */
/*   Updated: 2025/04/20 14:25:26 by jleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isalnum(int c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
        return (1);
    return (0);
}
// TESTING AREA//
/* static void test_ft_isalnum(void) {
    printf(YELLOW "\nTESTING ft_isalnum()\n" RESET);
    for (int c = -1; c <= 255; c++) {
        if ((ft_isalnum(c) != 0) != (isalnum(c) != 0)) {
            printf(RED "FAIL: ft_isalnum(%d) = %d, expected %s\n" RESET,
                   c, ft_isalnum(c), (isalnum(c) ? "non-zero" : "zero"));
            return;
        }
    }
    printf(GREEN "ft_isalnum: OK!\n" RESET);
}

int main(void)
{
    test_ft_isalnum();
} */