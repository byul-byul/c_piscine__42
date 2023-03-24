/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgadzhil <@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 14:47:18 by kzhybul           #+#    #+#             */
/*   Updated: 2023/03/21 16:20:31 by bgadzhil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	counter;

	counter = 0;
	while (*(s1 + counter) != '\0' && *(s1 + counter) == *(s2 + counter))
		counter = counter + 1;
	return (*(s1 + counter) - *(s2 + counter));
}

#include <stdio.h>
#include <string.h>
int	main(int ac, char **av)
{
	ac += 0;
	printf("result of ft_strcmp() is:\t");
	printf("%d\n", ft_strcmp(av[1], av[2]));
	printf("result of strcmp() is:\t\t");
	printf("%d\n", strcmp(av[3], av[4]));
	return (0);
}