/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgadzhil <@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 09:13:40 by bgadzhil          #+#    #+#             */
/*   Updated: 2023/03/07 09:18:25 by bgadzhil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	len;
	int	*tab;

	i = -1;
	len = max - min;
	if (min >= max)
		return (NULL);
	tab = (int *)malloc(sizeof(int) * len);
	if (tab)
		while ((min + ++i) != max)
			tab[i] = min + i;
	return (tab);
}

// #include <stdio.h>
// int	main(int ac, char **av)
// {
// 	int	i = -1;
// 	int	min = atoi(av[1]);
// 	int	max = atoi(av[2]);
// 	int	*tab = ft_range(min, max);
// 	int	len = max - min;

// 	ac += 0;
// 	printf("res of ft_range(%d, %d) is:\n", min, max);
// 	if (tab)
// 	{
// 		while (++i < len)
// 			printf("%d ", tab[i]);
// 		printf("\n");
// 	}
// 	return (0);
// }
