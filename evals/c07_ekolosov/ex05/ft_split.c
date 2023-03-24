/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekolosov <ekolosov@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 20:02:07 by ekolosov          #+#    #+#             */
/*   Updated: 2023/03/22 08:10:51 by ekolosov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdlib.h>
//#include	<stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);
int		split_strings(char *str, char *charset, char **split);
int		match(char c, char *charset);
int		alloc_and_write(char **split, char *str, int count, int len);

char	**ft_split(char *str, char *charset)
{
	char	**split;
	int		count;
	int		i;

	count = split_strings(str, charset, NULL);
	if (!count)
		return (NULL);
	split = (char **)malloc(sizeof(char *) * (count + 1));
	if (split == NULL)
		return (NULL);
	i = 0;
	while (i <= count)
		split[i++] = NULL;
	i = 0;
	if (split_strings(str, charset, split) == -1)
	{
		while (i < count && split[i] != NULL)
			free(split[i++]);
		free(split);
		return (NULL);
	}
	return (split);
}

int	split_strings(char *str, char *charset, char **split)
{
	int		count;
	char	*tmp;

	count = 0;
	while (match(*str, charset))
		str++;
	tmp = str;
	while (*str || *tmp)
	{
		if (!match(*tmp, charset) && *str && *tmp)
			tmp++;
		else
		{
			if (split != NULL)
				if (alloc_and_write(split, str, count, tmp - str))
					return (-1);
			while (match(*tmp, charset))
				tmp++;
			str = tmp;
			count++;
		}
	}
	return (count);
}

int	alloc_and_write(char **split, char *str, int count, int len)
{
	split[count] = (char *)malloc(sizeof(char) * (len + 1));
	if (split[count] == NULL)
		return (1);
	ft_strncpy(split[count], str, len);
	return (0);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	match(char c, char *charset)
{
	while (*charset)
		if (c == *charset++)
			return (1);
	return (0);
}

/*
int	main(void)
{
	char string[] = "Somebodyxoncewtoldzme";
	char charset[] = "zxw";
	char **split = ft_split(string, charset);
	int i = 0;
	while (split[i] != NULL)
	{
		printf("%s\n", split[i]);
		free(split[i++]);
	}
	free(split);
	return (0);
}
*/