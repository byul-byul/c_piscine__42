/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgadzhil <@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 00:54:41 by coder             #+#    #+#             */
/*   Updated: 2023/03/13 19:00:41 by bgadzhil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	x;
	int	y;
	int	res;

	x = 0;
	y = 1;
	res = 0;
	while ((str[x] >= '\t' && str[x] <= '\r') || str[x] == ' ')
	x++;
	while (str[x] == '+' || str[x] == '-')
	{
		if (str[x] == '-')
		y *= -1;
		x++;
	}
	while (str[x] >= '0' && str[x] <= '9')
	{
		res = (str[x] - '0') + (res * 10);
		x++;
	}
	return (res * y);
}

#include <stdio.h>

int main(void)
{
	char string[] = "   a   +47898";
	int result;

	result = ft_atoi(string);
	printf("%d\n", result);
	return (0);
}
