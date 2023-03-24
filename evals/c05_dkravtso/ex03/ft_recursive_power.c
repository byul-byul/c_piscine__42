/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 13:04:00 by coder             #+#    #+#             */
/*   Updated: 2023/03/20 11:34:47 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	else if (power == 1)
		return (nb);
	else if (power < 0)
		return (0);
	return (nb * ft_recursive_power(nb, --power));
}

// #include <stdio.h>

// int main(){
// 	printf("%d\n", ft_recursive_power(2, -1));
// 	printf("%d\n", ft_recursive_power(2, 0));
// 	printf("%d\n", ft_recursive_power(2, 1));
// 	printf("%d\n", ft_recursive_power(2, 3));
// 	printf("%d\n", ft_recursive_power(0, 3));
// 	printf("%d\n", ft_recursive_power(1, 3));
// 	return (0);
// }
