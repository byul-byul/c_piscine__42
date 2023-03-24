/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgadzhil <@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 08:06:01 by bgadzhil          #+#    #+#             */
/*   Updated: 2023/03/15 19:40:03 by bgadzhil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_is_lowercase(char c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}

char	*ft_strupcase(char *str)
{
	char	*tmp;

	tmp = str;
	while (*tmp)
	{
		if (ft_is_lowercase(*tmp))
			*tmp -= 32;
		tmp++;
	}
	return (str);
}

// #include <stdio.h>
// int	main(int ac, char **av)
// {
// 	ac += 0;
// 	printf("argument value is:\t\t%s\n", av[1]);
// 	printf("res of ft_strupcase() is:\t%s\n", ft_strupcase(av[1]));
// 	return(0);
// }