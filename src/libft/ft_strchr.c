/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleal <jleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 09:28:35 by jleal             #+#    #+#             */
/*   Updated: 2025/04/20 14:25:26 by jleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    char a;
    unsigned int i;

    if (!s)
        return (NULL);
    a = (char)c;
    i = 0;
    while (s[i])
    {
        if (s[i] == a)
            return ((char *)&s[i]);
        i++;
    }
    if (s[i] == a)
        return ((char *)&s[i]);
    return (NULL);
}

// TESTING AREA//
/* static void test_ft_strchr(void) {
    printf(YELLOW "\nTESTING ft_strchr()\n" RESET);

    const char *str = "Hello World";
    int c = 'o';
    char *res1 = ft_strchr(str, c);
    char *res2 = strchr(str, c);

    if (res1 != res2) {
        printf(RED "FAIL: ft_strchr(\"%s\", '%c') = %p, expected %p\n" RESET,
               str, c, (void *)res1, (void *)res2);
        return;
    }

    // Test for non-existent character
    c = 'z';
    res1 = ft_strchr(str, c);
    res2 = strchr(str, c);
    if (res1 != res2) {
        printf(RED "FAIL: ft_strchr(\"%s\", '%c') = %p, expected %p\n" RESET,
               str, c, (void *)res1, (void *)res2);
        return;
    }

    printf(GREEN "ft_strchr: OK!\n" RESET);
}

int main(void)
{
    test_ft_strchr();
}  */