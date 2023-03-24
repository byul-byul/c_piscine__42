/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgadzhil <@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 08:59:59 by bgadzhil          #+#    #+#             */
/*   Updated: 2023/03/07 09:13:11 by bgadzhil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	ft_strlen(char *s)
{
	int	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}

static void	ft_strcpy(char *dst, char *src)
{
	int	i;
	int	len;

	i = -1;
	len = ft_strlen(src);
	while (++i < len)
		dst[i] = src[i];
	dst[i] = '\0';
}

char	*ft_strdup(char *src)
{
	int		len;
	char	*res;

	len = ft_strlen(src);
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (src && res)
		ft_strcpy(res, src);
	return (res);
}

// #include <stdio.h>
// int	main(int ac, char **av)
// {
// 	ac += 0;
// 	printf("value of arg is:\t|%s|\n", av[1]);
// 	printf("res of ft_strdup() is:\t|%s|\n", ft_strdup(av[1]));
// 	return (0);
// }
