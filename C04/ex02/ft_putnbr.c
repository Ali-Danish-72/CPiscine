/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanish <mdanish@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 23:12:38 by mdanish           #+#    #+#             */
/*   Updated: 2023/05/20 13:47:27 by mdanish          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putnbr(int nb)
{
	char	c;

	if (nb == -2147483648)
	{
		write(1, "-", 1);
		write(1, "2", 1);
		nb = 147483648;
	}
	if (nb < 0)
	{
		nb *= -1;
		write(1, "-", 1);
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		c = nb + 48;
		write(1, &c, 1);
	}
}

// int	main(void)
// {
// 	int	nb1 = 23;
// 	int	nb2 = 7564457;
// 	int	nb3 = 2147483647;

// 	ft_putnbr(nb1);
// 	printf ("\n");
// 	ft_putnbr(nb2);
// 	printf ("\n");
// 	ft_putnbr(nb3);
// 	printf ("\n");
// 	return (0);
// }
