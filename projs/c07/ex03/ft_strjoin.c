/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgadzhil <@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 09:55:15 by bgadzhil          #+#    #+#             */
/*   Updated: 2023/03/07 13:08:33 by bgadzhil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	ft_strcpy(char *str1, char *str2)
{
	int	i;

	i = -1;
	while (str2[++i])
		str1[i] = str2[i];
	return (i);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*res;
	int		i;
	int		len;

	i = -1;
	len = 0;
	if (size == 0)
		return ((char *)malloc(0));
	res = (char *)malloc(sizeof(strs) + sizeof(sep) * (size - 1) + 1);
	if (res)
	{
		while (++i < size)
		{
			len += ft_strcpy(res + len, strs[i]);
			if (i < size - 1)
				len += ft_strcpy(res + len, sep);
		}
		*(res + len) = '\0';
	}
	return (res);
}

// #include <stdio.h>
// int	main(int ac, char **av)
// {
// 	printf("res of ft_strjoin() is:\n");
// 	printf("%s\n", ft_strjoin(ac - 2, av + 1, av[ac - 1]));
// 	return (0);
// }
