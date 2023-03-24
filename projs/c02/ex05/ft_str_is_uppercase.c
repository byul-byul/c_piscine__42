/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgadzhil <@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 05:13:16 by bgadzhil          #+#    #+#             */
/*   Updated: 2023/03/15 19:48:51 by bgadzhil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_is_uppercase(char c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}

int	ft_str_is_uppercase(char *str)
{
	while (*str)
	{
		if (!ft_is_uppercase(*str))
			return (0);
		str++;
	}
	return (1);
}

// #include <stdio.h>
// int	main(int ac, char **av)
// {
// 	ac += 0;
// 	printf("res of ft_str_is_uppercase() is: ");
// 	printf("%s\n", ft_str_is_uppercase(av[1]) ? "true" : "false");
// 	return(0);
// }