/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleal <jleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 09:17:43 by jleal             #+#    #+#             */
/*   Updated: 2025/04/20 14:25:26 by jleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Fill a byte string with zero
void ft_bzero(void *s, size_t n)
{
    unsigned char *tmp_ptr;

    if (!s)
        return;
    tmp_ptr = (unsigned char *)s;
    while (n > 0)
    {
        *(tmp_ptr++) = 0;
        n--;
    }
}

// TESTING AREA//
/* static void test_ft_bzero(void) {
    printf(YELLOW "\nTESTING ft_bzero()\n" RESET);

    char str1[10] = "abcdefghi";
    char str2[10] = "abcdefghi";
    size_t n = 5;

    ft_bzero(str1, n);
    bzero(str2, n);

    if (memcmp(str1, str2, 10) != 0) {
        printf(RED "FAIL: ft_bzero() did not match bzero()\n" RESET);
        printf("  ft_bzero result: %.*s\n", 10, str1);
        printf("  bzero result:    %.*s\n", 10, str2);
        return;
    }
    printf(GREEN "ft_bzero: OK!\n" RESET);
}

int main (void)
{
    test_ft_bzero();
} */