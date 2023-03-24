/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgadzhil <@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 15:41:49 by bgadzhil          #+#    #+#             */
/*   Updated: 2023/03/15 19:33:25 by bgadzhil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int	main(int ac, char **av)
// {
// 	ac += 0;
// 	printf("result of ft_strncpy() is:\t");
// 	printf("%s\n", ft_strncpy(av[1], av[2], atoi(av[5])));
// 	printf("result of strncpy() is:\t\t");
// 	printf("%s\n", strncpy(av[3], av[4], atoi(av[5])));
// 	return (0);
// }