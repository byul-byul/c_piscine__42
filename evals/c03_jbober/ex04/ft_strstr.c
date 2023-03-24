/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbober < jbober@student.42wolfsburg.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 20:02:15 by jbober            #+#    #+#             */
/*   Updated: 2023/03/13 19:59:49 by jbober           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		while (((str[i + j]) == (to_find[j])) && str[i + j] != '\0')
		{
			j++;
		}
		if (to_find[j] == '\0')
		{
			return (str + i);
		}
		i++;
		j = 0;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
void	test(char *str, char *to_find)
{
	printf("%s\t", strstr(str, to_find));
	printf("%s\n", ft_strstr(str, to_find));
}

int	main(void)
{
	test("Denn das Loch in meinem Herzen", "Loch");
	test("12345", "");
	test("Give me love or give me death", "Heart");
}
*/