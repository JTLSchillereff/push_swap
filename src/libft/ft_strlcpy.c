/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleal <jleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 18:37:43 by jleal             #+#    #+#             */
/*   Updated: 2025/04/20 14:25:26 by jleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t src_len;

    src_len = ft_strlen(src);
    if (src_len + 1 < dstsize)
        ft_memcpy(dst, src, src_len + 1);
    else if (dstsize != 0)
    {
        ft_memcpy(dst, src, dstsize - 1);
        dst[dstsize - 1] = 0;
    }
    return (src_len);
}

// TESTING AREA//
/* static void test_ft_strlcpy(void) {
    printf(YELLOW "\nTESTING ft_strlcpy()\n" RESET);

    char src[] = "Hello";
    char dst1[10] = {0};
    char dst2[10] = "Hello";
    size_t dstsize = sizeof(dst1);
    size_t ret1, ret2;

    ret1 = ft_strlcpy(dst1, src, dstsize);
    ret2 = strlen(dst2);

    if (ret1 != ret2 || strcmp(dst1, dst2) != 0) {
        printf(RED "FAIL: ft_strlcpy()\n" RESET);
        printf("  ft_strlcpy returned: %zu, dst: \"%s\"\n", ret1, dst1);
        printf("  strlcpy returned:    %zu, dst: \"%s\"\n", ret2, dst2);
        return;
    }
    printf(GREEN "ft_strlcpy: OK!\n" RESET);
}

int main(void)
{
    test_ft_strlcpy();
} */