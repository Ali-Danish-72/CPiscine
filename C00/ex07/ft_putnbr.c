/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanish <mdanish@student.42abudhabi.ae>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 18:12:24 by mdanish           #+#    #+#             */
/*   Updated: 2023/05/06 16:18:20 by mdanish          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char		c;
	long int	num;

	num = nb;
	if (num < 0)
	{
		write(1, "-", 1);
		num = -num;
	}
	if (num == 0)
	{
		write(1, "0", 1);
		return ;
	}
	if (num > 9)
	{
		ft_putnbr(num / 10);
		ft_putnbr(num % 10);
	}
	else
	{
		c = num + 48;
		write(1, &c, 1);
	}
}

/*int	main(void)
{
	ft_putnbr(42);
	return (0);
}
*/