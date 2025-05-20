/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleal <jleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 09:03:58 by jleal             #+#    #+#             */
/*   Updated: 2025/04/20 14:24:13 by jleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

//TESTING AREA//
/* static void test_ft_isprint(void) {
    printf(YELLOW "\nTESTING ft_isprint()\n" RESET);
    for (int c = -1; c <= 255; c++) {
        if ((ft_isprint(c) != 0) != (isprint(c) != 0)) {
            printf(RED "FAIL: ft_isprint(%d) = %d, expected %s\n" RESET, 
                   c, ft_isprint(c), (isprint(c) ? "non-zero" : "zero"));
            return;
        }
    }
    printf(GREEN "ft_isprint: OK!\n" RESET);
} 

int main(void)
{
    test_ft_isprint();
}*/