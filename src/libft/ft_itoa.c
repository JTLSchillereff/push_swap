/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleal <jleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 14:12:37 by jordanschil       #+#    #+#             */
/*   Updated: 2025/04/20 14:24:07 by jleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intl(int n)
{
	int	i;

	if (n == -2147483648)
		return (11);
	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		i++;
		n = -n;
	}
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static char	*handle_intmin(char *str)
{
	ft_memcpy(str, &"-2147483648", 11);
	return (str);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*str;
	int		i;

	len = ft_intl(n);
	str = (char *)ft_calloc(len + 1, sizeof(char));
	if (!(str))
		return (NULL);
	if (n == -2147483648)
		return (handle_intmin(str));
	i = 0;
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
		i++;
	}
	while (len > i)
	{
		str[(len--) - 1] = (n % 10) + '0';
		n /= 10;
	}
	return (str);
}

//TESTING AREA//
/* static void test_ft_itoa(void)
{
    printf(YELLOW "\nTESTING ft_itoa():\n" RESET);

    struct {
        int input;
        const char *expected;
    } test_cases[] = {
        {0, "0"},
        {123, "123"},
        {-456, "-456"},
        {2147483647, "2147483647"},  // INT_MAX
        {-2147483648, "-2147483648"}, // INT_MIN
        {42, "42"},
        {-99, "-99"}
    };

    int passed = 0;
    int total = sizeof(test_cases) / sizeof(test_cases[0]);

    for (int i = 0; i < total; i++)
    {
        char *result = ft_itoa(test_cases[i].input);
        printf("Test %d: ft_itoa(%d) -> ", i + 1, test_cases[i].input);
        
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
    test_ft_itoa();
} */