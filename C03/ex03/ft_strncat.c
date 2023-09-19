/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanish <mdanish@student.42abudhabi.ae>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 11:05:47 by mdanish           #+#    #+#             */
/*   Updated: 2023/05/14 12:19:03 by mdanish          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
*/
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	a;

	i = 0;
	a = 0;
	while (dest[a] != '\0')
		a++;
	while (i < nb && src[i] != '\0')
	{
		dest[a] = src[i];
		i++;
		a++;
	}
	dest[a] = '\0';
	return (dest);
}

/*
int main(void)
{
	char s1[] = "Hello ";
	char s2[] = "Worldly Things";
	printf("Source: %s\n", s2);
	printf("Combined: %s\n", ft_strncat(s1, s2, 5));
	printf("Source: %s\n", s2);
	return (0);
}
*/
