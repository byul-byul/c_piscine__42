/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgadzhil <@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 20:37:47 by bgadzhil          #+#    #+#             */
/*   Updated: 2023/03/19 21:32:44 by bgadzhil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

void	rush02(int ac, char **av)
{
	char	*path;
	char	*to_convert;
	t_data	data;

	if (!init_data(&data))
		return ;
	if (ac == 3)
	{
		path = av[1];
		to_convert = av[2];
	}
	else
	{
		path = FILE_PATH;
		to_convert = av[1];
	}
	if (is_valid_arg(ac, path, to_convert))
		if (parse(path, &data))
			if (convert(to_convert, &data))
				ft_putstrn(strtrim(data.res));
	ft_free(&data);
}
