/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgadzhil <@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 18:16:43 by bgadzhil          #+#    #+#             */
/*   Updated: 2023/03/20 12:56:43 by bgadzhil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	if (s1[0] && s2[0])
	{
		while (s1[i])
		{
			if (s1[i] != s2[i])
				break ;
			i++;
		}
	}
	return (s1[i] - s2[i]);
}

// #include <stdio.h>
// #include <string.h>
// int	main(int ac, char **av)
// {
// 	ac += 0;
// 	printf("result of ft_strcmp() is:\t");
// 	printf("%d\n", ft_strcmp(av[1], av[2]));
// 	printf("result of strcmp() is:\t\t");
// 	printf("%d\n", strcmp(av[3], av[4]));
// 	return (0);
// }