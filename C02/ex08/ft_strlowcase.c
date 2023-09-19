/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanish <mdanish@student.42abudhabi.ae>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 07:21:58 by mdanish           #+#    #+#             */
/*   Updated: 2023/05/10 07:31:30 by mdanish          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] = str[i] + 32;
			i++;
		}
		else
			i++;
	}
	return (str);
}

// int	main(void)
// {
// 	char	str[] = "FMEOLJTFIFYF";
// 	char	ste[] = "DJEWN1a24548587@$#@$";
// 	char	stw[] = "rt4$75EdgTERG6545WTGWEG";

// 	printf("%s\n", ft_strlowcase(str));
// 	printf("%s\n", ft_strlowcase(ste));
// 	printf("%s\n", ft_strlowcase(stw));
// 	return (0);
// }
