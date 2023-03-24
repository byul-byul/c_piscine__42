/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgadzhil <@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 05:15:09 by bgadzhil          #+#    #+#             */
/*   Updated: 2023/03/15 19:49:34 by bgadzhil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_is_printable(char c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

int	ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (!ft_is_printable(*str))
			return (0);
		str++;
	}
	return (1);
}

// #include <stdio.h>
// int	main()
// {
// 	printf("res of ft_str_is_printable() is: ");
// 	printf("%s\n", ft_str_is_printable("\a") ? "true" : "false");
// 	return(0);
// }