/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgadzhil <@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 11:26:50 by bgadzhil          #+#    #+#             */
/*   Updated: 2023/03/15 19:43:55 by bgadzhil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len;

	i = 0;
	len = ft_strlen(src);
	if (size > 0)
	{
		while (src[i] && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (len);
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <bsd/string.h>
// int	main(int ac, char **av)
// {
// 	ac += 0;
// 	printf("result of ft_strlcpy() is:\t");
// 	printf("%d\n", ft_strlcpy(av[1], av[2], atoi(av[5])));
// 	printf("result of strlcpy() is:\t\t");
// 	printf("%zu\n", strlcpy(av[3], av[4], atoi(av[5])));
// 	return (0);
// }

// cc -Wall -Wextra -Werror ft_strlcpy.c -lbsd
