/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgadzhil <@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 06:29:36 by bgadzhil          #+#    #+#             */
/*   Updated: 2023/03/15 19:25:06 by bgadzhil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// #include <stdio.h>
// int	main(void)
// {
// 	int	a;
// 	int	b;
// 	int	div;
// 	int	mod;

// 	a = 90;
// 	b = 42;
// 	div = 0;
// 	mod = 0;
// 	printf("values of div and mod before ft_div_mod() is:\t%d, %d\n", div, mod);
// 	ft_div_mod(a, b, &div, &mod);
// 	printf("values of div and mod after ft_div_mod() is:\t%d, %d\n", div, mod);
// 	return (0);
// }