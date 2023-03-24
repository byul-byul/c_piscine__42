/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkozlova <vkozlova@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 10:46:44 by vkozlova          #+#    #+#             */
/*   Updated: 2023/03/21 15:58:32 by vkozlova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	i;

	i = 0;
	array = malloc(sizeof(int) * (max - min + 1));
	if (min >= max || array == NULL)
		return (NULL);
	while (min < max)
	{
		array[i] = min;
		i++;
		min++;
	}
	array[i] = '\0';
	return (array);
}

// #include <stdio.h>
// int main()
// {
// 	int *array = ft_range(-5, -5);
// 	while (*array)
// 	{
// 		printf("%d\n", *array);
// 		array++;
// 	}
// 	if (*array == 0)
// 	{
// 		printf("%d\n", 0);
// 		array++;
// 	}
// 	while (*array)
// 	{
// 		printf("%d\n", *array);
// 		array++;
// 	}
// }