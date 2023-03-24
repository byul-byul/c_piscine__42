/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgadzhil <@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 20:48:38 by bgadzhil          #+#    #+#             */
/*   Updated: 2023/03/03 21:01:39 by bgadzhil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_one_line(char a, char b, char c, int count)
{
	int	i;

	i = 1;
	ft_putchar(a);
	while (i < count - 1)
	{
		ft_putchar(b);
		i++;
	}
	if (count > 1)
		ft_putchar(c);
}

void	print_lines(int char_count, int line_count)
{
	int	i;

	i = 0;
	while (i < line_count)
	{
		if (i == 0)
			print_one_line('/', '*', '\\', char_count);
		else if (i == line_count - 1)
			print_one_line('\\', '*', '/', char_count);
		else
			print_one_line('*', ' ', '*', char_count);
		ft_putchar('\n');
		i++;
	}
}

void	rush(int x, int y)
{
	if (x <= 0 || y <= 0)
		return ;
	print_lines(x, y);
}
