/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbober < jbober@student.42wolfsburg.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 19:54:24 by jbober            #+#    #+#             */
/*   Updated: 2023/03/13 19:59:57 by jbober           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while ((src[j] != '\0') && (j < nb))
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>
int	main()
{
	char src[100] = " god";
	char dest[100] = "You bring me closer to";
	char src2[100] = " god";
	char dest2[100] = "You bring me closer to";
	int	size;

	size = 4;
	printf("%s\n", ft_strncat(dest, src, size));
	printf("%s\n", strncat(dest2, src2, size));
	printf()
}
*/