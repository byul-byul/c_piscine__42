/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgadzhil <@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 16:24:49 by bgadzhil          #+#    #+#             */
/*   Updated: 2023/03/20 15:51:59 by bgadzhil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 1;
	if (nb <= 1 || nb == 4)
		return (0);
	if (nb == 2)
		return (1);
	while (++i < nb / 2)
		if (!(nb % i))
			return (0);
	return (1);
}

// #include <stdio.h>
// #include <stdlib.h>
// int	main(int ac, char **av)
// {
// 	int n = atoi(av[1]);
// 	ac += 0;
// 	printf("number %d is prime: %s\n", n, (ft_is_prime(n) ? "true" : "false"));
// 	return (0);	
// }