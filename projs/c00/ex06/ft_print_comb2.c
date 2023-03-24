/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgadzhil <@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 19:45:04 by bgadzhil          #+#    #+#             */
/*   Updated: 2023/03/13 16:53:43 by bgadzhil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_int(int num)
{
	char	tmp;

	tmp = num / 10 + 48;
	write(1, &tmp, 1);
	tmp = num % 10 + 48;
	write(1, &tmp, 1);
}

void	ft_ptint_comb_part(int n, int m)
{
	ft_print_int(n);
	write(1, " ", 1);
	ft_print_int(m);
	if (n == 98 && m == 99)
		return ;
	else
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	b = 1;
	while (a <= 98)
	{
		while (b <= 99)
		{
			ft_ptint_comb_part(a, b);
			b++;
		}
		a++;
		b = a + 1;
	}
}

// int	main(void)
// {
// 	ft_print_comb2();
// 	write(1, "\n", 1);
// 	return (0);
// }