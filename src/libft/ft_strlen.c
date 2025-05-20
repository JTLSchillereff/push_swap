/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleal <jleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 18:34:58 by jleal             #+#    #+#             */
/*   Updated: 2025/04/20 14:25:26 by jleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlen(const char *str)
{
    size_t len;

    if (!str)
        return (0);
    len = 0;
    while (str[len])
        len++;
    return (len);
}

// TESTING AREA//
/* static void test_ft_strlen(void) {
    printf(YELLOW "\nTESTING ft_strlen()\n" RESET);
    char *str = "Hello, 42!";
    size_t len = strlen(str);
    size_t ft_len = ft_strlen(str);
    if (len != ft_len) {
        printf(RED "FAIL: ft_strlen(\"%s\") = %zu, expected %zu\n" RESET, str, ft_len, len);
        return;
    }
    printf(GREEN "ft_strlen: OK!\n" RESET);
}

int main(void)
{
    test_ft_strlen();
} */