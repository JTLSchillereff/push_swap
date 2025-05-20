/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleal <jleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 09:18:41 by jleal             #+#    #+#             */
/*   Updated: 2025/04/20 14:25:26 by jleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Copy memory area
void *ft_memcpy(void *dst, const void *src, size_t n)
{
    unsigned char *tmp_src;
    unsigned char *tmp_dst;

    if (!dst && !src)
        return (dst);
    tmp_src = (unsigned char *)src;
    tmp_dst = (unsigned char *)dst;
    while (n)
    {
        *(tmp_dst++) = *(tmp_src++);
        n--;
    }
    return (dst);
}

// TESTING AREA//
/* static void test_ft_memcpy(void) {
    printf(YELLOW "\nTESTING ft_memcpy()\n" RESET);

    char src[10] = "123456789";
    char dst1[10] = {0};
    char dst2[10] = {0};
    size_t n = 5;

    ft_memcpy(dst1, src, n);
    memcpy(dst2, src, n);

    if (memcmp(dst1, dst2, 10) != 0) {
        printf(RED "FAIL: ft_memcpy() did not match memcpy()\n" RESET);
        printf("  ft_memcpy result: %.*s\n", 10, dst1);
        printf("  memcpy result:    %.*s\n", 10, dst2);
        return;
    }
    printf(GREEN "ft_memcpy: OK!\n" RESET);
}

int main(void)
{
    test_ft_memcpy();
}  */