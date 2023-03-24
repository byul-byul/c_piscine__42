/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgadzhil <@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 08:41:25 by bgadzhil          #+#    #+#             */
/*   Updated: 2023/03/15 19:40:30 by bgadzhil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_is_uppercase(char c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}

char	*ft_strlowcase(char *str)
{
	char	*tmp;

	tmp = str;
	while (*tmp)
	{
		if (ft_is_uppercase(*tmp))
			*tmp += 32;
		tmp++;
	}
	return (str);
}

// #include <stdio.h>
// int	main(int ac, char **av)
// {
// 	ac += 0;
// 	printf("argument value is:\t\t%s\n", av[1]);
// 	printf("res of ft_strlowcase() is:\t%s\n", ft_strlowcase(av[1]));
// 	return(0);
// }