/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgadzhil <@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 08:43:25 by bgadzhil          #+#    #+#             */
/*   Updated: 2023/03/15 19:42:04 by bgadzhil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_is_alphanumeric(char c)
{
	if ((c >= 48 && c <= 57) || (c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}

static char	*ft_strlowcase(char *str)
{
	char	*tmp;

	tmp = str;
	while (*tmp)
	{
		if (*tmp >= 65 && *tmp <= 90)
			*tmp += 32;
		tmp++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	char	*tmp;

	tmp = ft_strlowcase(str);
	if (*tmp >= 97 && *tmp <= 122)
		*tmp -= 32;
	tmp++;
	while (*tmp)
	{
		if (!ft_is_alphanumeric(*(tmp - 1)) && (*tmp >= 97 && *tmp <= 122))
			*tmp -= 32;
		tmp++;
	}
	return (str);
}

// #include <stdio.h>
// int	main(int ac, char **av)
// {
// 	ac += 0;
// 	printf("argument value is:\t\t%s\n", av[1]);
// 	printf("res of ft_strcapitalize() is:\t%s\n", ft_strcapitalize(av[1]));
// 	return(0);
// }