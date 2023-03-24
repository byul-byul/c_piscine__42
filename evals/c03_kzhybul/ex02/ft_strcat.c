/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgadzhil <@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 18:56:26 by kzhybul           #+#    #+#             */
/*   Updated: 2023/03/21 16:20:55 by bgadzhil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	counter_src;
	int	counter_dest;

	counter_src = 0;
	counter_dest = 0;
	while (*(dest + counter_dest) != '\0')
	{
		counter_dest++;
	}
	while (*(src + counter_src) != '\0')
	{
		*(dest + counter_dest) = *(src + counter_src);
		counter_src++;
		counter_dest++;
	}
	*(dest + counter_dest) = '\0';
	return (dest);
}

#include <stdio.h>
#include <string.h>
int	main(int ac, char **av)
{
	ac += 0;
	printf("result of ft_strcat() is:\t");
	printf("%s\n", ft_strcat(av[1], av[2]));
	printf("result of strcat() is:\t\t");
	printf("%s\n", strcat(av[3], av[4]));
	return (0);
}