/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanish <mdanish@student.42abudhabi.ae>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 07:12:18 by mdanish           #+#    #+#             */
/*   Updated: 2023/05/08 07:26:54 by mdanish          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// int main(void)
// {
// 	int a;
// 	int b;
// 	int div;
// 	int mod;

// 	a = 543;
// 	b = 5;
// 	div = 0;
// 	mod = 0;
// 	ft_div_mod(a, b, &div, &mod);
// 	printf("The division of %d by %d is ", a, b);
//  printf("equal to %d remainder %d.", div, mod);
// 	return (0);
// }