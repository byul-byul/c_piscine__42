/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgadzhil <@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 19:28:22 by kzhybul           #+#    #+#             */
/*   Updated: 2023/03/21 16:21:58 by bgadzhil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	counter_1;
	int	counter_2;
	int	flag;

	counter_1 = 0;
	while (*(str + counter_1) != '\0')
	{
		flag = 0;
		counter_2 = 0;
		while (*(to_find + counter_2) != '\0')
		{
			if (*(str + counter_1 + counter_2) != *(to_find + counter_2))
			{
				flag = 1;
				break ;
			}
			counter_2 = counter_2 + 1;
		}
		if (flag == 0)
			return (str + counter_1);
		counter_1 = counter_1 + 1;
	}
	return (0);
}

#include <stdio.h>
#include <string.h>
int	main(int ac, char **av)
{
	ac +=0;
	printf("result of ft_strstr() is:\t");
	printf("%s\n", ft_strstr(av[1], av[2]));
	printf("result of strstr() is:\t\t");
	printf("%s\n", strstr(av[3], av[4]));
	return (0);
}