/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanish <mdanish@student.42abudhabi.ae>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 17:12:24 by mdanish           #+#    #+#             */
/*   Updated: 2023/05/05 18:09:54 by mdanish          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_char(char c)
{
	write(1, &c, 1);
}

void	int_to_char(int n)
{
	int	tens_digit;
	int	ones_digit;

	if (n < 10)
	{
		print_char('0');
		print_char(n + '0');
	}
	else
	{
		tens_digit = n / 10;
		ones_digit = n % 10;
		print_char(tens_digit + '0');
		print_char(ones_digit + '0');
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a < 99)
	{
		b = a + 1;
		while (b < 100)
		{
			int_to_char(a);
			print_char(' ');
			int_to_char(b);
			if (a < 98)
			{
				print_char(',');
				print_char(' ');
			}
			b++;
		}
		a++;
	}
}

/*
int	main(void)
{
	ft_print_comb2();
	return (0);
}
*/