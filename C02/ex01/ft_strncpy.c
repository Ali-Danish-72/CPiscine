/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanish <mdanish@student.42abudhabi.ae>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 19:06:37 by mdanish           #+#    #+#             */
/*   Updated: 2023/05/13 10:30:16 by mdanish          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

// int main(void)
// {
// 	char	dest[] = "Giant People!";
// 	char	src[] = "Hello!";

// 	printf("The original texts are '%s' and '%s'.\n", src, dest);
// 	ft_strncpy(dest, src, 12);
// 	printf("The copied texts are '%s' and '%s'.", src, dest);
// 	return (0);
// }
