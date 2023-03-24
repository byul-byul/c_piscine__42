/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 14:35:32 by dnebatz           #+#    #+#             */
/*   Updated: 2023/03/21 09:56:44 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	i = argc;
	i = 0;
	while (argv[0][i])
		write(1, &argv[0][i++], 1);
	write(1, "\n", 1);
	return (0);
}
