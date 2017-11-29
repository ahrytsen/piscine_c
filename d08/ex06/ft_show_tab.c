/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahrytsen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/05 23:07:14 by ahrytsen          #+#    #+#             */
/*   Updated: 2017/08/05 23:07:16 by ahrytsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

void	ft_putchar(char c);

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
	ft_putchar('\n');
	return ;
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
		ft_putchar(str[i++]);
	ft_putchar('\n');
}

void	ft_print_words_tables(char **tab)
{
	int i;

	i = 0;
	while (tab[i])
	{
		while (*tab[i])
			ft_putchar(*tab[i]++);
		ft_putchar('\n');
		i++;
	}
}

void	ft_show_tab(struct s_stock_par *par)
{
	int i;

	i = 0;
	while (par[i].str)
	{
		ft_putstr(par[i].copy);
		ft_putnbr(par[i].size_param);
		ft_print_words_tables(par[i].tab);
		i++;
	}
}
