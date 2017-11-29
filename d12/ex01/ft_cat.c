/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahrytsen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 19:48:53 by ahrytsen          #+#    #+#             */
/*   Updated: 2017/08/10 19:49:06 by ahrytsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_file.h"

void	ft_type(void)
{
	char buf;

	while (read(0, &buf, 1))
		ft_putchar(buf);
}

void	ft_error(char *str)
{
	ft_putstr("ft_cat: ");
	ft_putstr(str);
	ft_putstr(": No such file or directory\n");
}

void	ft_print_file(char *path)
{
	int		fd;
	int		pos;
	char	buf[BUF_SIZE + 1];

	pos = 0;
	fd = open(path, O_RDONLY);
	if (fd == -1)
	{
		ft_error(path);
		return ;
	}
	while ((pos = read(fd, buf, BUF_SIZE)))
	{
		buf[pos] = 0;
		ft_putstr(buf);
	}
	close(fd);
}

int		main(int argc, char **argv)
{
	int i;

	i = 1;
	if (argc == 1)
		ft_type();
	else
	{
		while (i < argc)
		{
			if (argv[i][0] == '-' && argv[i][1] == 0)
			{
				ft_type();
				i++;
				continue ;
			}
			ft_print_file(argv[i]);
			i++;
		}
	}
	return (0);
}
