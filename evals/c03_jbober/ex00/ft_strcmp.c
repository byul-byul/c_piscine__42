/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgadzhil <@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 11:52:01 by jbober            #+#    #+#             */
/*   Updated: 2023/03/14 12:52:02 by bgadzhil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0') && (s2[i] != '\0') && (s1[i] == s2[i]))
	{
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*
#include <string.h>
#include <stdio.h>
void	test(char *s1, char *s2)
{
	printf ("%i\t", strcmp(s1, s2));
	printf ("%i\n", ft_strcmp(s1, s2));
}

int	main(void)
{
	char	x[3] = {0, 1, 2};
	char	y[3] = {-2, 1, 222};
	test(x, y);
	test("abc", "abc");
	test("kbc", "aaa");
	test("_bc", "abc");
}
*/