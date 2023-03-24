/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoustar <rmoustar@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 20:48:33 by bgadzhil          #+#    #+#             */
/*   Updated: 2023/03/05 22:15:04 by rmoustar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush(int x, int y);

static int	ft_atoi(char *str)
{
	int	res;
	int	sign;

	sign = 1;
	res = 0;
	while (*str && ((*str >= 9 && *str <= 13) || *str == 32))
		str++;
	if (*str == '-')
		sign = -1;
	while (*str == '-' || *str == '+')
		str++;
	while (*str >= 48 && *str <= 57)
	{
		res = res * 10 + (*str - '0');
		str++;
	}
	return (sign * res);
}

int	main(int ac, char **av)
{
	int	x;
	int	y;

	if (ac != 3)
	{
		x = 5;
		y = 5;
	}
	else
	{
		x = ft_atoi(av[1]);
		y = ft_atoi(av[2]);
	}
	ac += 0;
	rush(x, y);
	return (0);
}
