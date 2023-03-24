/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkozlova <vkozlova@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 20:54:19 by vkozlova          #+#    #+#             */
/*   Updated: 2023/03/21 15:58:21 by vkozlova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*array;
	int	i;

	i = 0;
	array = malloc(sizeof(int) * (max - min + 1));
	if (max <= min || array == NULL)
	{
		range = NULL;
		return (0);
	}
	if (range == NULL)
		return (-1);
	while (min < max)
	{
		array[i] = min;
		i++;
		min++;
	}
	array[i] = '\0';
	*range = array;
	return (i);
}

// #include <stdio.h>
// int main()
// {
//     int **range;
//     int *ptr;
// 	int *array;
// 	range = &array;
// 	printf("%s", "range is ");
//     printf("%d\n", ft_ultimate_range(range, 1, 10));
// 	ptr = *range;
// 	while (*ptr)
// 	{
// 		printf("%d\n", *ptr);
// 		ptr++;
// 	}
// }