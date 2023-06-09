/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgadzhil <@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 17:26:50 by bgadzhil          #+#    #+#             */
/*   Updated: 2023/03/13 21:30:21 by bgadzhil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	if (s1[0] && s2[0])
	{
		while (s1[i])
		{
			if (s1[i] != s2[i])
				break ;
			i++;
		}
	}
	return (s1[i] - s2[i]);
}
