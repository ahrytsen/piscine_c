/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skushnir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 14:32:39 by skushnir          #+#    #+#             */
/*   Updated: 2017/08/14 14:32:39 by skushnir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/uio.h>

typedef struct	s_param
{
	int		y;
	int		x;
	char	empty;
	char	obst;
	char	full;
}				t_param;
typedef struct	s_sq
{
	int y;
	int x;
	int size;
}				t_sq;
extern t_param	g_map_param;
extern t_sq		g_square;
int				ft_atoi(char *str);
void			read_params(int fd);
void			bsq(char **map);
void			reset_globals(void);
void			read_map(char **map, int fd, int i, int j);
void			read_first_line(char **map, int fd);
void			map_error();
void			ft_memory(char **map);
void			print_map(char **map);

#endif
