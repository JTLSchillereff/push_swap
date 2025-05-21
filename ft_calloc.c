/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleal <jleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 09:35:02 by jleal             #+#    #+#             */
/*   Updated: 2025/05/21 15:35:01 by jleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void ft_bzero(void *s, size_t n)
{
    unsigned char *tmp_ptr;

    if (!s)
        return;
    tmp_ptr = (unsigned char *)s;
    while (n > 0)
    {
        *(tmp_ptr++) = 0;
        n--;
    }
}

void *ft_calloc(size_t count, size_t size)
{
    unsigned char *ptr;

    if (size && count > (size_t)-1 / size)
        return (NULL);
    ptr = malloc(count * size);
    if (!ptr)
        return (NULL);
    ft_bzero(ptr, count * size);
    return (ptr);
}

// Copy memory area
void *ft_memcpy(void *dst, const void *src, size_t n)
{
    unsigned char *tmp_src;
    unsigned char *tmp_dst;

    if (!dst && !src)
        return (dst);
    tmp_src = (unsigned char *)src;
    tmp_dst = (unsigned char *)dst;
    while (n)
    {
        *(tmp_dst++) = *(tmp_src++);
        n--;
    }
    return (dst);
}