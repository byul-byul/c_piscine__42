/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgadzhil <@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 16:09:09 by bgadzhil          #+#    #+#             */
/*   Updated: 2023/03/20 15:51:46 by bgadzhil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index == 0)
		return (0);
	if (index < 0)
		return (-1);
	if (index == 1 || index == 2)
		return (1);
	else
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

// #include <stdio.h>
// #include <stdlib.h>
// int	main(int ac, char **av)
// {
// 	int n = atoi(av[1]);
// 	ac += 0;
// 	printf("fibonacci number on index %d is %d\n", n, ft_fibonacci(n));
// 	return (0);	
// }