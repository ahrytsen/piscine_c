/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahrytsen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 14:54:57 by ahrytsen          #+#    #+#             */
/*   Updated: 2017/08/14 14:54:59 by ahrytsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void				reset_globals(void)
{
	g_map_param.empty = 0;
	g_map_param.obst = 0;
	g_map_param.full = 0;
	g_map_param.x = 0;
	g_map_param.y = 0;
	g_square.size = 0;
	g_square.x = 0;
	g_square.y = 0;
}

int					min(unsigned short int a, unsigned short int b,
						unsigned short int c)
{
	if ((a >= b && b >= c) || (b >= a && a >= c))
		return (c);
	else if ((c >= a && a >= b) || (a >= c && c >= b))
		return (b);
	else
		return (a);
}

unsigned short int	**zero_arr(unsigned short int **arr)
{
	int i;
	int j;

	i = 0;
	arr = (unsigned short int**)malloc(sizeof(unsigned short int*)
		* (g_map_param.x + 1));
	while (i <= g_map_param.x)
	{
		arr[i] = (unsigned short int*)malloc(sizeof(unsigned short int)
			* (g_map_param.y + 1));
		j = 0;
		while (j <= g_map_param.y)
		{
			arr[i][j] = 0;
			j++;
		}
		i++;
	}
	return (arr);
}

void				bsq(char **map)
{
	int					i;
	int					j;
	unsigned short int	**b;

	i = 1;
	b = zero_arr(0);
	while (i <= g_map_param.x)
	{
		j = 1;
		while (j <= g_map_param.y)
		{
			if (map[i - 1][j - 1] == g_map_param.empty)
			{
				b[i][j] = min(b[i][j - 1], b[i - 1][j], b[i - 1][j - 1]) + 1;
				if (b[i][j] > g_square.size)
				{
					g_square.size = b[i][j];
					g_square.x = i;
					g_square.y = j;
				}
			}
			j++;
		}
		i++;
	}
}
