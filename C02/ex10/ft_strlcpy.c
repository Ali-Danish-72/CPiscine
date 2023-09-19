/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanish <mdanish@student.42abudhabi.ae>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 12:13:03 by mdanish           #+#    #+#             */
/*   Updated: 2023/05/13 10:45:30 by mdanish          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (i < size && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
		j++;
	}
	while (j <= size)
	{
		dest[j] = '\0';
		j++;
	}
	while (src[i] != '\0')
		i++;
	return (i);
}

// int main(void)
// {
// 	char	src[] = "Amazingly";
// 	char	dest[] = "Put on some weight!!!";
// 	int		i;
// 	int		b = ft_strlcpy(dest, src, sizeof(dest));

// 	i = 0;
// 	while (dest[i] != 0)
// 	{
// 		printf("%c", dest[i]);
// 		i++;
// 	}
// 	printf("\nThe amount of characters in src are %d.", b);
// 	return (0);
// }
