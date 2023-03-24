/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzhybul <kzhybul@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 18:56:26 by kzhybul           #+#    #+#             */
/*   Updated: 2023/03/21 15:16:43 by kzhybul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	counter_src;
	unsigned int	counter_dest;

	counter_src = 0;
	counter_dest = 0;
	while (*(dest + counter_dest) != '\0')
	{
		counter_dest++;
	}
	while (*(src + counter_src) != '\0' && counter_src < nb)
	{
		*(dest + counter_dest) = *(src + counter_src);
		counter_src++;
		counter_dest++;
	}
	*(dest + counter_dest) = '\0';
	return (dest);
}
