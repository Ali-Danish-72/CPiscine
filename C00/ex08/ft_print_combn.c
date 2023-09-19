/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanish <mdanish@student.42abudhabi.ae>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 07:47:31 by mdanish           #+#    #+#             */
/*   Updated: 2023/05/07 07:47:39 by mdanish          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb1(void)
{
	int	ones_digit;

	ones_digit = 0;
	while (ones_digit <= 9)
	{
		ft_putchar(ones_digit + 48);
		if (ones_digit != 9)
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
		ones_digit++;
	}
}

void	ft_print_comb2(void)
{
	int	tens_digit;
	int	ones_digit;

	tens_digit = 0;
	while (tens_digit <= 8)
	{
		ones_digit = tens_digit + 1;
		while (ones_digit <= 9)
		{
			ft_putchar(tens_digit + 48);
			ft_putchar(ones_digit + 48);
			if (tens_digit != 8)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			ones_digit++;
		}
			tens_digit++;
	}
}

void	ft_print_combn(int n)
{
	if (n == 1)
		ft_print_comb1();
	if (n == 2)
		ft_print_comb2();
}

/*int	main(void)
{
	ft_print_combn(2);
	return (0);
}
*/