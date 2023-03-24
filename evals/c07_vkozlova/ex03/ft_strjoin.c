/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkozlova <vkozlova@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 20:55:33 by vkozlova          #+#    #+#             */
/*   Updated: 2023/03/21 15:59:03 by vkozlova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	count_size(int size, char **strs, char *sep);

int	add_sep(char **result, int j, char *sep);

int	count_size(int size, char **strs, char *sep)
{
	char	*str;
	int		i;
	int		j;
	int		count;

	i = 0;
	count = 0;
	while (i < size)
	{
		j = 0;
		str = strs[i];
		while (str[j])
		{
			j++;
			count++;
		}
		j = 0;
		while (sep[j])
			j++;
		i++;
	}
	count += j * (size - 1);
	return (count);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	char	*str;
	int		i;
	int		j;

	i = 0;
	j = 0;
	result = malloc(count_size(size, strs, sep) + 1);
	if (result == NULL)
		return (NULL);
	if (size == 0)
		return (result);
	while (i < size)
	{
		str = strs[i];
		while (*str)
			result[j++] = *str++;
		if (i != size - 1)
			j = add_sep(&result, j, sep);
		i++;
	}
	result[j] = '\0';
	return (result);
}

int	add_sep(char **result, int j, char *sep)
{
	int	a;

	a = 0;
	while (sep[a])
		(*result)[j++] = sep[a++];
	return (j);
}

// #include <stdio.h>
// int main()
// {
// 	char	*array[5] = {"car", "house", "life", "pen", "ball"};
// 	printf("%s\n", ft_strjoin(5, array, ", "));
// 	printf("%s\n", ft_strjoin(0, array, ", "));
// }