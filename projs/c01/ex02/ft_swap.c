/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgadzhil <@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 06:25:36 by bgadzhil          #+#    #+#             */
/*   Updated: 2023/03/15 19:24:34 by bgadzhil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

// #include <stdio.h>
// int	main(void)
// {
// 	int	a;
// 	int	b;

// 	a = 90;
// 	b = 42;
// 	printf("values of a and b before ft_swap() is:\t%d, %d\n", a, b);
// 	ft_swap(&a, &b);
// 	printf("values of a and b after ft_swap() is:\t%d, %d\n", a, b);
// 	return (0);
// }