/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanish <mdanish@student.42abudhabi.ae>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 12:35:04 by mdanish           #+#    #+#             */
/*   Updated: 2023/05/18 12:42:37 by mdanish          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//  #include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	i;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power == 1)
		return (nb);
	i = nb;
	if (power > 1)
		i *= ft_recursive_power(nb, power - 1);
	return (i);
}

//  int main(void)
//  {
//  	printf("%d\n", ft_recursive_power(5, 5));
//  	printf("%d", ft_recursive_power(2, 4));
//  	return (0);
//  }
