/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgadzhil <@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 18:36:24 by bgadzhil          #+#    #+#             */
/*   Updated: 2023/03/20 13:00:24 by bgadzhil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

// #include <stdio.h>
// #include <string.h>
// int	main(int ac, char **av)
// {
// 	ac += 0;
// 	printf("result of ft_strcat() is:\t");
// 	printf("%s\n", ft_strcat(av[1], av[2]));
// 	printf("result of strcat() is:\t\t");
// 	printf("%s\n", strcat(av[3], av[4]));
// 	return (0);
// }