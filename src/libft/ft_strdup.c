/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleal <jleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 09:36:21 by jleal             #+#    #+#             */
/*   Updated: 2025/04/20 14:25:26 by jleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s1)
{
	char *dup;
	int i;

	if (!s1)
		return (NULL);
	dup = (char *)ft_calloc(ft_strlen(s1) + 1, sizeof(char));
	if (!dup)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		dup[i] = s1[i];
		i++;
	}
	return (dup);
}

// TESTING AREA//
/* static void test_ft_strdup(void) {
	printf(YELLOW "\nTESTING ft_strdup()\n" RESET);
	char *str = "Duplicate me!";
	char *dup = strdup(str);
	char *ft_dup = ft_strdup(str);
	if (strcmp(dup, ft_dup) != 0) {
		printf(RED "FAIL: ft_strdup(\"%s\") = \"%s\", expected \"%s\"\n" RESET, str, ft_dup, dup);
		free(dup);
		free(ft_dup);
		return;
	}
	free(dup);
	free(ft_dup);
	printf(GREEN "ft_strdup: OK!\n" RESET);
}

int main(void)
{
	test_ft_strdup();
}  */