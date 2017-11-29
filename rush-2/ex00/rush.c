/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahrytsen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/13 22:00:45 by ahrytsen          #+#    #+#             */
/*   Updated: 2017/08/13 22:00:46 by ahrytsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

void	rush_01(int x, int y)
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
