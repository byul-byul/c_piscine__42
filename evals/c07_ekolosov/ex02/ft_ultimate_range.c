/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekolosov <ekolosov@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 07:44:35 by ekolosov          #+#    #+#             */
/*   Updated: 2023/03/21 12:57:43 by ekolosov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdlib.h>
//#include	<stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	len;
	int	sign;
	int	*array;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	sign = 1;
	len = max - min;
	if (len < 0)
		sign = -1;
	len *= sign;
	array = (int *)malloc(sizeof(int) * len);
	if (array == NULL)
		return (-1);
	i = 0;
	array[i] = min;
	while (++i < len)
		array[i] = array[i - 1] + 1;
	*range = array;
	return (len);
}

/*
int	main(void)
{
	int *array;
	int	len;
	int i = 0;

	len = ft_ultimate_range(&array, 3, 12);
	printf("Size: %d\n", len);
	if (array == NULL)
		printf("NULL");
	else
	{
		printf("Array:");
		while (i < len)
			printf(" %d", array[i++]);	
	}
	printf("\n");
	free(array);
}
*/