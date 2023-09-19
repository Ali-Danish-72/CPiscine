/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanish <mdanish@student.42abudhabi.ae>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 11:59:55 by mdanish           #+#    #+#             */
/*   Updated: 2023/05/06 13:08:42 by mdanish          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

void	ft_print(int no_of_cols, char left, char mid, char right)
{
	ft_putchar(left);
	no_of_cols = no_of_cols - 1;
	while (no_of_cols > 1)
	{
		ft_putchar(mid);
		no_of_cols --;
	}
	if (no_of_cols == 1)
	{
		ft_putchar(right);
		ft_putchar('\n');
	}
}

void	rush(int x, int y)
{
	if (x >= 1 && y >= 1)
	{
		ft_print(x, 'A', 'B', 'C');
		y = y - 1;
		while (y > 1)
		{
			ft_print(x, 'B', ' ', 'B');
			y--;
		}
		if (y == 1)
		{
			ft_print(x, 'A', 'B', 'C');
		}
	}
	else
		write(1, "You're stupid, just type an integer.\n", 37);
}
