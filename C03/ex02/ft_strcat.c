/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanish <mdanish@student.42abudhabi.ae>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 15:10:11 by mdanish           #+#    #+#             */
/*   Updated: 2023/05/14 10:58:18 by mdanish          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
*/

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	a;
	int	b;

	a = ft_strlen(dest);
	b = 0;
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}

/*
int	main(void)
{
	char s1[100];
	char s2[100];
	fgets(s1, sizeof(s1), stdin);
	fgets(s2, sizeof(s2), stdin);
	printf("Source: %s\n", s2);
	printf("Combined: %s", ft_strcat(s1, s2)); 
	printf("Source: %s\n", s2);
	return (0);
}
*/
