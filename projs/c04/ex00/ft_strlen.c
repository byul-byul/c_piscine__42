/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgadzhil <@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 10:57:28 by bgadzhil          #+#    #+#             */
/*   Updated: 2023/03/20 13:04:45 by bgadzhil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *s)
{
	int	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}

// #include <stdio.h>
// int	main(int ac, char **av)
// {
// 	ac += 0;
// 	printf("res of ft_strlen() is: %d\n", ft_strlen(av[1]));
// 	return (0);
// }