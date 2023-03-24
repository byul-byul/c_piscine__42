/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 14:18:52 by coder             #+#    #+#             */
/*   Updated: 2023/03/20 11:35:41 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	nnb;

	if (power < 0)
		return (0);
	else if (!power)
		return (1);
	else
	{
		i = 1;
		nnb = nb;
		while (i < power)
		{
			nnb = nnb * nb;
			i++;
		}
		return (nnb);
	}
}

// #include <stdio.h>

// int main(){
// 	printf("%d\n", ft_iterative_power(2, -1));
// 	printf("%d\n", ft_iterative_power(2, 0));
// 	printf("%d\n", ft_iterative_power(2, 1));
// 	printf("%d\n", ft_iterative_power(2, 3));
// 	printf("%d\n", ft_iterative_power(0, 3));
// 	printf("%d\n", ft_iterative_power(1, 3));
// 	return (0);
// }
