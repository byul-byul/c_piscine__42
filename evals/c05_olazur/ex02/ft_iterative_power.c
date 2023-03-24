/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olazur <olazur@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 18:39:09 by olazur            #+#    #+#             */
/*   Updated: 2023/03/16 19:03:49 by olazur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	res;

	if (power < 0)
	{
		return (0);
	}
	i = 1;
	res = 1;
	while (i <= power)
	{
		res = res * nb;
		i++;
	}
	return (res);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("%d", ft_iterative_power(12, 12));
// 	return (0);
// }
// // cc -Wall -Wextra -Werror ft_iterative_power.c