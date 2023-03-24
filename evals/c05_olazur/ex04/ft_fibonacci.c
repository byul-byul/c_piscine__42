/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgadzhil <@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 19:16:21 by olazur            #+#    #+#             */
/*   Updated: 2023/03/21 17:34:55 by bgadzhil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index == 1)
		return (0);
	if (index == 2)
		return (1);
	while (index >= 2)
	{
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	}
	return (-1);
}

#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_fibonacci(5));
	return (0);
}
