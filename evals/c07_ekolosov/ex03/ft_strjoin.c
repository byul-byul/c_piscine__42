/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekolosov <ekolosov@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 08:04:05 by ekolosov          #+#    #+#             */
/*   Updated: 2023/03/21 13:07:16 by ekolosov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdlib.h>
//#include	<stdio.h>

int		ft_strlen(char *str);
char	*ft_strcat(char *dest, char *src);

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*join;
	int		len;
	int		i;

	i = -1;
	len = 0;
	while (++i < size)
		len += ft_strlen(strs[i]);
	len += 1 + (size - 1) * ft_strlen(sep);
	printf("Length: %d\n", len);
	join = (char *)malloc(sizeof(char) * len);
	if (join == NULL)
		return (NULL);
	while (i)
	{
		join = ft_strcat(join, strs[size - i]);
		i--;
		if (i)
			join = ft_strcat(join, sep);
	}
	join[len - 1] = '\0';
	return (join);
}

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (str[length])
		length++;
	return (length);
}

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	dest_len;
	unsigned int	i;

	dest_len = ft_strlen(dest);
	i = -1;
	while (src[++i])
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';
	return (dest);
}

/*
int	main(void)
{
	char s1[] = "Somebody";
	char s2[] = "once";
	char s3[] = "told";
	char s4[] = "me";
	char *s[4];
	s[0] = s1;
	s[1] = s2;
	s[2] = s3;
	s[3] = s4;
	char *joined = ft_strjoin(2, s, " ");
	printf("%s\n", joined);
	free(joined);
}*/