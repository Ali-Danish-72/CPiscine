/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanish <mdanish@student.42abudhabi.ae>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 13:13:22 by mdanish           #+#    #+#             */
/*   Updated: 2023/05/20 11:25:17 by mdanish          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//  #include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb > -1)
	{
		while (i * i < nb && i <= 46340)
			i++;
		if (i * i == nb)
			return (i);
	}
	return (0);
}

//  int main(void)
//  {
//  	printf("%d", ft_sqrt(0));
//  	return (0);
//  }
