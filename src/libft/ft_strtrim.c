/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleal <jleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 17:25:56 by jleal             #+#    #+#             */
/*   Updated: 2025/04/20 14:25:26 by jleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int set_cmp(const char c, const char *set)
{
    if (!set)
        return (0);
    while (*set)
    {
        if (c == *set)
            return (*set);
        set++;
    }
    return (0);
}

static char *make_trim(const char *s, size_t start, size_t len)
{
    char *new;

    if (!s || len <= 0 || start >= ft_strlen(s))
        return (ft_strdup(""));
    new = (char *)ft_calloc(len + 1, sizeof(char));
    if (!new)
        return (NULL);
    ft_memcpy(new, &s[start], len);
    return (new);
}

char *ft_strtrim(const char *s1, const char *set)
{
    size_t len;
    int i;
    int j;

    if (!s1 || !set)
        return (NULL);
    i = 0;
    len = ft_strlen(s1);
    if (len == 0)
        return (ft_strdup(""));
    j = len - 1;
    while (set_cmp(s1[i], set))
        i++;
    while (j >= 0 && set_cmp(s1[j], set))
        j--;
    return (make_trim(s1, i, j - (i - 1)));
}

// TESTING AREA//
/* static void test_ft_strtrim(void)
{
    printf(YELLOW "\nTESTING ft_strtrim():\n" RESET);

    // Test cases: {input, set, expected}
    const char *test_cases[][3] = {
        {"  hello  ", " ", "hello"},
        {"xxhello!xx", "x", "hello!"},
        {"abcHello, World!zyx", "abcxyz", "Hello, World!"},
        {"", "123", ""},
        {"hello", "", "hello"},
        {"xyz", "xyz", ""},
        {"   ", " ", ""},
        {"no_trim_needed", "123", "no_trim_needed"},
        {NULL, " ", NULL}  // NULL input (optional)
    };

    int passed = 0;
    int total = sizeof(test_cases) / sizeof(test_cases[0]);

    for (int i = 0; i < total; i++)
    {
        const char *s1 = test_cases[i][0];
        const char *set = test_cases[i][1];
        const char *expected = test_cases[i][2];
        char *result = ft_strtrim(s1, set);

        printf("Test %d: ft_strtrim(\"%s\", \"%s\") -> ", i + 1, s1 ? s1 : "NULL", set ? set : "NULL");

        if ((!result && !expected) || (result && expected && strcmp(result, expected) == 0))
        {
            printf(GREEN "PASS: \"%s\"\n" RESET, result ? result : "NULL");
            passed++;
        }
        else
        {
            printf(RED "FAIL: got \"%s\", expected \"%s\"\n" RESET, result ? result : "NULL", expected ? expected : "NULL");
        }

        free(result); // Safe even if result is NULL
    }

    printf("Summary: %d/%d " GREEN "PASSED" RESET "\n", passed, total);
}

int main(void)
{
    test_ft_strtrim();
} */