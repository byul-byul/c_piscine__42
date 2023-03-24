/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 15:20:52 by dnebatz           #+#    #+#             */
/*   Updated: 2023/03/21 09:46:33 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(char **tab, int size);

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	while (++i < argc)
	{
		j = 0;
		while (argv[i][j])
			write(1, &argv[i][j++], 1);
		write(1, "\n", 1);
	}
	write(1, "\n", 1);
	ft_sort_int_tab(argv, argc);
	i = 0;
	while (++i < argc)
	{
		j = 0;
		while (argv[i][j])
			write(1, &argv[i][j++], 1);
		write(1, "\n", 1);
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (*(s1 + i) != 0 && *(s2 + i) != 0 && *(s1 + i) == *(s2 + i))
	{
		i++;
	}
	return (*(s1 + i) - *(s2 + i));
}

void	ft_sort_int_tab(char **tab, int size)
{
	int		i;
	int		j;
	char	*temp;

	i = 1;
	j = 1;
	while (i < size - 1)
	{
		while (j < size - 1)
		{
			if (ft_strcmp(tab[i], tab[j + 1]) > 0)
			{
				temp = *(tab + j + 1);
				*(tab + j + 1) = *(tab + i);
				*(tab + i) = temp;
			}
			j++;
		}
		j = i;
		i++;
	}
}
