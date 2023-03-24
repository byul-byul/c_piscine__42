/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olazur <olazur@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 14:20:15 by olazur            #+#    #+#             */
/*   Updated: 2023/03/21 16:57:04 by olazur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
	{
		return (0);
	}
	if (nb == 2)
	{
		return (1);
	}
	i = 2;
	while (i <= nb / (i - 1))
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (ft_is_prime(nb))
	{
		return (nb);
	}
	else
	{
		return (ft_find_next_prime(nb + 1));
	}
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("%d", ft_find_next_prime(2147302921));
// 	return (0);
// }
// // cc -Wall -Wextra -Werror ft_find_next_prime.c