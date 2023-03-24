/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekolosov <ekolosov@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 07:38:26 by ekolosov          #+#    #+#             */
/*   Updated: 2023/03/21 12:48:00 by ekolosov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdlib.h>
//#include	<stdio.h>

int	*ft_range(int min, int max)
{
	int	len;
	int	sign;
	int	*array;
	int	i;

	if (min >= max)
		return (NULL);
	len = max - min;
	if (len < 0)
	{
		sign = -1;
		len *= sign;
	}
	else
		sign = 1;
	array = (int *)malloc(sizeof(int) * len);
	if (array == NULL)
		return (NULL);
	i = 0;
	array[i] = min;
	while (++i < len)
		array[i] = array[i - 1] + sign;
	return (array);
}

/*
int	main(void)
{
	int *array = ft_range(-4, 2);
	int i = 0;
	if (array == NULL)
		printf("NULL\n");
	else
		while (i < 6)
			printf("%d ", array[i++]);
}
*/