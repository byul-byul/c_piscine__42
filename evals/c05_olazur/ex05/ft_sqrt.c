/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olazur <olazur@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 12:08:26 by olazur            #+#    #+#             */
/*   Updated: 2023/03/21 16:43:42 by olazur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 2;
	if (nb == 1)
		return (1);
	while (i < nb / (i - 1))
	{
		if (i * i == nb)
		{
			return (i);
		}
		i++;
	}
	return (0);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("%d", ft_sqrt(2147302922));
// 	return (0);
// }
// // cc -Wall -Wextra -Werror ft_sqrt.c