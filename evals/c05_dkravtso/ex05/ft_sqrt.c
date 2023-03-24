/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 05:55:15 by coder             #+#    #+#             */
/*   Updated: 2023/03/22 07:14:58 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb == 0)
		return (0);
	while (nb > i * i)
		i++;
	if (nb == i * i)
		return (i);
	else
		return (0);
}

// #include <stdio.h>

// int main() {
// 	printf("%d %d\n", 16, ft_sqrt(16));
// 	printf("%d %d\n", 64, ft_sqrt(64));
// 	printf("%d %d\n", 12, ft_sqrt(12));
// 	printf("%d %d\n", 4, ft_sqrt(4));
// 	printf("%d %d\n", 2, ft_sqrt(2));
// 	printf("%d %d\n", -16, ft_sqrt(-16));
// 	printf("%d %d\n", -32, ft_sqrt(-32));
// 	printf("%d %d\n", -4, ft_sqrt(-4));
// }