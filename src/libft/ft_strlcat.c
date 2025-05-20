/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleal <jleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 09:23:39 by jleal             #+#    #+#             */
/*   Updated: 2025/04/20 14:25:26 by jleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t src_len;
	size_t dst_len;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	if (dstsize <= dst_len)
		dst_len = dstsize;
	if (dst_len == dstsize)
		return (dstsize + src_len);
	if (src_len < dstsize - dst_len)
		ft_memcpy(dst + dst_len, src, src_len + 1);
	else
	{
		ft_memcpy(dst + dst_len, src, dstsize - dst_len - 1);
		dst[dstsize - 1] = 0;
	}
	return (dst_len + src_len);
}

// TESTING AREA//
/* static void test_ft_strlcat(void) {
	printf(YELLOW "\nTESTING ft_strlcat()\n" RESET);

	char src[] = "World";
	char dst1[20] = "Hello";
	char dst2[20] = "HelloWorld";
	size_t dstsize = sizeof(dst1);
	size_t ret1, ret2;

	ret1 = ft_strlcat(dst1, src, dstsize);
	ret2 = strlen(dst2);

	if (ret1 != ret2 || strcmp(dst1, dst2) != 0) {
		printf(RED "FAIL: ft_strlcat()\n" RESET);
		printf("  ft_strlcat returned: %zu, dst: \"%s\"\n", ret1, dst1);
		printf("  strlcat returned:    %zu, dst: \"%s\"\n", ret2, dst2);
		return;
	}
	printf(GREEN "ft_strlcat: OK!\n" RESET);
}

int main(void)
{
	test_ft_strlcat();
} */