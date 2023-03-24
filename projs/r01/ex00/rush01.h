/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgadzhil <@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 20:25:14 by bgadzhil          #+#    #+#             */
/*   Updated: 2023/03/12 22:00:01 by bgadzhil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH01_H
# define RUSH01_H

# include <unistd.h>

# define MAP_SIZE	4
# define MIN_HEIGHT	1
# define MAX_HEIGHT	4

# define ERR_NO_0	"Error: argc is not correct\n"
# define ERR_NO_1	"Error: len is not correct\n"
# define ERR_NO_2	"Error: height is not correct\n"
# define ERR_NO_3	"Error: delimeter is not correct\n"
# define ERR_NO_4	"Error\n"

typedef struct s_clue
{
	char	col_u[MAP_SIZE];
	char	col_d[MAP_SIZE];
	char	row_l[MAP_SIZE];
	char	row_r[MAP_SIZE];
}				t_clue;

void	rush01(int ac, char **av);
int		is_valid_arg(int ac, char **av);
void	print_error(int err);
void	ft_putstr(char *err_msg);
int		ft_strlen(char *s);
int		ft_atoi(char *str);
void	ft_putchar(char c);
int		resolve(char cells[MAP_SIZE][MAP_SIZE], t_clue *clues);
int		count_clues(char tab[MAP_SIZE][MAP_SIZE], int val, int clue_type);

#endif