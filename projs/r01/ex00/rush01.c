/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgadzhil <@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 20:25:03 by bgadzhil          #+#    #+#             */
/*   Updated: 2023/03/12 21:31:39 by bgadzhil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

static void	show_tab_content(char tab[MAP_SIZE][MAP_SIZE])
{
	int	i;
	int	j;

	j = -1;
	while (++j < MAP_SIZE)
	{
		i = -1;
		while (++i < MAP_SIZE)
		{
			ft_putchar(tab[i][j]);
			if (i != MAP_SIZE -1)
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}

static void	init_tab(char tab[MAP_SIZE][MAP_SIZE])
{
	int	i;
	int	j;

	j = -1;
	while (++j < MAP_SIZE)
	{
		i = -1;
		while (++i < MAP_SIZE)
			tab[i][j] = 0;
	}
}

static void	parse_arg(t_clue *clues, char *arg)
{
	char	*ptr_clues;
	int		i;

	ptr_clues = &clues->col_u[0];
	i = 0;
	while (arg[i])
	{
		*ptr_clues = arg[i] - '0';
		ptr_clues++;
		i += 2;
	}
}

void	rush01(int ac, char **av)
{
	char	cells[MAP_SIZE][MAP_SIZE];
	t_clue	clues;

	if (is_valid_arg(ac, av))
	{
		parse_arg(&clues, av[1]);
		init_tab(cells);
		if (resolve(cells, &clues))
			show_tab_content(cells);
		else
			print_error(4);
	}
}
