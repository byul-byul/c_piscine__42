/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgadzhil <@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 20:42:13 by bgadzhil          #+#    #+#             */
/*   Updated: 2023/03/19 19:29:07 by bgadzhil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

static int	cannot_understand_why_it_is_mandatory_here(char *line)
{
	int		i;

	i = 0;
	(void)line[i];
	return (1);
}

void	fill_dict(int i, char *line, t_data *data)
{
	if (i <= 19)
		data->parsed_dict_20[i] = line;
	else if (i <= 100 && !(i % 10))
		data->parsed_dict_rest[(i - 20) / 10] = line;
	else if (i == 1000)
		data->parsed_dict_rest[T_INDEX] = line;
	else if (i == 1000000)
		data->parsed_dict_rest[M_INDEX] = line;
	else if (i == 1000000000)
		data->parsed_dict_rest[B_INDEX] = line;
}

int	parse(char *path, t_data *data)
{
	int		fd;
	long	i;
	char	*line;

	fd = open(path, O_RDONLY);
	if (fd == -1)
	{
		print_error(0);
		return (0);
	}
	while (read_one_line(fd, &line))
	{
		if (cannot_understand_why_it_is_mandatory_here(line) && *line != '\n')
		{
			fill_dict(ft_atoi(line), strtrim(in_string(':', line) + 1), data);
			free(line);
		}
	}
	if (*line)
		free(line);
	i = -1;
	return (1);
}
