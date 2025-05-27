/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quicksort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleal <jleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 11:10:06 by jleal             #+#    #+#             */
/*   Updated: 2025/05/27 12:39:08 by jleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	swapi(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

static int	partition(int arr[], int low, int high)
{
	int	p;
	int	i;
	int	j;

	p = arr[low];
	i = low;
	j = high;
	while (i < j)
	{
		while (arr[i] <= p && i <= high - 1)
			i++;
		while (arr[j] > p && j >= low + 1)
			j--;
		if (i < j)
			swapi(&arr[i], &arr[j]);
	}
	swapi(&arr[low], &arr[j]);
	return (j);
}

void	ft_quicksort(int arr[], int low, int high)
{
	int	pi;

	if (low < high)
	{
		pi = partition(arr, low, high);
		ft_quicksort(arr, low, pi - 1);
		ft_quicksort(arr, pi + 1, high);
	}
}
