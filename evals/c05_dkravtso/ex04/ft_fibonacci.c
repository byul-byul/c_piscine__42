/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 14:28:37 by coder             #+#    #+#             */
/*   Updated: 2023/03/20 11:34:08 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	i;

	i = 1;
	if (index < 0)
		return (-1);
	else if (!index)
		return (0);
	else if (index == 1)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

// #include <stdio.h>

// int main(){
// 	printf("%d %d\n", -2, ft_fibonacci(-2));
// 	printf("%d %d\n", -1, ft_fibonacci(-1));
// 	printf("%d %d\n", 0, ft_fibonacci(0));
// 	printf("%d %d\n", 1, ft_fibonacci(1));
// 	printf("%d %d\n", 2, ft_fibonacci(2));
// 	printf("%d %d\n", 3, ft_fibonacci(3));
// 	printf("%d %d\n", 5, ft_fibonacci(5));
// 	printf("%d %d\n", 6, ft_fibonacci(6));
// 	printf("%d %d\n", 7, ft_fibonacci(7));
// }
