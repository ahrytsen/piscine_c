/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paints.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahrytsen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/13 21:58:23 by ahrytsen          #+#    #+#             */
/*   Updated: 2017/08/13 21:58:26 by ahrytsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	paint(int i, int j, int y, int x)
{
	if ((i == 0 && j == 0) || (i == y - 1 && j == x - 1))
	{
		if (y == 1 && x == 1)
			ft_putchar('o');
		else if ((y == 1 && j == x - 1) || (x == 1 && i == y - 1))
			ft_putchar('o');
		else
			ft_putchar('o');
	}
	else if ((i == y - 1 && j == 0) || (i == 0 && j == x - 1))
		ft_putchar('o');
	else if (((i == 0 || i == y - 1)
				&& j > 0))
		ft_putchar('-');
	else if ((j == 0 || j == x - 1) && i > 0)
		ft_putchar('|');
	else
		ft_putchar(' ');
	return ;
}


void	paint_01(int i, int j, int y, int x)
{
	if ((i == 0 && j == 0) || (i == y - 1 && j == x - 1))
	{
		if (y == 1 && x == 1)
			ft_putchar('/');
		else if ((y == 1 && j == x - 1) || (x == 1 && i == y - 1))
			ft_putchar('\\');
		else
			ft_putchar('/');
	}
	else if ((i == y - 1 && j == 0) || (i == 0 && j == x - 1))
		ft_putchar('\\');
	else if (((i == 0 || i == y - 1)
				&& j > 0) || ((j == 0 || j == x - 1) && i > 0))
		ft_putchar('*');
	else
		ft_putchar(' ');
	return ;
}
