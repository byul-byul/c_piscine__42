/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgadzhil <@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 16:01:33 by bgadzhil          #+#    #+#             */
/*   Updated: 2023/03/20 15:51:36 by bgadzhil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	res;

	i = -1;
	res = 1;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (++i < power)
		res = res * nb;
	return (res);
}

// #include <stdio.h>
// #include <stdlib.h>
// int	main(int ac, char **av)
// {
// 	int n = atoi(av[1]);
// 	int	p = atoi(av[2]);
// 	ac += 0;
// 	printf("%d with power %d is %d\n", n, p, ft_iterative_power(n, p));
// 	return (0);	
// }