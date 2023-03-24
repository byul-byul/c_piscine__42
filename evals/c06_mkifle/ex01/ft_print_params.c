/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 10:24:37 by coder             #+#    #+#             */
/*   Updated: 2023/03/23 10:31:34 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_arg(char *arg)
{
	int	i;

	i = 0;
	while (arg [i] > '\0')
	{
		write (1, &arg[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	i = 2;
	while (i <= argc)
	{
		ft_print_arg(argv[i - 1]);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
