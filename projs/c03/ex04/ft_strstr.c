/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgadzhil <@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 19:19:20 by bgadzhil          #+#    #+#             */
/*   Updated: 2023/03/20 13:00:20 by bgadzhil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (!to_find[0])
		return (str);
	while (str[i])
	{
		j = 0;
		while (str[i + j] == to_find[j] && str[i + j])
		{
			if (!to_find[j + 1])
				return (&str[i]);
			j++;
		}
		i++;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>
// int	main(int ac, char **av)
// {
// 	ac +=0;
// 	printf("result of ft_strstr() is:\t");
// 	printf("%s\n", ft_strstr(av[1], av[2]));
// 	printf("result of strstr() is:\t\t");
// 	printf("%s\n", strstr(av[3], av[4]));
// 	return (0);
// }