/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojacobs <ojacobs@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 09:49:34 by ojacobs           #+#    #+#             */
/*   Updated: 2023/03/20 15:44:37 by ojacobs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
			return (0);
		i++;
	}
	return (1);
}

// int	main(void)
// {
// 	char ex1[] = "abretsjdknd";
// 	char ex2[] = "efkbewdkbZYVE";
// 	char ex3[] = "ZTRSIF";
// 	char ex4[] = "";

// 	int a = ft_str_is_uppercase(ex1);
// 	int b = ft_str_is_uppercase(ex2);
// 	int c = ft_str_is_uppercase(ex3);
// 	int d = ft_str_is_uppercase(ex4);
// 	printf("%d\n", a);
// 	printf("%d\n", b);
// 	printf("%d\n", c);
// 	printf("%d\n", d);
// 	return (0);
// }
