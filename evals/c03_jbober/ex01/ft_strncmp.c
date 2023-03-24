/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgadzhil <@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 18:36:37 by jbober            #+#    #+#             */
/*   Updated: 2023/03/14 12:51:33 by bgadzhil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
	{
		return (0);
	}
	while ((s1[i] != '\0') && (s2[i] != '\0')
		&& (s1[i] == s2[i]) && (i < n - 1))
	{
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*
#include <stdio.h>
#include <string.h>
void	test(char *s1, char *s2, unsigned int n)
{
	printf("%i\t", strncmp(s1, s2, n));
	printf("%i\n", ft_strncmp(s1, s2, n));
}

int	main(void)
{
	char	x[3] = {1, 5, 3};
	char	y[3] = {1, 2, 3};
	test(x, y, 0);
	test("abc", "abc", 3);
	test("abc", "abk", 3);
	test("abc", "abk", 0);
}
*/