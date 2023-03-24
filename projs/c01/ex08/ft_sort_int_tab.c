/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgadzhil <@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 07:11:33 by bgadzhil          #+#    #+#             */
/*   Updated: 2023/03/15 19:27:41 by bgadzhil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	a;
	int	i;

	i = 0;
	while (i < (size - 1))
	{
		if (tab[i] > tab[i + 1])
		{
			a = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = a;
			i = 0;
		}
		else
			i++;
	}
}

// #include <stdio.h>
// int	main(void)
// {
// 	int	tab[5] = {7, 5, 8, 2, 9};
// 	int	i;

// 	i = 0;
// 	printf("tab value before ft_sort_int_tab():\t");
// 	while (i < 5)
// 	{
// 		printf("%d ", tab[i]);
// 		i++;
// 	}
// 	printf("\n");
// 	ft_sort_int_tab(tab, 5);
// 	i = 0;
// 	printf("tab value after ft_sort_int_tab():\t");
// 	while (i < 5)
// 	{
// 		printf("%d ", tab[i]);
// 		i++;
// 	}
// 	printf("\n");
// }