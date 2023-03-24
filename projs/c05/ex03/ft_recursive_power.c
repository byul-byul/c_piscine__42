/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgadzhil <@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 16:06:40 by bgadzhil          #+#    #+#             */
/*   Updated: 2023/03/20 15:51:43 by bgadzhil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	if (power == 1)
		return (nb);
	else
		return (nb * ft_recursive_power(nb, power - 1));
}

// #include <stdio.h>
// #include <stdlib.h>
// int	main(int ac, char **av)
// {
// 	int n = atoi(av[1]);
// 	int	p = atoi(av[2]);
// 	ac += 0;
// 	printf("%d with power %d is %d\n", n, p, ft_recursive_power(n, p));
// 	return (0);	
// }