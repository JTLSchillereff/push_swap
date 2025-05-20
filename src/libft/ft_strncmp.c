/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleal <jleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 09:30:12 by jleal             #+#    #+#             */
/*   Updated: 2025/04/20 14:25:26 by jleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
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
	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

// TESTING AREA//
/* static void test_ft_strncmp(void) {
	printf(YELLOW "\nTESTING ft_strncmp()\n" RESET);

	const char *s1 = "test";
	const char *s2 = "test2";
	size_t n = 4;
	int res1 = ft_strncmp(s1, s2, n);
	int res2 = strncmp(s1, s2, n);

	if ((res1 < 0 && res2 < 0) || (res1 > 0 && res2 > 0) || (res1 == 0 && res2 == 0)) {
		printf(GREEN "ft_strncmp: OK!\n" RESET);
	} else {
		printf(RED "FAIL: ft_strncmp(\"%s\", \"%s\", %zu) = %d, expected %d\n" RESET,
			   s1, s2, n, res1, res2);
	}
}

int main(void)
{
	test_ft_strncmp();
} */