/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 06:24:38 by coder             #+#    #+#             */
/*   Updated: 2023/03/21 12:56:12 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;
	int	prime;

	i = 2;
	prime = 1;
	while (i <= (nb / 2))
	{
		if (!(nb % i))
			prime = 0;
		i++;
	}
	if (nb <= 1)
		prime = 0;
	if (prime)
		prime = nb;
	return (prime);
}

int	ft_find_next_prime(int nb)
{
	int	half;
	int	n;

	if (nb <= 2)
		return (2);
	else if (!(nb % 2))
		nb++;
	n = 3;
	half = nb / 2;
	while (n <= half)
	{
		if (nb % n == 0 || nb % half == 0)
			return (ft_find_next_prime(nb + 1));
		n += 2;
		half -= 2;
	}
	return (nb);
}

// #include <stdio.h>

// int main()
// {
// 	int i = -100;
// 	while(i < 100)
// 	{
// 		printf("%d %d\n", i, ft_find_next_prime(i));
// 		i++;
// 	}
// 	printf("%d %d\n", 2147483640, ft_find_next_prime(2147483640));
// 	printf("%d %d\n", 2147483647, ft_find_next_prime(2147483647));
// 	return (0);
// }