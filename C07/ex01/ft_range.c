/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanish <mdanish@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 15:24:00 by mdanish           #+#    #+#             */
/*   Updated: 2023/05/20 16:42:16 by mdanish          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*int_tab;

	if (min >= max)
		return (NULL);
	int_tab = (int *)malloc((max - min) * sizeof(int));
	i = 0;
	if (int_tab != NULL)
	{
		while (i < (max - min))
		{
			int_tab[i] = min + i;
			i++;
		}
	}
	return (int_tab);
}
/*
int	main()
{
	int	min = 20;
	int max = 30;
	int	i = 0;
	int *array = ft_range(min, max);

	while (array[i] != '\0')
	{
		printf("%d, ", array[i]);
		i++;
	}
	return (0);
}
*/