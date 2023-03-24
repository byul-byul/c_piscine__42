/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbober < jbober@student.42wolfsburg.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 19:12:05 by jbober            #+#    #+#             */
/*   Updated: 2023/03/13 20:00:03 by jbober           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
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
	printf("%s\n", ft_strcat(dest, src));
	printf("%s\n", strcat(dest2, src2));
}
*/