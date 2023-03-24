/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgadzhil <@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 09:49:22 by ojacobs           #+#    #+#             */
/*   Updated: 2023/03/21 10:45:05 by bgadzhil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

// int	main(void)
// {
// 	char digi[] = "013801419023";
// 	char special[] = "43985srhhkrg025353";
// 	char empty[] = "";

// 	int a = ft_str_is_numeric(digi);
// 	int b = ft_str_is_numeric(special);
// 	int c = ft_str_is_numeric(empty);
// 	printf("%d\n", a);
// 	printf("%d\n", b);
// 	printf("%d\n", c);
// 	return (0);
// }
