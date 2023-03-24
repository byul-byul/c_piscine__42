/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgadzhil <@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 19:29:56 by bgadzhil          #+#    #+#             */
/*   Updated: 2023/03/01 06:42:45 by bgadzhil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n < 0)
		write(1, "N", 1);
	else
		write(1, "P", 1);
}

// int	main(void)
// {
// 	ft_is_negative(0);
// 	write(1, "\n", 1);
// 	ft_is_negative(-9);
// 	write(1, "\n", 1);
// 	ft_is_negative(100);
// 	write(1, "\n", 1);
// 	ft_is_negative(-1);
// 	write(1, "\n", 1);
// 	return (0);
// }