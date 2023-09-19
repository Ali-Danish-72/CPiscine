/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanish <mdanish@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 16:31:10 by mdanish           #+#    #+#             */
/*   Updated: 2023/05/20 21:03:20 by mdanish          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;
	int	*tab;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	tab = (int *)malloc(size * sizeof(int));
	if (tab == NULL)
		return (-1);
	i = 0;
	*range = tab;
	while (i < size)
	{
		tab[i] = min + i;
		i++;
	}
	return (size);
}
/*
int main()
{
	int *range;
	int min = 5;
	int max = 10;
	int i = 0;

	printf("%d\n", ft_ultimate_range(&range, min, max));
	while (range[i] != '\0')
	{
		printf("%d ", range[i]);
		i++;
	}
	return (0);
}

*/