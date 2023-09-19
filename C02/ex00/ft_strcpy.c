/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanish <mdanish@student.42abudhabi.ae>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 16:03:10 by mdanish           #+#    #+#             */
/*   Updated: 2023/05/09 10:35:46 by mdanish          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// int	main(void)
// {
// 	char	dest[] = "Hellloooo!!!";
// 	char	src[] = "Hii";

// 	printf("Originals are %s and %s.\n", src, dest);
// 	ft_strcpy(dest, src);
// 	printf("New lines are %s and %s.", src, dest);
// 	return (0);
// }
