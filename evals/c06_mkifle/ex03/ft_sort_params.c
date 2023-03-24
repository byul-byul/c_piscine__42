/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 10:37:05 by coder             #+#    #+#             */
/*   Updated: 2023/03/23 11:49:44 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0')
			return (0);
		i++;
	}
	return ((s1[i] - s2[i]));
}

void	ft_print_arg(char *arg)
{
	int	i;

	i = 0;
	while (arg[i] > '\0')
	{
		write(1, &arg[i], 1);
		i++;
	}
}

char	**ft_sort_param(int argc, char **argv)
{
	int		i_1;
	int		i_2;
	char	*min;

	i_1 = 1;
	while (i_1 < argc - 1)
	{
		min = argv[i_1];
		i_2 = i_1 + 1;
		while (i_2 < argc)
		{
			if (ft_strcmp(argv[i_2], min) < 0)
			{
				argv[i_1] = argv[i_2];
				argv[i_2] = min;
				min = argv[i_1];
			}
			i_2++;
		}
		i_1++;
	}
	return (argv);
}

int	main(int argc, char **argv)
{
	int	i;

	ft_sort_param(argc, argv);
	i = 2;
	while (i <= argc)
	{
		ft_print_arg(argv[i - 1]);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
