/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekolosov <ekolosov@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 12:25:37 by ekolosov          #+#    #+#             */
/*   Updated: 2023/03/21 19:48:32 by ekolosov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// int		ft_strlen(char *str);
// int		validate_base(char *base);
// int		is_num_base(char c, char *base);
// void	ft_putnbr(int nb, int base, char *out, char *base_to);
// char	*ft_strcat(char *dest, char c);

int	is_num_base(char c, char *base)
{
	int	i;

	i = -1;
	while (base[++i])
		if (c == base[i])
			return (i);
	return (-1);
}

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (str[length])
		length++;
	return (length);
}

int	validate_base(char *base)
{
	int	i;
	int	j;

	i = -1;
	while (base[++i])
	{
		if (*base == '+' || *base == '-')
			return (1);
		j = i;
		while (base[++j])
			if (base[i] == base[j])
				return (1);
	}
	return (0);
}

char	*ft_strcat(char *dest, char c)
{
	int	i;

	i = ft_strlen(dest);
	dest[i++] = c;
	dest[i] = 0;
	return (dest);
}

void	ft_putnbr(int nb, int base, char *out, char *base_to)
{
	if (nb < -(base - 1) || nb > base - 1)
		ft_putnbr(nb / base, base, out, base_to);
	if (nb < 0)
	{
		if (nb >= -9)
			ft_strcat(out, '-');
		ft_strcat(out, base_to[nb % base]);
	}
	else
		ft_strcat(out, base_to[nb % base]);
}
