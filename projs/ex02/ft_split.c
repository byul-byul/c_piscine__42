/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgadzhil <@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 13:56:18 by bgadzhil          #+#    #+#             */
/*   Updated: 2023/03/23 19:59:17 by bgadzhil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_check_sep(char c, char *charset)
{
	while (1)
	{
		if (*charset == '\0')
			return (c == '\0');
		if (*charset == c)
			return (1);
		charset++;
	}
	return (0);
}

int	get_word_len(char *str, char *charset)
{
	int	len;

	len = 0;
	while (str[len] && !ft_check_sep(str[len], charset))
		len++;
	return (len);
}

char	*get_one_word(char *str, char *charset)
{
	int		i;
	int		len;
	char	*word;

	i = -1;
	len = get_word_len(str, charset);
	word = malloc(sizeof(char) * (len + 1));
	if (word)
	{
		while (++i < len)
			word[i] = str[i];
		word[i] = '\0';
		return (word);
	}
	return (NULL);
}

int	get_str_count(char *str, char *charset)
{
	int	i;
	int	count;

	i = -1;
	count = 0;
	while (str[++i])
	{
		while (str[i] && ft_check_sep(str[i], charset))
			i++;
		if (str[i])
			count++;
		while (str[i] && !ft_check_sep(str[i], charset))
			i++;
	}
	return (count);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	char	**splits;

	i = 0;
	splits = malloc(sizeof(char *) * (get_str_count(str, charset) + 1));
	if (splits)
	{
		while (*str)
		{
			while (*str && ft_check_sep(*str, charset))
				str++;
			if (*str)
			{
				splits[i] = get_one_word(str, charset);
				i++;
			}
			while (*str && !ft_check_sep(*str, charset))
				str++;
		}
		splits[i] = NULL;
		return (splits);
	}
	return (NULL);
}

#include <stdio.h>
int	main(int ac, char **av)
{
	char	**splits;
	
	ac += 0;
	splits = ft_split(av[1], av[2]);
	while (*splits)
		printf("|%s|\n", *splits++);
	return (0);
}
