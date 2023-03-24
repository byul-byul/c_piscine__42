/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgadzhil <@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 16:30:53 by bgadzhil          #+#    #+#             */
/*   Updated: 2023/03/21 13:57:23 by bgadzhil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i <= (nb / i))
	{
		if ((nb % i) == 0)
			return (0);
		i++;
	}
	return (i);
}

int	ft_find_next_prime(int nb)
{
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}

// #include <stdio.h>
// #include <stdlib.h>
// int	main(int ac, char **av)
// {
// 	int n = atoi(av[1]);
// 	ac += 0;
// 	printf("next prime for number %d is: %d\n", n, ft_find_next_prime(n));
// 	return (0);	
// }