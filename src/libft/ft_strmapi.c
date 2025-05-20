/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleal <jleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 19:55:33 by jleal             #+#    #+#             */
/*   Updated: 2025/04/20 14:12:20 by jleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	size_t			len;
	char			*new;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	new = (char *)ft_calloc(len + 1, sizeof(char));
	if (!new)
		return (NULL);
	i = 0;
	while (i < len)
	{
		new[i] = (*f)(i, s[i]);
		i++;
	}
	return (new);
}

//TETS AREA//
/* // Helper function for testing ft_strmapi
static char map_func(unsigned int i, char c) {
    return (c + i); // Example: increment each char by its index
}

static void test_ft_strmapi(void)
{
    printf(YELLOW "\nTESTING ft_strmapi():\n" RESET);

    struct {
        const char *input;
        const char *expected;
    } test_cases[] = {
        {"abc", "ace"},  // 'a'+0, 'b'+1, 'c'+2
        {"123", "135"},  // '1'+0, '2'+1, '3'+2
        {"", ""},        // Empty string
        {"x", "x"},      // Single char
        {"XYZ", "XZ\\"}, // 'X'+0, 'Y'+1, 'Z'+2 (ASCII 90+2=92 → '\')
    };

    int passed = 0;
    int total = sizeof(test_cases) / sizeof(test_cases[0]);

    for (int i = 0; i < total; i++)
    {
        char *result = ft_strmapi(test_cases[i].input, map_func);
        printf("Test %d: ft_strmapi(\"%s\") -> ", i + 1, test_cases[i].input);
        
        if (result && strcmp(result, test_cases[i].expected) == 0)
        {
            printf(GREEN "PASS: \"%s\"\n" RESET, result);
            passed++;
        }
        else
        {
            printf(RED "FAIL: got \"%s\", expected \"%s\"\n" RESET, result ? result : "NULL", test_cases[i].expected);
        }

        free(result); // Free allocated memory
    }

    printf("Summary: %d/%d " GREEN "PASSED" RESET "\n", passed, total);
}

int main(void)
{
    test_ft_strmapi();
} */