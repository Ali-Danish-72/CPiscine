/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanish <mdanish@student.42abudhabi.ae>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 07:46:38 by mdanish           #+#    #+#             */
/*   Updated: 2023/05/13 10:31:47 by mdanish          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (j == 0 && str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
			j++;
		}
		else if (j > 0 && str[i] >= 65 && str[i] <= 90)
		{
			str[i] = str[i] + 32;
			j++;
		}
		else if (str[i] < 48 || (str[i] > 57 && str [i] < 65)
			|| (str[i] > 90 && str[i] < 97) || str[i] > 123)
			j = 0;
		else
			j++;
		i++;
	}
	return (str);
}

// int	main(void)
// {
// 	char	str[] = "salut, comment ? 42mots quarante-deux; cinquante+et+un";
// 	printf("%s\n", ft_strcapitalize(str));
// }
