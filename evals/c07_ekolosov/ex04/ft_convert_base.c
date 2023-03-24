/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekolosov <ekolosov@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 08:18:49 by ekolosov          #+#    #+#             */
/*   Updated: 2023/03/21 19:59:45 by ekolosov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdlib.h>
//#include	<stdio.h>

char	*conversion(char *nbr, char *base_from, char *base_to);
int		is_num_base(char c, char *base);
void	ft_itoa_base(int num, char *str, char *base_to);
int		ft_atoi_base(char *nbr, char *base_from);
int		ft_strlen(char *str);
int		validate_base(char *base);
int		is_num_base(char c, char *base);
void	ft_putnbr(int nb, int base, char *out, char *base_to);
char	*ft_strcat(char *dest, char c);

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	if (validate_base(base_from) || validate_base(base_to))
		return (NULL);
	return (conversion(nbr, base_from, base_to));
}

char	*conversion(char *nbr, char *base_from, char *base_to)
{
	int		num;
	char	*str;

	num = ft_atoi_base(nbr, base_from);
	if (num == -1)
		return (NULL);
	str = (char *)malloc(sizeof(char) * 33);
	if (str == NULL)
		return (NULL);
	*str = 0;
	ft_itoa_base(num, str, base_to);
	return (str);
}

void	ft_itoa_base(int num, char *str, char *base_to)
{
	int		base;

	base = ft_strlen(base_to);
	ft_putnbr(num, base, str, base_to);
}

int	ft_atoi_base(char *nbr, char *base_from)
{
	int	num;
	int	sign;
	int	base;

	num = 0;
	sign = 1;
	base = ft_strlen(base_from);
	printf("Base is: %d\n", base);
	while (*nbr && (*nbr == ' ' || (*nbr >= 9 && *nbr <= 13)))
		nbr++;
	while (*nbr == '+' || *nbr == '-')
		if (*nbr++ == '-')
			sign *= -1;
	while (is_num_base(*nbr, base_from) != -1)
		num = num * base + is_num_base(*nbr++, base_from);
	num *= sign;
	printf("Number is: %d\n", num);
	return (num);
}

/*
int main()
{
	char *string = ft_convert_base("420", "0123456789", "01");
	printf("%s\n", string);
	free(string);
	return (0);
}
*/