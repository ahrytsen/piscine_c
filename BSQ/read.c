/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahrytsen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 15:39:24 by ahrytsen          #+#    #+#             */
/*   Updated: 2017/08/15 15:39:29 by ahrytsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	map_error(void)
{
	write(2, "map error\n", 10);
	reset_globals();
}

void	read_params(int fd)
{
	int		i;
	char	buf[42];

	i = 0;
	read(fd, &buf[i], 1);
	while (i < 40 && buf[i] != '\n')
	{
		i++;
		read(fd, &buf[i], 1);
	}
	buf[i] = 0;
	g_map_param.x = ft_atoi(buf);
	i = 0;
	while (buf[i] && buf[i] >= '0' && buf[i] <= '9')
		i++;
	g_map_param.empty = buf[i++];
	g_map_param.obst = buf[i++];
	g_map_param.full = buf[i];
	if (buf[i + 1])
		reset_globals();
}

void	ft_memory(char **map)
{
	int i;

	i = 1;
	while (i <= g_map_param.x)
		map[i++] = (char*)malloc(sizeof(char) * (g_map_param.y + 2));
}

void	read_first_line(char **map, int fd)
{
	char	*first;
	int		i;

	first = (char*)malloc(sizeof(char) * 65534);
	i = 0;
	read(fd, &first[i], 1);
	while (first[i] != '\n')
	{
		if (first[i] != g_map_param.empty && first[i] != g_map_param.obst)
		{
			free(first);
			return (map_error());
		}
		i++;
		read(fd, &first[i], 1);
	}
	g_map_param.y = i;
	first[i] = 0;
	*map = (char*)malloc(sizeof(char) * (i + 1));
	i = -1;
	while (first[++i])
		map[0][i] = first[i];
	map[0][i] = 0;
	free(first);
}

void	read_map(char **map, int fd, int i, int j)
{
	char check;

	check = 0;
	while (i < g_map_param.x)
	{
		read(fd, &map[i][j], 1);
		while (map[i][j] != '\n' && j <= g_map_param.y)
		{
			if (map[i][j] != g_map_param.empty && map[i][j] != g_map_param.obst)
				return (map_error());
			j++;
			read(fd, &map[i][j], 1);
		}
		map[i][j] = 0;
		if (j != g_map_param.y)
			return (map_error());
		j = 0;
		i++;
	}
	read(fd, &check, 1);
	if (check || i != g_map_param.x)
		return (map_error());
}
