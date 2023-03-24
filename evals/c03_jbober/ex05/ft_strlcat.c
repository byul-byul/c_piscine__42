/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbober < jbober@student.42wolfsburg.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 13:08:36 by jbober            #+#    #+#             */
/*   Updated: 2023/03/14 10:23:32 by jbober           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_messen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	ldes;
	unsigned int	lsrc;

	ldes = ft_messen(dest);
	lsrc = ft_messen(src);
	i = 0;
	j = 0;
	if (size == 0)
		return (lsrc + size);
	while ((dest[i] != '\0') && (i < size))
		i++;
	while ((src[j] != '\0') && (ldes + j < size - 1))
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	if (size < ldes)
		return (size + lsrc);
	else
		return (ldes + lsrc);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	x[100] = "Dirty deeds done";// 16
	char	y[100] = "dirt cheap for like 35$"; // 23 -> 39
	char	a[100] = "Dirty deeds done";// 16
	char	b[100] = "dirt cheap for like 35$"; // 23 -> 39	
	int		s;

	s = 41;
	strlcat(x, y, s);
	ft_strlcat(a, b, s);
	printf("%s\n", x);
	printf("%s\n", a);
	printf("%lu\t", strlcat(x, y, s));
	printf("%i\n", ft_strlcat(a, b, s));
}
*/