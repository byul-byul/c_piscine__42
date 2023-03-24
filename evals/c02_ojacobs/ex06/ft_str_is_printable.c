/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojacobs <ojacobs@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 09:49:43 by ojacobs           #+#    #+#             */
/*   Updated: 2023/03/20 15:36:40 by ojacobs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
			return (0);
		i++;
	}
	return (1);
}

// int	main(void)
// {
// 	char ex1[] = "dskfsAHIUB";
// 	char ex2[] = "089ujsbf shDYJD";
// 	char ex3[] = "";
// 	char ex4[] = "";
// 	char ex5[] = "\n";

// 	int a = ft_str_is_printable(ex1);
// 	int b = ft_str_is_printable(ex2);
// 	int c = ft_str_is_printable(ex3);
// 	int d = ft_str_is_printable(ex4);
// 	int e = ft_str_is_printable(ex5);

// 	printf("%d\n", a);
// 	printf("%d\n", b);
// 	printf("%d\n", c);
// 	printf("%d\n", d);
// 	printf("%d\n", e);
// 	return (0);
// }
