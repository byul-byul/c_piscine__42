/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgadzhil <@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 15:50:35 by coder             #+#    #+#             */
/*   Updated: 2023/03/13 18:51:39 by bgadzhil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	f;

	f = 0;
	while (str[f] != '\0')
	{
		f++;
	}
	return (f);
}

#include <stdio.h>

int main(void)
{
	printf("%i\n", ft_strlen("hello my fellow!"));
}
