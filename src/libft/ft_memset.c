/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleal <jleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 09:16:09 by jleal             #+#    #+#             */
/*   Updated: 2025/04/20 14:25:26 by jleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Fill a bye string with a byte value
void *ft_memset(void *b, int c, size_t len)
{
    unsigned char *tmp_ptr;

    if (!b && len > 0)
        return (NULL);
    tmp_ptr = (unsigned char *)b;
    while (len--)
        *(tmp_ptr++) = (unsigned char)c;
    return (b);
}

// TESTING AREA//
/* static void test_ft_memset(void) {
    printf(YELLOW "\nTESTING ft_memset()\n" RESET);

    char str1[10] = "abcdefghi";
    char str2[10] = "abcdefghi";
    int c = 'x';
    size_t len = 5;

    ft_memset(str1, c, len);
    memset(str2, c, len);

    if (memcmp(str1, str2, 10) != 0) {
        printf(RED "FAIL: ft_memset() did not match memset()\n" RESET);
        printf("  ft_memset result: %.*s\n", 10, str1);
        printf("  memset result:    %.*s\n", 10, str2);
        return;
    }
    printf(GREEN "ft_memset: OK!\n" RESET);
}

int main(void)
{
    test_ft_memset();
}  */