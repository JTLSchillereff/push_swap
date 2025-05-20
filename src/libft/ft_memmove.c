/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleal <jleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 09:22:07 by jleal             #+#    #+#             */
/*   Updated: 2025/04/20 14:26:05 by jleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Copy memory area while avoiding overwriting issues
void *ft_memmove(void *dst, const void *src, size_t len)
{
    unsigned char *tmp_dst;
    const unsigned char *tmp_src;
    size_t i;

    if ((!dst || !src) && len > 0)
        return (NULL);
    tmp_dst = (unsigned char *)dst;
    tmp_src = (const unsigned char *)src;
    i = 0;
    if (tmp_dst > tmp_src)
        while (len-- > 0)
            tmp_dst[len] = tmp_src[len];
    else
    {
        while (i < len)
        {
            tmp_dst[i] = tmp_src[i];
            i++;
        }
    }
    return (dst);
}

// TESTING AREA//
/* static void test_ft_memmove(void) {
    printf(YELLOW "\nTESTING ft_memmove()\n" RESET);

    // Test overlapping regions (src < dst)
    char str1[20] = "123456789";
    char str2[20] = "123456789";
    size_t len = 5;

    ft_memmove(str1 + 3, str1, len);
    memmove(str2 + 3, str2, len);

    if (memcmp(str1, str2, 20) != 0) {
        printf(RED "FAIL: ft_memmove() did not match memmove() (src < dst)\n" RESET);
        printf("  ft_memmove result: %s\n", str1);
        printf("  memmove result:    %s\n", str2);
        return;
    }

    // Test overlapping regions (dst < src)
    char str3[20] = "123456789";
    char str4[20] = "123456789";

    ft_memmove(str3, str3 + 3, len);
    memmove(str4, str4 + 3, len);

    if (memcmp(str3, str4, 20) != 0) {
        printf(RED "FAIL: ft_memmove() did not match memmove() (dst < src)\n" RESET);
        printf("  ft_memmove result: %s\n", str3);
        printf("  memmove result:    %s\n", str4);
        return;
    }

    printf(GREEN "ft_memmove: OK!\n" RESET);
}

int main(void)
{
    test_ft_memmove();
} */