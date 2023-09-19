/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanish <mdanish@student.42abudhabi.ae>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 07:03:20 by mdanish           #+#    #+#             */
/*   Updated: 2023/05/10 07:12:51 by mdanish          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
			i++;
		}
		else
			i++;
	}
	return (str);
}

// int main(void)
// {
// 	char	str[] = "uiwefh";
// 	char	ste[] = "JKwerwSF";
// 	char	stw[] = "45Af56er75gFE87684";
// 	char	stq[] = "EUgiu*F&8787C(88c7q7*&(*&(*";

// 	printf("%s\n", ft_strupcase(str));
// 	printf("%s\n", ft_strupcase(ste));
// 	printf("%s\n", ft_strupcase(stw));
// 	printf("%s\n", ft_strupcase(stq));
// 	return (0);
// }