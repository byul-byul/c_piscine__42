/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgadzhil <@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 09:19:42 by bgadzhil          #+#    #+#             */
/*   Updated: 2023/03/07 09:55:03 by bgadzhil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	len;

	i = -1;
	len = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *)malloc(sizeof(int) * len);
	if (*range)
	{
		while ((min + ++i) != max)
			(*range)[i] = min + i;
		return (len);
	}
	return (-1);
}

// #include <stdio.h>
// int	main(int ac, char **av)
// {
// 	int	i = -1;
// 	int	min = atoi(av[1]);
// 	int	max = atoi(av[2]);
// 	int	*tab;
// 	int	len = ft_ultimate_range(&tab, min, max);

// 	ac += 0;
// 	printf("res of ft_ultimate_range(%d, %d) is:\n", min, max);
// 	if (tab)
// 		while (++i < len)
// 			printf("%d ", tab[i]);
// 	printf("\nlen = %d\n", len);
// 	return (0);
// }
