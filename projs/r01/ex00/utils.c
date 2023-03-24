/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgadzhil <@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 20:25:22 by bgadzhil          #+#    #+#             */
/*   Updated: 2023/03/11 17:14:06 by bgadzhil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int	ft_strlen(char *s)
{
	int	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}

void	ft_putstr(char *err_msg)
{
	write(1, err_msg, ft_strlen(err_msg));
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_error(int err)
{
	if (err == 0)
		ft_putstr(ERR_NO_0);
	else if (err == 1)
		ft_putstr(ERR_NO_1);
	else if (err == 2)
		ft_putstr(ERR_NO_2);
	else if (err == 3)
		ft_putstr(ERR_NO_3);
	else
		ft_putstr(ERR_NO_4);
}

// int	ft_atoi(char *str)
// {
// 	int	res;
// 	int	sign;

// 	sign = 1;
// 	res = 0;
// 	while (*str && ((*str >= 9 && *str <= 13) || *str == 32))
// 		str++;
// 	if (*str == '-')
// 		sign = -1;
// 	while (*str == '-' || *str == '+')
// 		str++;
// 	while (*str >= 48 && *str <= 57)
// 	{
// 		res = res * 10 + (*str - '0');
// 		str++;
// 	}
// 	return (sign * res);
// }
