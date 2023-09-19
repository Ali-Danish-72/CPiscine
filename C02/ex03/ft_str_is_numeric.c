/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanish <mdanish@student.42abudhabi.ae>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 17:06:02 by mdanish           #+#    #+#             */
/*   Updated: 2023/05/09 17:15:08 by mdanish          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{	
		if (str[i] >= '0' && str[i] <= '9')
			i++;
		else
			return (0);
	}
	return (1);
}

// int	main(void)
// {
// 	char	str[] = "6513515135";
// 	char	ste[] = "54ds84459843f687";
// 	char	stw[5];

// 	printf("%d", ft_str_is_numeric(str));
// 	printf("%d", ft_str_is_numeric(ste));
// 	printf("%d", ft_str_is_numeric(stw));
// 	return (0);
// }