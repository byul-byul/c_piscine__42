/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olazur <olazur@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 18:55:15 by olazur            #+#    #+#             */
/*   Updated: 2023/03/16 19:14:47 by olazur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
	{
		return (0);
	}
	else if (power == 0)
	{
		return (1);
	}
	else
	{
		power--;
		return (ft_recursive_power(nb, power) * nb);
	}
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("%d", ft_recursive_power(100, 0));
// 	return (0);
// }
// // cc -Wall -Wextra -Werror ft_recursive_power.c