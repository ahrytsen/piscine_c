/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahrytsen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 21:57:22 by ahrytsen          #+#    #+#             */
/*   Updated: 2017/08/12 21:57:24 by ahrytsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
	return ;
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putnbr(int nb)
{
	long int	temp;
	long int	nbr;
	int			i;

	nbr = nb;
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr *= -1;
	}
	temp = nbr;
	i = 1;
	while (temp > 9)
	{
		temp /= 10;
		i *= 10;
	}
	while (i > 1)
	{
		ft_putchar((nbr / i) % 10 + 48);
		i /= 10;
	}
	ft_putchar((nbr / i) % 10 + 48);
	return ;
}

int		convert(char *str, int *it, long int res, int is_positive)
{
	while (str[it[0]])
	{
		if (it[1] == 0 && (str[it[0]] == 32 || str[it[0]] == '-'
			|| str[it[0]] == '+' || (str[it[0]] > 8 && str[it[0]] < 14)))
		{
			if (str[it[0]] == '-')
			{
				is_positive = -1;
				it[1]++;
			}
			else if (str[it[0]] == '+')
				it[1]++;
		}
		else if (str[it[0]] < '0' || str[it[0]] > '9')
			return (res * is_positive);
		else if (str[it[0]] >= '0' && str[it[0]] <= '9')
		{
			res = res * 10 + (str[it[0]] - '0');
			it[1]++;
		}
		it[0]++;
	}
	return (res * is_positive);
}

int		ft_atoi(char *str)
{
	int			it[2];
	long int	res;
	int			is_positive;

	it[0] = 0;
	it[1] = 0;
	res = 0;
	is_positive = 1;
	return (convert(str, it, res, is_positive));
}
