/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgadzhil <@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 11:05:03 by bgadzhil          #+#    #+#             */
/*   Updated: 2023/03/20 13:04:39 by bgadzhil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long int	num;

	num = nb;
	if (num < 0)
	{
		write(1, "-", 1);
		num = -num;
	}
	if (num >= 10)
	{
		ft_putnbr(num / 10);
		ft_putchar(num % 10 + 48);
	}
	else
		ft_putchar(num % 10 + 48);
}

// #include <stdlib.h>
// #include <stdio.h>
// int	main(int ac, char **av)
// {
// 	ac += 0;
// 	ft_putnbr(atoi(av[1]));
// 	write(1, "\n", 1);
// 	return (0);
// }