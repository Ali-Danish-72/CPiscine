/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanish <mdanish@student.42abudhabi.ae>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 11:17:51 by mdanish           #+#    #+#             */
/*   Updated: 2023/05/13 12:51:42 by mdanish          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] == s2[i])
			i++;
		else
			return (s1[i] - s2[i]);
	}
	return (0);
}

// int	main(void)
// {
// 	char	s1[] = "Hello";
// 	char	s2[] = "Hello";
// 	char	s3[] = "Yes";
// 	char	s4[] = "Yesn't";

// 	printf("%d\n", ft_strcmp(s1, s2));
// 	printf("%d", ft_strcmp(s3, s4));
// 	return (0);
// }
