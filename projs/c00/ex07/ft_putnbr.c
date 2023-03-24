/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgadzhil <@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 19:51:39 by bgadzhil          #+#    #+#             */
/*   Updated: 2023/03/13 16:53:30 by bgadzhil         ###   ########.fr       */
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

// int	main(void)
// {
// 	ft_putnbr(424242);
// 	ft_putchar('\n');
// 	ft_putnbr(-424242);
// 	ft_putchar('\n');
// 	ft_putnbr(0);
// 	ft_putchar('\n');
// 	return (0);
// }