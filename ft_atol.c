/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleal <jleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 13:14:50 by jleal             #+#    #+#             */
/*   Updated: 2025/05/21 15:35:19 by jleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int ft_isspace(char c)
{
    if ((c >= 9 && c <= 13) || c == 32)
        return (c);
    return (0);
}

int ft_isdigit(char c)
{
	if (c >= '0' && c <= '9')
		return (c);
	return (0);
} 

long ft_atol(const char *str)
{
    long tot;
    long p;
    long i;

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