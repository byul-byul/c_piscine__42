/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alastukh <alastukh@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 09:39:04 by alastukh          #+#    #+#             */
/*   Updated: 2023/03/13 14:41:21 by alastukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	ret;

	ret = 0;
	while (*str)
	{
		ret++;
		str++;
	}
	return (ret);
}

char	*ft_strcat(char *dest, char *src)
{
	int	index;

	index = ft_strlen(dest);
	while (*src)
		dest[index++] = *(src++);
	dest[index] = '\0';
	return (dest);
}
