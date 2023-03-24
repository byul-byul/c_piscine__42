/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resolver.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgadzhil <@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 21:23:34 by bgadzhil          #+#    #+#             */
/*   Updated: 2023/03/12 21:27:45 by bgadzhil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

static int	is_valid_line(char t[MAP_SIZE][MAP_SIZE], t_clue *c, int v, int l)
{
	int	clues_1;
	int	clues_2;

	if (l)
	{
		clues_1 = count_clues(t, v, 0);
		clues_2 = count_clues(t, v, 1);
		if (clues_1 != c->col_u[v] || clues_2 != c->col_d[v])
			return (0);
	}
	else
	{
		clues_1 = count_clues(t, v, 2);
		clues_2 = count_clues(t, v, 3);
		if (clues_1 != c->row_l[v] || clues_2 != c->row_r[v])
			return (0);
	}
	return (1);
}

static int	is_value_exist(char tab[MAP_SIZE][MAP_SIZE], int x, int y, int val)
{
	int	i;

	i = -1;
	while (++i < MAP_SIZE)
		if (val == tab[y][i] || val == tab[i][x])
			return (0);
	return (1);
}

static int	get_empty_cell(char tab[MAP_SIZE][MAP_SIZE], int *x, int *y)
{
	int	i;
	int	j;

	i = -1;
	while (++i < MAP_SIZE)
	{
		j = -1;
		while (++j < MAP_SIZE)
		{
			if (0 == tab[i][j])
			{
				*x = j;
				*y = i;
				return (1);
			}
		}
	}
	return (0);
}

int	resolve(char cells[MAP_SIZE][MAP_SIZE], t_clue *clues)
{
	int	x;
	int	y;
	int	val;

	if (get_empty_cell(cells, &x, &y))
	{
		val = '0';
		while (++val <= (MAP_SIZE + '0'))
		{
			if (is_value_exist(cells, x, y, val))
			{
				cells[y][x] = val;
				if (x == (MAP_SIZE - 1) && !is_valid_line(cells, clues, y, 0))
					continue ;
				if (y == (MAP_SIZE - 1) && !is_valid_line(cells, clues, x, 1))
					continue ;
				if (resolve(cells, clues) == 1)
					return (1);
			}
		}
		cells[y][x] = 0;
		return (0);
	}
	return (1);
}
