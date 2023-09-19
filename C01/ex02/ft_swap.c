/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanish <mdanish@student.42abudhabi.ae>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 06:40:10 by mdanish           #+#    #+#             */
/*   Updated: 2023/05/08 07:03:06 by mdanish          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	swap_store;

	swap_store = *a;
	*a = *b;
	*b = swap_store;
}

// int	main(void)
// {
// 	int first_int;
// 	int	second_int;

// 	first_int = 0;
// 	second_int = 100;
// 	ft_swap(&first_int, &second_int);
// 	printf("first_int changed from 0 to %d.\n", first_int);
// 	printf("second_int changed from 100 to %d.",  second_int);
// 	return (0);
// }