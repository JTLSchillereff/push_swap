/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleal <jleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 18:43:55 by jleal             #+#    #+#             */
/*   Updated: 2025/04/20 14:25:26 by jleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	char a;
	char *ptr;
	unsigned int i;

	a = (char)c;
	ptr = NULL;
	i = 0;
	while (s[i])
	{
		if (s[i] == a)
			ptr = (char *)&s[i];
		i++;
	}
	if (s[i] == a)
		ptr = (char *)&s[i];
	return (ptr);
}

// TESTING AREA//
/* static void test_ft_strrchr(void) {
	printf(YELLOW "\nTESTING ft_strrchr()\n" RESET);

	const char *str = "test string";
	int c = 't';
	char *res1 = ft_strrchr(str, c);
	char *res2 = strrchr(str, c);

	if (res1 != res2) {
		printf(RED "FAIL: ft_strrchr(\"%s\", '%c') = %p, expected %p\n" RESET,
			   str, c, (void*)res1, (void*)res2);
		return;
	}
	printf(GREEN "ft_strrchr: OK!\n" RESET);
}

int main(void)
{
	test_ft_strrchr();
} */