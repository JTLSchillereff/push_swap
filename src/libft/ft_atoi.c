/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleal <jleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 18:46:45 by jleal             #+#    #+#             */
/*   Updated: 2025/04/20 14:25:26 by jleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int ft_isspace(char c)
{
    if ((c >= 9 && c <= 13) || c == 32)
        return (c);
    return (0);
}

int ft_atoi(const char *str)
{
    int tot;
    int p;
    int i;

    if (!str)
        return (0);
    tot = 0;
    p = 1;
    i = 0;
    while (ft_isspace(str[i]))
        i++;
    if (str[i] == '+' && str[i + 1] != '-')
        i++;
    if (str[i] == '-')
    {
        p = -1;
        i++;
    }
    while (ft_isdigit(str[i]))
    {
        tot = (tot * 10) + str[i] - '0';
        i++;
    }
    return (tot * p);
}

// TESTING AREA//
/* static void test_ft_atoi(void)
{
    printf(YELLOW "\nTESTING ft_atoi():\n" RESET);

    struct {
        char *input;
        const int expected;
    } test_cases[] = {
        {"0", 0},
        {"123", 123},
        {"-456", -456},
        {"2147483647", 2147483647},  // INT_MAX
        {"-2147483648", -2147483648}, // INT_MIN
        {"42", 42},
        {"-99", -99}
    };

    int passed = 0;
    int total = sizeof(test_cases) / sizeof(test_cases[0]);

    for (int i = 0; i < total; i++)
    {
        int result = ft_atoi(test_cases[i].input);
        printf("Test %d: ft_atoi(%s) -> ", i + 1, test_cases[i].input);

        if (result == test_cases[i].expected)
        {
            printf(GREEN "PASS: \"%d\"\n" RESET, result);
            passed++;
        }
        else
        {
            printf(RED "FAIL: got \"%d\", expected \"%d\"\n" RESET, result, test_cases[i].expected);
        }
    }

    printf("Summary: %d/%d " GREEN "PASSED" RESET "\n", passed, total);
}

int main(void)
{
    test_ft_atoi();
} */