/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgadzhil <@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 16:11:56 by bgadzhil          #+#    #+#             */
/*   Updated: 2023/03/21 13:53:35 by bgadzhil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	get_sqrt(int nb, int i)
{
	if ((i * i) > nb)
		return (0);
	else if ((i * i) == nb)
		return (i);
	return (get_sqrt(nb, i + 1));
}

int	ft_sqrt(int nb)
{
	if (nb < 0 || nb > 2147395600)
		return (0);
	return (get_sqrt(nb, 1));
}

// #include <stdio.h>
// #include <stdlib.h>
// int	main(int ac, char **av)
// {
// 	int n = atoi(av[1]);
// 	ac += 0;
// 	printf("sqrt of number %d is %d\n", n, ft_sqrt(n));
// 	return (0);	
// }