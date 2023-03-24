/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgadzhil <@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 18:31:01 by bgadzhil          #+#    #+#             */
/*   Updated: 2023/03/20 12:58:49 by bgadzhil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;

	i = 0;
	if (!n)
		return (0);
	if (s1[0] && s2[0])
	{
		n--;
		while (s1[i] && n)
		{
			if (s1[i] != s2[i])
				break ;
			n--;
			i++;
		}
	}
	return (s1[i] - s2[i]);
}

// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
// int	main(int ac, char **av)
// {
// 	ac += 0;
// 	printf("result of ft_strncmp() is:\t");
// 	printf("%d\n", ft_strncmp(av[1], av[2], atoi(av[5])));
// 	printf("result of strncmp() is:\t\t");
// 	printf("%d\n", strncmp(av[3], av[4], atoi(av[5])));
// 	return (0);
// }