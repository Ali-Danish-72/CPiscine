/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanish <mdanish@student.42abudhabi.ae>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 13:44:25 by mdanish           #+#    #+#             */
/*   Updated: 2023/05/09 16:50:40 by mdanish          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			i++;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			i++;
		}
		else
			return (0);
	}
	return (1);
}

// int main(void)
// {
// 	char	str1[5];
// 	char	str2[] = "4cbnskd{qdf]fklndnfv";
// 	char	str3[] = "KAGbkcuhBKJADBcksdb";
// 	char	str4[] = "welfgyuv23hgbjfk3";

// 	printf("str1 = %d.\n", ft_str_is_alpha(str1));
// 	printf("str2 = %d.\n", ft_str_is_alpha(str2));
// 	printf("str3 = %d.\n", ft_str_is_alpha(str3));
// 	printf("str4 = %d.\n", ft_str_is_alpha(str4));
// 	return (0);
// }
