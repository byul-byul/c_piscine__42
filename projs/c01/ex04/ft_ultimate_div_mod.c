/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgadzhil <@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 06:36:35 by bgadzhil          #+#    #+#             */
/*   Updated: 2023/03/15 19:26:15 by bgadzhil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int		tmp1;
	int		tmp2;

	tmp1 = *a / *b;
	tmp2 = *a % *b;
	*a = tmp1;
	*b = tmp2;
}

// #include <stdio.h>
// int	main(void)
// {
// 	int	a;
// 	int	b;

// 	a = 90;
// 	b = 42;

// 	printf("values of a and b before ft_ultimate_div_mod() is:");
// 	printf("\t%d, %d\n", a, b);
// 	ft_ultimate_div_mod(&a, &b);
// 	printf("values of a and b after ft_ultimate_div_mod() is:");
// 	printf("\t%d, %d\n", a, b);
// 	return (0);
// }