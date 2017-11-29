/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahrytsen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/29 13:24:01 by ahrytsen          #+#    #+#             */
/*   Updated: 2017/07/29 13:42:11 by ahrytsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	paint(int i, int j, int y, int x)
{
	if ((i == 0 || i == y - 1) && j == 0)
	{
		ft_putchar('A');
	}
	else if ((i == 0 || i == y - 1) && j == x - 1)
		ft_putchar('C');
	else if (((i == 0 || i == y - 1)
				&& j > 0) || ((j == 0 || j == x - 1) && i > 0))
		ft_putchar('B');
	else
		ft_putchar(' ');
	return ;
}

void	rush(int x, int y)
{
	int i;
	int j;

	i = 0;
	while (i < y)
	{
		j = 0;
		while (j < x)
		{
			paint(i, j, y, x);
			if (j == x - 1)
				ft_putchar('\n');
			j++;
		}
		i++;
	}
	return ;
}
