/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanish <mdanish@student.42abudhabi.ae>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 21:43:30 by mdanish           #+#    #+#             */
/*   Updated: 2023/05/18 12:06:21 by mdanish          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//  #include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;

	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	i = nb;
	while (nb > 1)
	{
		nb--;
		i *= nb;
	}
	return (i);
}

//  int	main(void)
//  {
//    	printf("%d", ft_iterative_factorial(5));
//  	return (0);
//  }
