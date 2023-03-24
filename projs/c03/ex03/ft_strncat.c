/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgadzhil <@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 19:12:46 by bgadzhil          #+#    #+#             */
/*   Updated: 2023/03/20 13:00:22 by bgadzhil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j] && j < nb)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
// int	main(int ac, char **av)
// {
// 	ac += 0;
// 	printf("result of ft_strncat() is:\t");
// 	printf("%s\n", ft_strncat(av[1], av[2], atoi(av[5])));
// 	printf("result of strncat() is:\t\t");
// 	printf("%s\n", strncat(av[3], av[4], atoi(av[5])));
// 	return (0);
// }