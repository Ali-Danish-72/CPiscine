/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanish <mdanish@student.42abudhabi.ae>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 18:46:40 by mdanish           #+#    #+#             */
/*   Updated: 2023/05/09 18:53:46 by mdanish          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
			i++;
		else
			return (0);
	}
	return (1);
}

// int main(void)
// {
// 	char	str1[5];
// 	char	str2[] = "4cKYFGS&^*OW$HUISdf]fklndnfv";
// 	char	str3[1];
// 	char	str4[] = "welfgyuv23hgbjfk3";

// 	str3[0] = 30;
// 	printf("str1 = %d.\n", ft_str_is_printable(str1));
// 	printf("str2 = %d.\n", ft_str_is_printable(str2));
// 	printf("str3 = %d.\n", ft_str_is_printable(str3));
// 	printf("str4 = %d.\n", ft_str_is_printable(str4));
// 	return (0);
// }