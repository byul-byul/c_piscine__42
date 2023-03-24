/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validator.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgadzhil <@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 20:25:31 by bgadzhil          #+#    #+#             */
/*   Updated: 2023/03/12 21:32:21 by bgadzhil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

static int	is_correct_height(char c)
{
	if ((c >= MIN_HEIGHT + 48 && c <= MAX_HEIGHT + 48))
		return (1);
	print_error(4);
	return (0);
}

static int	is_correct_delimeter(char c)
{
	if (c == 32)
		return (1);
	print_error(4);
	return (0);
}

int	is_valid_arg(int ac, char **av)
{
	int	i;
	int	len;

	i = 0;
	if (ac != 2)
	{
		print_error(4);
		return (0);
	}
	len = ft_strlen(av[1]);
	if (len != MAP_SIZE * MAP_SIZE * 2 - 1)
	{
		print_error(4);
		return (0);
	}
	while (i < len)
	{
		if (av[1][i] && !is_correct_height(av[1][i]))
			return (0);
		i++;
		if (av[1][i] && !is_correct_delimeter(av[1][i]))
			return (0);
		i++;
	}
	return (1);
}
