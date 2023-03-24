/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 14:10:20 by coder             #+#    #+#             */
/*   Updated: 2023/03/20 11:38:33 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	res;

	if (nb == 1 || !nb)
		return (1);
	else if (nb < 0)
		return (0);
	i = 2;
	res = 1;
	while (i <= nb)
	{
		res = res * i;
		i++;
	}
	return (res);
}

// #include <stdio.h>

// int main() {
// 	printf("%d %d\n", 5, ft_iterative_factorial(5));
// 	printf("%d %d\n", 3, ft_iterative_factorial(3));
// 	printf("%d %d\n", 2, ft_iterative_factorial(2));
// 	printf("%d %d\n", 1, ft_iterative_factorial(1));
// 	printf("%d %d\n", 0, ft_iterative_factorial(0));
// 	printf("%d %d\n", -1, ft_iterative_factorial(-1));
// 	printf("%d %d\n", -55, ft_iterative_factorial(-55));
// }