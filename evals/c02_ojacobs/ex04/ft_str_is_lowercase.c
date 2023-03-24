/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojacobs <ojacobs@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 09:49:27 by ojacobs           #+#    #+#             */
/*   Updated: 2023/03/20 15:47:49 by ojacobs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
			return (0);
		i++;
	}
	return (1);
}

// int	main(void)
// {
// 	char ex1[] = "abretsjdknd";
// 	char ex2[] = "efkbewdkbr0";
// 	char ex3[] = "ZTRSIF";
// 	char ex4[] = "";

// 	int a = ft_str_is_lowercase(ex1);
// 	int b = ft_str_is_lowercase(ex2);
// 	int c = ft_str_is_lowercase(ex3);
// 	int d = ft_str_is_lowercase(ex4);

// 	printf("%d\n", a);
// 	printf("%d\n", b);
// 	printf("%d\n", c);
// 	printf("%d\n", d);
// 	return (0);
// }
