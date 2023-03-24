/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojacobs <ojacobs@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 09:55:01 by ojacobs           #+#    #+#             */
/*   Updated: 2023/03/20 15:18:09 by ojacobs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strlowcase(char *str)
{	
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

// int	main(void)
// {
// 	char ex1[] = "mAx";
// 	char ex2[] = "Dorian Grey";
// 	char ex3[] = "0434 akiNpeLu";

// 	ft_strlowcase(ex1);
// 	char *b = ft_strlowcase(ex2);
// 	char *c = ft_strlowcase(ex3);

// 	printf("%s\n", ex1);
// 	printf("%s\n", b);
// 	printf("%s\n", c);
// 	return (0);
// }
