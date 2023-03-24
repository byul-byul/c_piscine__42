/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekolosov <ekolosov@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 07:29:18 by ekolosov          #+#    #+#             */
/*   Updated: 2023/03/20 07:36:58 by ekolosov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdlib.h>

char	*ft_strcpy(char *dest, char *src);
int		ft_strlen(char *str);

char	*ft_strdup(char *src)
{
	int		len;
	char	*dup;

	if (src == NULL)
		return (NULL);
	len = ft_strlen(src);
	dup = (char *)malloc(sizeof(char) * (len + 1));
	if (dup == NULL)
		return (NULL);
	dup = ft_strcpy(dup, src);
	return (dup);
}

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (str[length])
		length++;
	return (length);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i++])
		dest[i] = src[i];
	return (dest);
}
