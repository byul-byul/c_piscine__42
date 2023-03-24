/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgadzhil <@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 21:49:23 by ojacobs           #+#    #+#             */
/*   Updated: 2023/03/21 10:44:29 by bgadzhil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if ((str[c] < 'A') || (str[c] > 'Z' && str[c] < 'a') || (str[c] > 'z'))
			return (0);
			c++;
	}
	return (1);
}

// int		main(void)
// {
// 	char ex1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
// 	char ex2[] = "sjvsdAHDLKRHHK?";
// 	char ex3[] = "";
// 	int a = ft_str_is_alpha(ex1);
// 	int b = ft_str_is_alpha(ex2); 
// 	int c = ft_str_is_alpha(ex3);
// 	printf("%d\n", a);
// 	printf("%d\n", b);
// 	printf("%d\n", c);
// 	return (0);
// }