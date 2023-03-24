/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgadzhil <@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 20:38:29 by bgadzhil          #+#    #+#             */
/*   Updated: 2023/03/19 13:17:10 by bgadzhil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	is_space(int c)
{
	return ((c >= 9 && c <= 13) || c == 32);
}

int	is_digit(char c)
{
	return (c >= 48 && c <= 57);
}

int	is_printable(char c)
{
	return (c >= 32 && c <= 126);
}

int	is_only_digits(char *str)
{
	while (*str)
		if (!is_digit(*str++))
			return (0);
	return (1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
