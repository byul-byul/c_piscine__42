/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgadzhil <@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 13:41:57 by bgadzhil          #+#    #+#             */
/*   Updated: 2023/03/15 19:42:24 by bgadzhil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = -1;
	while (src[++i])
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int	main(int ac, char **av)
// {
// 	ac += 0;
// 	printf("result of ft_strcpy() is:\t");
// 	printf("%s\n", ft_strcpy(av[1], av[2]));
// 	printf("result of strcpy() is:\t\t");
// 	printf("%s\n", strcpy(av[3], av[4]));
// 	return (0);
// }