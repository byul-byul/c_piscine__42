/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgadzhil <@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 11:01:01 by bgadzhil          #+#    #+#             */
/*   Updated: 2023/03/20 13:04:42 by bgadzhil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

// int	main(int ac, char **av)
// {
// 	ac += 0;
// 	ft_putstr("res of ft_putstr() is: ");
// 	ft_putstr(av[1]);
// 	ft_putstr("\n");
// 	return (0);
// }