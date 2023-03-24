/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zjuric <coder@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 20:48:41 by bgadzhil          #+#    #+#             */
/*   Updated: 2023/03/05 22:29:36 by zjuric           ###   ########.fr       */
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
			print_one_line('A', 'B', 'A', char_count);
		else if (i == line_count - 1)
			print_one_line('C', 'B', 'C', char_count);
		else
			print_one_line('B', ' ', 'B', char_count);
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
