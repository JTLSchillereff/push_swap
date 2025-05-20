/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleal <jleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 09:32:20 by jleal             #+#    #+#             */
/*   Updated: 2025/04/20 14:25:26 by jleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// compare two strings of bytes
int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *p1;
	unsigned char *p2;
	size_t i;

	if (!s1 || !s2)
	{
		if (!s1 && !s2)
			return (0);
		if (!s1)
			return (-1);
		return (1);
	}
	if (n == 0)
		return (0);
	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (p1[i] != p2[i])
			return (p1[i] - p2[i]);
		i++;
	}
	return (0);
}

// TESTING AREA//
/* static void test_ft_memcmp(void) {
	printf(YELLOW "\nTESTING ft_memcmp()\n" RESET);

	const char s1[] = "test";
	const char s2[] = "test2";
	size_t n = 4;
	int res1 = ft_memcmp(s1, s2, n);
	int res2 = memcmp(s1, s2, n);

	if ((res1 < 0 && res2 < 0) || (res1 > 0 && res2 > 0) || (res1 == 0 && res2 == 0)) {
		printf(GREEN "ft_memcmp: OK!\n" RESET);
	} else {
		printf(RED "FAIL: ft_memcmp() = %d, expected %d\n" RESET, res1, res2);
	}
}

int main(void)
{
	test_ft_memcmp();
}  */