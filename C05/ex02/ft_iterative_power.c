/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanish <mdanish@student.42abudhabi.ae>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 12:09:05 by mdanish           #+#    #+#             */
/*   Updated: 2023/05/21 10:27:58 by mdanish          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//  #include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power == 1)
		return (nb);
	i = nb;
	while (power > 1)
	{
		i *= nb;
		power--;
	}
	return (i);
}

//  int main(void)
//  {
//  	printf("%d", ft_iterative_power(5, 4));
//  	return (0);
//  }
