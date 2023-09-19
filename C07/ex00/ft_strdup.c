/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanish <mdanish@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 14:18:06 by mdanish           #+#    #+#             */
/*   Updated: 2023/05/21 16:33:56 by mdanish          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int	str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i + 1);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*str;

	i = 0;
	str = (char *)malloc(str_len(src));
	if (str != NULL)
	{
		while (src[i])
		{
			str[i] = src[i];
			i++;
		}
		str[i] = '\0';
	}
	return (str);
}
/*
int main(void)
{
	char	str[] = "Hello World!";

	printf("'%s' -> original and '%s' -> duplicated, with ft_strdup.\n", 
			str, ft_strdup(str));
	printf("'%s' -> original and '%s' -> duplicated, with strdup.", 
			str, strdup(str)); 
	return (0);
}
*/