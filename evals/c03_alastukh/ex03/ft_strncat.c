/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alastukh <alastukh@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 09:54:18 by alastukh          #+#    #+#             */
/*   Updated: 2023/03/13 14:41:36 by alastukh         ###   ########.fr       */
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

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	index;

	index = ft_strlen(dest);
	while (*src && nb--)
		dest[index++] = *(src++);
	dest[index] = '\0';
	return (dest);
}
