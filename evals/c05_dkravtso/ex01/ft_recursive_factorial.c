/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 12:52:46 by coder             #+#    #+#             */
/*   Updated: 2023/03/20 11:37:29 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb == 1 || !nb)
		return (1);
	else if (nb < 0)
		return (0);
	return (nb * ft_recursive_factorial(nb - 1));
}

// #include <stdio.h>

// int main() {
	// printf("%d %d\n", 5, ft_recursive_factorial(5));
	// printf("%d %d\n", 3, ft_recursive_factorial(3));
	// printf("%d %d\n", 2, ft_recursive_factorial(2));
	// printf("%d %d\n", 1, ft_recursive_factorial(1));
	// printf("%d %d\n", 0, ft_recursive_factorial(0));
	// printf("%d %d\n", -1, ft_recursive_factorial(-1));
	// printf("%d %d\n", -55, ft_recursive_factorial(-55));
// }