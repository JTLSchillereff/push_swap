/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleal <jleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 17:25:45 by jleal             #+#    #+#             */
/*   Updated: 2025/04/20 14:25:26 by jleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(const char *s1, const char *s2)
{
	char *str;
	unsigned int l1;
	unsigned int l2;

	if (!s1 || !s2)
		return (NULL);
	l1 = ft_strlen(s1);
	l2 = ft_strlen(s2);
	str = (char *)ft_calloc(l1 + l2 + 1, sizeof(char));
	if (!str)
		return (NULL);
	ft_memcpy(str, (const void *)s1, l1);
	ft_memcpy(str + l1, (const void *)s2, l2);
	return (str);
}

// TESTING AREA//
/* static void test_ft_strjoin(void) {
	printf(YELLOW "\nTESTING ft_strjoin()\n\n" RESET);
	char *s1 = "Hello, ";
	char *s2 = "42!";
	char *joined = ft_strjoin(s1, s2);
	if (strcmp(joined, "Hello, 42!") != 0) {
		printf(RED "FAIL: ft_strjoin(\"%s\", \"%s\") = \"%s\", expected \"Hello, 42!\"\n" RESET, s1, s2, joined);
		free(joined);
		return;
	}
	printf(GREEN "Joined: %s\n\n" RESET, joined);
	free(joined);
	printf(GREEN "ft_strjoin: OK!\n" RESET);
}

int main(void)
{
	test_ft_strjoin();
}  */