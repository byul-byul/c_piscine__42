/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgadzhil <@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 05:08:34 by bgadzhil          #+#    #+#             */
/*   Updated: 2023/03/15 19:47:17 by bgadzhil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_is_numeric(char c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}

int	ft_str_is_numeric(char *str)
{
	while (*str)
	{
		if (!ft_is_numeric(*str))
			return (0);
		str++;
	}
	return (1);
}

// #include <stdio.h>
// int	main(int ac, char **av)
// {
// 	ac += 0;
// 	printf("res of ft_str_is_numeric() is: ");
// 	printf("%s\n", ft_str_is_numeric(av[1]) ? "true" : "false");
// 	return(0);
// }