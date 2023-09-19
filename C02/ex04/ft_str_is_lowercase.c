/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanish <mdanish@student.42abudhabi.ae>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 18:19:09 by mdanish           #+#    #+#             */
/*   Updated: 2023/05/09 18:27:18 by mdanish          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			i++;
		else
			return (0);
	}
	return (1);
}

// int	main(void)
// {
// 	char	str[] = "hasdfbgwjyefiuwe";
// 	char	ste[] = "3r2Ibj";
// 	char	stw[] = "&^@(*#&$@";
// 	char	stq[2];

// 	printf("%d", ft_str_is_lowercase(str));
// 	printf("%d", ft_str_is_lowercase(ste));
// 	printf("%d", ft_str_is_lowercase(stw));
// 	printf("%d", ft_str_is_lowercase(stq));
// 	return (0);
// }