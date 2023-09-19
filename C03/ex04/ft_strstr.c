/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanish <mdanish@student.42abudhabi.ae>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 12:56:42 by mdanish           #+#    #+#             */
/*   Updated: 2023/05/14 14:41:06 by mdanish          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <unistd.h>
*/
char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	a;

	i = 0;
	a = 0;
	if (to_find[a] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		a = 0;
		while (str[i + a] == to_find[a])
		{
			if (to_find [a + 1] == '\0')
				return (str + i);
			a++;
		}
		i++;
	}
	return (0);
}
/*
int main(void)
{
	char	str[] = "Hello World";
	char	tf1[] = "";
	char	tf2[] = "Hell";
	char	tf3[] = "Worm";
	char	tf4[] = "lo W";
	printf("%s\n", ft_strstr(str, tf1));
	printf("%s\n", ft_strstr(str, tf2));
	printf("%s\n", ft_strstr(str, tf3));
	printf("%s", ft_strstr(str, tf4));
	return (0);
}
*/
