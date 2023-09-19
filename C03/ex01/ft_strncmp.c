/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncmp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanish <mdanish@student.42abudhabi.ae>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 14:42:39 by mdanish           #+#    #+#             */
/*   Updated: 2023/05/13 14:58:16 by mdanish          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>                 

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] == s2[i])
			i++;
		else if (s1[i] > s2[i])
			return (1);
		else if (s1[i] < s2[i])
			return (-1);
	}
	return (0);
}

// int	main(void)
// {
// 	char	s1[] = "Hello!";
// 	char	s2[] = "Hellbent";
// 	char	s3[] = "Firm";
// 	char	s4[] = "First";

// 	printf("%d\n", ft_strncmp(s1, s2, 6));
// 	printf("%d", ft_strncmp(s3, s4, 5));
// 	return (0);
// }
