/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olazur <olazur@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 15:19:42 by olazur            #+#    #+#             */
/*   Updated: 2023/03/21 16:20:49 by olazur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	return (ft_recursive_factorial(nb - 1) * nb);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("%d", ft_recursive_factorial(3));
// 	return(0);
// }
// //cc -Wall -Wextra -Werror ft_recursive_factorial.c