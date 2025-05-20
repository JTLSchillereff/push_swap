/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleal <jleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 17:26:05 by jleal             #+#    #+#             */
/*   Updated: 2025/04/20 14:25:26 by jleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *subs;
	size_t i;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	subs = ft_calloc(len + 1, sizeof(char));
	if (!subs)
		return (NULL);
	i = 0;
	while (i < len)
	{
		subs[i] = s[start + i];
		i++;
	}
	return (subs);
}

// TESTING AREA//
/* static void test_ft_substr(void) {
	printf(YELLOW "\nTESTING ft_substr()\n" RESET);
	char *str = "Hello, 42!";
	char *sub = ft_substr(str, 7, 2);
	if (strcmp(sub, "42") != 0) {
		printf(RED "FAIL: ft_substr(\"%s\", 7, 2) = \"%s\", expected \"42\"\n" RESET, str, sub);
		free(sub);
		return;
	}
	free(sub);
	printf(GREEN "ft_substr: OK!\n" RESET);
}

int main(void)
{
	test_ft_substr();
} */