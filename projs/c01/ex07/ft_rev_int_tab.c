/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgadzhil <@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 07:04:12 by bgadzhil          #+#    #+#             */
/*   Updated: 2023/03/15 19:27:45 by bgadzhil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	a;
	int	i;
	int	j;

	i = 0;
	j = size - 1;
	while (i < (size / 2))
	{
		a = tab[i];
		tab[i] = tab[j];
		tab[j] = a;
		i++;
		j--;
	}
}

// #include <stdio.h>
// int	main(void)
// {
// 	int	tab[5];
// 	int	i;

// 	i = 0;
// 	while (i < 5)
// 	{
// 		tab[i] = i * 2 + 1;
// 		i++;
// 	}
// 	i = 0;
// 	printf("tab value before ft_rev_int_tab():\t");
// 	while (i < 5)
// 	{
// 		printf("%d ", tab[i]);
// 		i++;
// 	}
// 	printf("\n");
// 	ft_rev_int_tab(tab, 5);
// 	i = 0;
// 	printf("tab value after ft_rev_int_tab():\t");
// 	while (i < 5)
// 	{
// 		printf("%d ", tab[i]);
// 		i++;
// 	}
// 	printf("\n");
// }