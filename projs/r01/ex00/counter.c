/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   counter.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgadzhil <@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 21:08:13 by bgadzhil          #+#    #+#             */
/*   Updated: 2023/03/12 21:09:34 by bgadzhil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

static int	count_left_clues(char tab[MAP_SIZE][MAP_SIZE], int y)
{
	int		i;
	int		clues;
	int		max_size;

	i = -1;
	clues = 0;
	max_size = 0;
	while (++i < MAP_SIZE)
	{
		clues += tab[y][i] > max_size;
		if (tab[y][i] > max_size)
			max_size = tab[y][i];
	}
	return (clues);
}

static int	count_up_clues(char tab[MAP_SIZE][MAP_SIZE], int x)
{
	int		i;
	int		clues;
	int		max_size;

	i = -1;
	clues = 0;
	max_size = 0;
	while (++i < MAP_SIZE)
	{
		clues += tab[i][x] > max_size;
		if (tab[i][x] > max_size)
			max_size = tab[i][x];
	}
	return (clues);
}

static int	count_down_clues(char tab[MAP_SIZE][MAP_SIZE], int x)
{
	int		i;
	int		clues;
	int		max_size;

	i = MAP_SIZE;
	clues = 0;
	max_size = 0;
	while (--i >= 0)
	{
		clues += tab[i][x] > max_size;
		if (tab[i][x] > max_size)
			max_size = tab[i][x];
	}
	return (clues);
}

static int	count_right_clues(char tab[MAP_SIZE][MAP_SIZE], int y)
{
	int		i;
	int		clues;
	int		max_size;

	i = MAP_SIZE;
	clues = 0;
	max_size = 0;
	while (--i >= 0)
	{
		clues += tab[y][i] > max_size;
		if (tab[y][i] > max_size)
			max_size = tab[y][i];
	}
	return (clues);
}

int	count_clues(char tab[MAP_SIZE][MAP_SIZE], int val, int clue_type)
{
	int	clues;

	if (clue_type == 0)
		clues = count_up_clues(tab, val);
	else if (clue_type == 1)
		clues = count_down_clues(tab, val);
	else if (clue_type == 2)
		clues = count_left_clues(tab, val);
	else
		clues = count_right_clues(tab, val);
	return (clues);
}
