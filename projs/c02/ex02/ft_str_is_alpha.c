/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgadzhil <@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 17:07:56 by bgadzhil          #+#    #+#             */
/*   Updated: 2023/03/15 19:46:24 by bgadzhil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_is_alpha(char c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}

int	ft_str_is_alpha(char *str)
{
	while (*str)
	{
		if (!ft_is_alpha(*str))
			return (0);
		str++;
	}
	return (1);
}

// #include <stdio.h>
// int	main(int ac, char **av)
// {
// 	ac += 0;
// 	printf("res of ft_str_is_alpha() is: ");
// 	printf("%s\n", ft_str_is_alpha(av[1]) ? "true" : "false");
// 	return(0);
// }