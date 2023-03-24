/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgadzhil <@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 11:38:11 by bgadzhil          #+#    #+#             */
/*   Updated: 2023/03/22 16:05:28 by bgadzhil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

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

static char	*ft_strdup(char *src)
{
	int		len;
	char	*res;

	len = ft_strlen(src);
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (src && res)
		ft_strcpy(res, src);
	return (res);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*res;
	int					i;

	i = 0;
	res = (struct s_stock_str *)malloc(sizeof(struct s_stock_str) * (ac + 1));
	if (res)
	{
		while (i < ac)
		{
			res[i].size = ft_strlen(av[i]);
			res[i].str = av[i];
			res[i].copy = ft_strdup(av[i]);
			i++;
		}
		res[i].size = -1;
		res[i].str = 0;
		res[i].copy = NULL;
		return (res);
	}
	return (NULL);
}

// #include <stdio.h>
// struct s_stock_str	*ft_strs_to_tab(int ac, char **av);
// int	main(int ac, char **av)
// {
// 	t_stock_str *arr;
// 	int	i = -1;

// 	arr = ft_strs_to_tab(ac, av);
// 	while (++i < ac)
// 	{
// 		printf("element_No %d:\tsize = %d,\t", i + 1, arr[i].size);
// 		printf("str = |%s|,\tcopy = |%s|\n", arr[i].str, arr[i].copy);
// 	}
// 	return (0);
// }
