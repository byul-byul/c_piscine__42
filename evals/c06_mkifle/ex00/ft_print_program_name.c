/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 08:49:33 by coder             #+#    #+#             */
/*   Updated: 2023/03/23 10:23:43 by coder            ###   ########.fr       */
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
	(void) argc;
	ft_print_arg(argv[0]);
	write(1, "\n", 1);
	return (0);
}
