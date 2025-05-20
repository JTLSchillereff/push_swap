/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleal <jleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 09:33:28 by jleal             #+#    #+#             */
/*   Updated: 2025/04/20 14:25:26 by jleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Locate substring in a string
char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t needlelen;

    if (!haystack || !needle)
        return (NULL);
    if (!needle[0])
        return ((char *)haystack);
    needlelen = ft_strlen(needle);
    while (*haystack && len >= needlelen)
    {
        if (*haystack == *needle && !ft_strncmp(haystack, needle, needlelen))
        {
            return ((char *)haystack);
        }
        haystack++;
        len--;
    }
    return (NULL);
}

// TESTING AREA//
/* static void test_ft_strnstr(void) {
    printf(YELLOW "\nTESTING ft_strnstr()\n" RESET);

    struct test_case {
        const char *haystack;
        const char *needle;
        size_t len;
        const char *expected;
    } tests[] = {
        {"Hello world", "world", 11, "world"},
        {"Hello world", "world", 5, NULL},
        {"Hello world", "", 11, "Hello world"},
        {"Hello world", "Hello", 11, "Hello world"},
        {"Hello world", "lo w", 11, "lo world"},
        {"Hello world", "goodbye", 11, NULL},
        {"", "needle", 0, NULL},
        {"short", "too long", 4, NULL},
        {"abc", "abc", 3, "abc"},
        {"abc", "abc", 2, NULL},
        {NULL, NULL, 0, NULL} // Sentinel
    };

    for (int i = 0; tests[i].haystack != NULL; i++) {
        char *result = ft_strnstr(tests[i].haystack, tests[i].needle, tests[i].len);
        if ((result == NULL && tests[i].expected != NULL) ||
            (result != NULL && tests[i].expected == NULL) ||
            (result != NULL && strncmp(result, tests[i].expected, strlen(tests[i].expected)) != 0)) {
            printf(RED "FAIL: ft_strnstr(\"%s\", \"%s\", %zu) = %s, expected %s\n" RESET,
                   tests[i].haystack, tests[i].needle, tests[i].len,
                   result ? result : "NULL",
                   tests[i].expected ? tests[i].expected : "NULL");
            return;
        }
    }
    printf(GREEN "ft_strnstr: OK!\n" RESET);
}

int main(void)
{
    test_ft_strnstr();
} */