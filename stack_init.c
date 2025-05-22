/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleal <jleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 17:00:13 by jleal             #+#    #+#             */
/*   Updated: 2025/05/22 08:36:58 by jleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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



void	stack_init(t_node **a, char **av, bool flag_ac_2)
{
	long	nbr;
	int		i;

	i = 0;
	if (!flag_ac_2)
		av++;
	while (av[i])
	{
		if (filter_syntax(av[i]))
			error_free(a, av, flag_ac_2);
		nbr = ft_atol(av[i]);
		if (nbr > INT_MAX || nbr < INT_MIN)
			error_free(a, av, flag_ac_2);
		if (filter_repetition(*a, (int)nbr))
			error_free(a, av, flag_ac_2);
		append_node(a, (int)nbr);
		++i;
	}
	if (flag_ac_2)
		free_matrix(av);
}