/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgadzhil <@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 18:56:26 by kzhybul           #+#    #+#             */
/*   Updated: 2023/03/21 16:24:27 by bgadzhil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	*ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	src_length;
	unsigned int	dest_length;
	unsigned int	src_i;
	unsigned int	dest_i;

	src_length = ft_strlen(src);
	dest_length = ft_strlen(dest);
	src_i = 0;
	dest_i = dest_length;
	if (size == 0)
		return (src_length);
	while (*(src + src_i) != '\0')
	{
		*(dest + dest_i) = *(src + src_i);
		dest_i++;
		src_i++;
	}
	*(dest + dest_i) = '\0';
	if (dest_length > size)
		return (src_length + size);
	return (src_length + dest_length);
}

unsigned int	ft_strlen(char *str)
{
	unsigned int	counter;

	counter = 0;
	while (*(str + counter) != '\0')
		counter++;
	return (counter);
}

#include <stdio.h>
#include <bsd/string.h>
#include <stdlib.h>
int	main(int ac, char **av)
{
	ac += 0;
	printf("result of ft_strlcat() is:\t");
	printf("%d\n", ft_strlcat(av[1], av[2], atoi(av[5])));
	printf("result of strlcat() is:\t\t");
	printf("%zu\n", strlcat(av[3], av[4], atoi(av[5])));
	return (0);
}
