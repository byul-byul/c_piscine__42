/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgadzhil <@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 09:49:50 by ojacobs           #+#    #+#             */
/*   Updated: 2023/03/21 10:46:44 by bgadzhil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strupcase(char *str)
{	
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}

// int	main(void)
// {
// 	char ex1[] = "max";
// 	char ex2[] = "Dorian Grey";
// 	char ex3[] = "0434 akiNpelu";

// 	ft_strupcase(ex1);
// 	char *b = ft_strupcase(ex2);
// 	char *c = ft_strupcase(ex3);

// 	printf("%s\n", ex1);
// 	printf("%s\n", b);
// 	printf("%s\n", c);
// 	return (0);
// }
