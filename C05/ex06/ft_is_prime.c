/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanish <mdanish@student.42abudhabi.ae>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 14:01:37 by mdanish           #+#    #+#             */
/*   Updated: 2023/05/18 14:12:49 by mdanish          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//  #include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	while (nb % i != 0)
		i++;
	if (i == nb)
		return (1);
	return (0);
}

//  int	main(void)
//  {
//  	printf("%d\n", ft_is_prime(5));
//  	printf("%d\n", ft_is_prime(-10));
//  	printf("%d\n", ft_is_prime(238745));
//  	printf("%d\n", ft_is_prime(54156157));
//  	return (0);
//  }
