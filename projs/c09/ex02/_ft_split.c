/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgadzhil <@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 21:02:26 by bgadzhil          #+#    #+#             */
/*   Updated: 2023/03/23 09:02:59 by bgadzhil         ###   ########.fr       */
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

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (!to_find[0])
		return (str);
	while (str[i])
	{
		j = 0;
		while (str[i + j] == to_find[j] && str[i + j])
		{
			if (!to_find[j + 1])
				return (&str[i]);
			j++;
		}
		i++;
	}
	return (0);
}

int	ft_split(char *str, char *charset)
{
	int		cnt;
	char	*tmp;

	cnt = 0;
	if (!str || !charset)
		return (0);
	while (*str)
	{
		tmp = ft_strstr(str, charset);
		if (tmp)
		{
			cnt++;
			str = tmp + ft_strlen(charset) - 1;
		}
		str++;
	}
	return (cnt);
}

#include <stdio.h>
int	main(int ac, char **av)
{
	printf("%d\n", ft_split(av[1], av[2]));
	ac += 0;
	return (0);
}