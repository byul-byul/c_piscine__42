/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgadzhil <@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 15:59:26 by bgadzhil          #+#    #+#             */
/*   Updated: 2023/03/20 15:51:32 by bgadzhil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}

// #include <stdio.h>
// #include <stdlib.h>
// int	main(int ac, char **av)
// {
// 	int n = atoi(av[1]);
// 	ac += 0;
// 	printf("factorial of %d is %d\n", n, ft_recursive_factorial(n));
// 	return (0);	
// }