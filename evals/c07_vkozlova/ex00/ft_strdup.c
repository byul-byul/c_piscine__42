/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkozlova <vkozlova@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 10:00:34 by vkozlova          #+#    #+#             */
/*   Updated: 2023/03/21 14:12:42 by vkozlova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str);

char	*ft_strdup(char *src)
{
	char	*copied;
	int		i;

	i = 0;
	copied = malloc(ft_strlen(src) + 1);
	while (src[i])
	{
		copied[i] = src[i];
		i++;
	}
	copied[i] = '\0';
	return (copied);
}

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

// #include <stdio.h>
// int main()
// {
// 	char *src = "Hello";
// 	printf("%s\n", ft_strdup(src));
// }