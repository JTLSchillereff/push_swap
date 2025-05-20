/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleal <jleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 20:12:01 by jleal             #+#    #+#             */
/*   Updated: 2025/04/20 14:25:26 by jleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char *))
{
    unsigned int i;

    if (!s || !f)
        return;
    i = 0;
    while (s[i])
    {
        (*f)(i, &s[i]);
        i++;
    }
}

// TESTING AREA//
/* // Helper function for testing ft_striteri
static void iter_func(unsigned int i, char *c) {
    *c = *c + i; // Modify the char in place (same logic as map_func)
}

static void test_ft_striteri(void)
{
    printf(YELLOW "\nTESTING ft_striteri():\n" RESET);

    struct {
        char input[32];
        const char *expected;
    } test_cases[] = {
        {"abc", "ace"},  // 'a'+0, 'b'+1, 'c'+2
        {"123", "135"},  // '1'+0, '2'+1, '3'+2
        {"", ""},        // Empty string
        {"x", "x"},      // Single char (unchanged)
        {"XYZ", "XZ\\"}, // 'X'+0, 'Y'+1, 'Z'+2 (ASCII 90+2=92 → '\')
    };

    int passed = 0;
    int total = sizeof(test_cases) / sizeof(test_cases[0]);

    for (int i = 0; i < total; i++)
    {
        char buffer[32];
        strcpy(buffer, test_cases[i].input); // Copy input to mutable buffer
        ft_striteri(buffer, iter_func);
        printf("Test %d: ft_striteri(\"%s\") -> ", i + 1, test_cases[i].input);

        if (strcmp(buffer, test_cases[i].expected) == 0)
        {
            printf(GREEN "PASS: \"%s\"\n" RESET, buffer);
            passed++;
        }
        else
        {
            printf(RED "FAIL: got \"%s\", expected \"%s\"\n" RESET, buffer, test_cases[i].expected);
        }
    }

    printf("Summary: %d/%d " GREEN "PASSED" RESET "\n", passed, total);
}

int main(void)
{
    test_ft_striteri();
}  */