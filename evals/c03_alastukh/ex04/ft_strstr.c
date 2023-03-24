/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alastukh <alastukh@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 10:09:06 by alastukh          #+#    #+#             */
/*   Updated: 2023/03/14 08:24:00 by alastukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		tmp;
	int		found;

	if (!*to_find)
		return (str);
	while (*str)
	{
		if (*str == *to_find)
		{
			tmp = 0;
			found = 1;
			while (to_find[tmp] && found)
			{
				if (to_find[tmp] != str[tmp])
					found = 0;
				tmp++;
			}
			if (found)
				return (str);
		}
		str++;
	}
	return (0);
}
