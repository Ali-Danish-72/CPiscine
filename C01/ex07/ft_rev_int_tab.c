/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanish <mdanish@student.42abudhabi.ae>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 13:14:23 by mdanish           #+#    #+#             */
/*   Updated: 2023/05/08 14:42:39 by mdanish          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	swap_store;
	int	i;

	i = 0;
	size--;
	while (i < size)
	{
		swap_store = tab[i];
		tab[i] = tab[size];
		tab[size] = swap_store;
		i++;
		size--;
	}
}

// int main(void)
// {
// 	int tab[] = {1, 2, 3, 4, 5};

// 	printf("The original order is %d, %d, %d, %d, %d.\n", 
//	tab[0], tab[1], tab[2], tab[3], tab[4]);
// 	ft_rev_int_tab(tab, 5);
//  printf("The new order is %d, %d, %d, %d, %d.\n", 
//	 tab[0], tab[1], tab[2], tab[3], tab[4]);
// 	return (0);
// }