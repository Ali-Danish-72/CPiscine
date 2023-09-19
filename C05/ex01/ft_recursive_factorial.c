/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanish <mdanish@student.42abudhabi.ae>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 10:41:24 by mdanish           #+#    #+#             */
/*   Updated: 2023/05/18 11:01:31 by mdanish          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//  #include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	i;

	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	i = nb;
	if (nb > 1)
		i *= ft_recursive_factorial(nb - 1);
	return (i);
}

//  int	main(void)
//  {
//  	printf("%d", ft_recursive_factorial(5));
//  	return (0);
//  }
