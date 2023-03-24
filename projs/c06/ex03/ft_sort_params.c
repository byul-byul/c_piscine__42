/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgadzhil <@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 06:44:39 by bgadzhil          #+#    #+#             */
/*   Updated: 2023/03/06 06:49:42 by bgadzhil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

static int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	if (s1[0] && s2[0])
	{
		while (s1[i])
		{
			if (s1[i] != s2[i])
				break ;
			i++;
		}
	}
	return (s1[i] - s2[i]);
}

static void	print_program_arguments(int cnt, char **arr)
{
	int	i;

	i = 0;
	while (++i < cnt)
	{
		ft_putstr(arr[i]);
		write(1, "\n", 1);
	}
}

int	main(int ac, char **av)
{
	int		i;
	int		j;
	char	*tmp;

	i = 1;
	while (i < ac)
	{
		j = 1;
		while (j < ac)
		{
			if (ft_strcmp(av[i], av[j]) < 0)
			{
				tmp = av[i];
				av[i] = av[j];
				av[j] = tmp;
			}
			j++;
		}
		i++;
	}
	print_program_arguments(ac, av);
	return (0);
}
