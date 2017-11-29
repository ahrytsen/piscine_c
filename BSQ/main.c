/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahrytsen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 10:38:52 by ahrytsen          #+#    #+#             */
/*   Updated: 2017/08/15 10:38:53 by ahrytsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

t_param	g_map_param = {0, 0, 0, 0, 0};
t_sq	g_square = {0, 0, 0};

void	solve_exmpl(int fd)
{
	char **map;

	read_params(fd);
	if (!g_map_param.x || !g_map_param.obst
		|| !g_map_param.full || !g_map_param.empty)
		return (map_error());
	map = (char**)malloc(sizeof(char*) * g_map_param.x + 2);
	read_first_line(map, fd);
	if (!g_map_param.x)
		return ;
	ft_memory(map);
	read_map(map, fd, 1, 0);
	if (!g_map_param.x)
		return ;
	bsq(map);
	print_map(map);
}

int		main(int ac, char **av)
{
	int fd;
	int i;

	i = 1;
	while (i < ac)
	{
		if (i > 1)
			write(1, "\n", 1);
		fd = open(av[i], O_RDONLY);
		solve_exmpl(fd);
		close(fd);
		reset_globals();
		i++;
	}
	if (ac == 1)
		solve_exmpl(0);
	return (0);
}
