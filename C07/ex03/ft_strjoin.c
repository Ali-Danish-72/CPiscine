/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanish <mdanish@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 21:27:08 by mdanish           #+#    #+#             */
/*   Updated: 2023/05/22 14:58:38 by mdanish          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	str_len(int size, char **strs, char *sep)
{
	int	i;
	int	len;
	int	ctr;

	i = 0;
	while (sep[i])
		i++;
	len = i * (size - 1);
	ctr = 0;
	while (ctr < size)
	{
		i = 0;
		while (strs[ctr][i])
			i++;
		len += i;
		ctr++;
	}
	len += 1;
	return (len);
}

char	*none(void)
{
	char	*str;

	str = (char *)malloc(1);
	str[0] = '\0';
	return (str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		str_ctr;
	int		ui;
	int		i;
	char	*str;

	if (size == 0)
		return (none());
	else
	{
		str = (char *)malloc(str_len(size, strs, sep));
		str_ctr = 0;
		i = 0;
		while (str_ctr < size)
		{
			ui = 0;
			while (strs[str_ctr][ui] != '\0')
				str[i++] = strs[str_ctr][ui++];
			ui = 0;
			while (sep[ui] != '\0' && str_ctr < size - 1)
				str[i++] = sep[ui++];
			str_ctr++;
		}
		str[i] = '\0';
	}
	return (str);
}

int	main(void)
{
	char *str[] = {"Hi", "How", "Are", "Hey"};
	char sep[] = "| |";
	
	printf("%s", ft_strjoin(4, str, sep));
	return (0);
}