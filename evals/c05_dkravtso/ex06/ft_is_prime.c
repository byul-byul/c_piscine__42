/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 06:09:32 by coder             #+#    #+#             */
/*   Updated: 2023/03/20 11:32:08 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;
	int	prime;

	i = 2;
	prime = 1;
	if (nb <= 1)
		prime = 0;
	else
	{
		while (i <= nb / 2)
		{
			if (!(nb % i))
				prime = 0;
			i++;
		}
	}
	return (prime);
}

// #include <stdio.h>

// int main()
// {
// 	int i = -100;
// 	while(i < 100)
// 	{
// 		printf("%d %d\n", i, ft_is_prime(i));
// 		i++;
// 	}
// 	return (0);
// }