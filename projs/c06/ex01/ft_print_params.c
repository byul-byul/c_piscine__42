/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgadzhil <@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 06:39:10 by bgadzhil          #+#    #+#             */
/*   Updated: 2023/03/06 06:51:31 by bgadzhil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	ac += 0;
	while (++i < ac)
	{
		ft_putstr(av[i]);
		write(1, "\n", 1);
	}
	return (0);
}
