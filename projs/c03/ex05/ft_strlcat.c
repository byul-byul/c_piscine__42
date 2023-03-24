/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgadzhil <@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 09:35:51 by bgadzhil          #+#    #+#             */
/*   Updated: 2023/03/20 13:00:17 by bgadzhil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *s)
{
	unsigned int	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	res;
	unsigned int	dest_len;
	unsigned int	src_len;

	i = 0;
	res = 0;
	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (size > dest_len)
		res = src_len + dest_len;
	else
		res = src_len + size;
	while (src[i] && (dest_len + 1) < size)
	{
		dest[dest_len] = src[i];
		dest_len++;
		i++;
	}
	dest[dest_len] = '\0';
	return (res);
}

// #include <stdio.h>
// #include <bsd/string.h>
// #include <stdlib.h>
// int	main(int ac, char **av)
// {
// 	ac += 0;
// 	printf("result of ft_strlcat() is:\t");
// 	printf("%d\n", ft_strlcat(av[1], av[2], atoi(av[5])));
// 	printf("result of strlcat() is:\t\t");
// 	printf("%zu\n", strlcat(av[3], av[4], atoi(av[5])));
// 	return (0);
// }
// cc -Wall -Wextra -Werror ft_strlcat.c -lbsd