/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgadzhil <@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 05:11:15 by bgadzhil          #+#    #+#             */
/*   Updated: 2023/03/15 19:48:14 by bgadzhil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_is_lowercase(char c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}

int	ft_str_is_lowercase(char *str)
{
	while (*str)
	{
		if (!ft_is_lowercase(*str))
			return (0);
		str++;
	}
	return (1);
}

// #include <stdio.h>
// int	main(int ac, char **av)
// {
// 	ac += 0;
// 	printf("res of ft_str_is_lowercase() is: ");
// 	printf("%s\n", ft_str_is_lowercase(av[1]) ? "true" : "false");
// 	return(0);
// }