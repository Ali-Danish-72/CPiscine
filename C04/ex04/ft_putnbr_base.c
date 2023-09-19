/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanish <mdanish@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 09:06:42 by mdanish           #+#    #+#             */
/*   Updated: 2023/05/20 16:56:13 by mdanish          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *base)
{
	int	i;

	i = 0;
	while (base[i])
		i++;
	return (i);
}

int	base_checker(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i < 2)
		return (0);
	return (1);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	nb;
	int		base_len;

	nb = nbr;
	base_len = ft_strlen(base);
	if (base_checker(base))
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb *= -1;
		}
		if (nb > -1 && nb < base_len)
			ft_putchar(base[nb]);
		if (nb >= base_len)
		{
			ft_putnbr_base(nb / base_len, base);
			ft_putnbr_base(nb % base_len, base);
		}
	}
}
/*
int	main(void)
{
	ft_putnbr_base(-2147483647, "0123456789ABCDEF");
	ft_putchar('\n');
	ft_putnbr_base(-2147483647, "01");
	ft_putchar('\n');
	ft_putnbr_base(-2147483647, "poneyvif");
	return (0);
}
*/