/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgadzhil <@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 20:37:11 by bgadzhil          #+#    #+#             */
/*   Updated: 2023/03/19 21:36:44 by bgadzhil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH02_H
# define RUSH02_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

# define ERR_NO_0	"Error"
# define ERR_NO_1	"Dict Error"
# define FILE_PATH	"./numbers.dict"
# define BYTE_COUNT	1024
# define DICT_SIZE	20
# define STR_LEN	20
# define T_INDEX	9
# define M_INDEX	10
# define B_INDEX	11
# define BILLION	1000000000
# define MILLION	1000000
# define THOUSAND	1000
# define HUNDRED	100

typedef struct s_data
{
	char	**parsed_dict_20;
	char	**parsed_dict_rest;
	char	*res;
}				t_data;

void	rush02(int ac, char **av);
int		is_valid_arg(int ac, char *path, char *to_convert);
int		parse(char *path, t_data *data);
int		convert(char *to_convert, t_data *data);
int		read_one_line(int fd, char **line);
void	ft_putstr(char *str);
void	ft_putstrn(char *str);
void	print_error(int err);
int		is_only_digits(char *str);
int		is_digit(char c);
int		is_printable(char c);
long	ft_atoi(char *str);
int		init_data(t_data *data);
char	*in_string(char c, char *str);
int		ft_strlen(char *str);
int		is_space(int c);
char	*strtrim(char *str);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_memcpy(char *dest, char *src, int n);
char	*get_string_type(int num);
int		print_error_and_return_zero(int err_msg);
long	check_for_minus(long num, t_data *data);
int		add_to_res(char *val, t_data *data);
void	ft_free(t_data *data);

#endif