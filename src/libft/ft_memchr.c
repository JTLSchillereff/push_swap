/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleal <jleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 09:31:40 by jleal             #+#    #+#             */
/*   Updated: 2025/04/20 12:56:55 by jleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// locate byte in byte string
void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	a;

	if (!s || n == 0)
		return (NULL);
	ptr = (unsigned char *) s;
	a = (unsigned char) c;
	while (n-- > 0)
	{
		if (*ptr == a)
		{
			return ((void *)ptr);
		}
		ptr++;
	}
	return (NULL);
}

//TESTING AREA//
/* static void test_ft_memchr(void) {
    printf(YELLOW "\nTESTING ft_memchr()\n" RESET);
    
    const char str[] = "test string";
    int c = ' ';
    size_t n = sizeof(str);
    void *res1 = ft_memchr(str, c, n);
    void *res2 = memchr(str, c, n);
    
    if (res1 != res2) {
        printf(RED "FAIL: ft_memchr() = %p, expected %p\n" RESET, res1, res2);
        return;
    }
    printf(GREEN "ft_memchr: OK!\n" RESET);
}

int main(void)
{
    test_ft_memchr();
}*/