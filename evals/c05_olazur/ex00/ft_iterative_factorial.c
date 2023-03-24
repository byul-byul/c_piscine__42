/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olazur <olazur@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 14:56:11 by olazur            #+#    #+#             */
/*   Updated: 2023/03/16 16:29:45 by olazur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	res;

	res = 1;
	if (nb < 0 || nb > 12)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	while (nb > 0)
	{
		res = res * nb;
		nb = nb - 1;
	}
	return (res);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("%d", ft_iterative_factorial(2));
// 	return(0);
// }
// //cc -Wall -Wextra -Werror ft_iterative_factorial.c