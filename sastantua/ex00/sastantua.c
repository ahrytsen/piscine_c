/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahrytsen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/30 14:16:29 by ahrytsen          #+#    #+#             */
/*   Updated: 2017/07/30 14:16:36 by ahrytsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

int		size_of_x(int size)
{
	int i;
	int it_size_x;
	int res;

	it_size_x = 6;
	i = 2;
	res = 7;
	while (i <= size)
	{
		res += it_size_x * 2;
		i++;
		if (i % 2 == 0)
			it_size_x += 2;
		else
			it_size_x++;
	}
	return (res);
}

int g_it;

void	print_line(int block_size_x, int start_pos, int dorsize, int is_handle)
{
	g_it = 1;
	while (g_it <= block_size_x)
	{
		if (g_it < start_pos)
			ft_putchar(' ');
		else if (g_it == start_pos)
			ft_putchar('/');
		else if (is_handle && g_it > block_size_x / 2 + dorsize / 2 - 1
			&& g_it <= block_size_x / 2 + dorsize / 2)
			ft_putchar('$');
		else if (dorsize && g_it > block_size_x / 2 - dorsize / 2
			&& g_it <= block_size_x / 2 + dorsize / 2 + 1)
			ft_putchar('|');
		else if (g_it >= start_pos && (g_it <= block_size_x - start_pos))
			ft_putchar('*');
		else if (g_it == block_size_x - start_pos + 1)
		{
			ft_putchar('\\');
			return ;
		}
		else
			ft_putchar(' ');
		g_it++;
	}
	return ;
}

int g_start_pos;
int g_i;
int g_it_start_pos;

void	print_block(int block_size_x, int block_size_y,
	int it_blocks, int dorsize)
{
	g_i = 2;
	g_start_pos = block_size_x / 2;
	g_it_start_pos = 5;
	while (g_i <= it_blocks)
	{
		g_start_pos -= g_it_start_pos;
		if (g_i % 2)
			g_it_start_pos += 2;
		else
			g_it_start_pos++;
		g_i++;
	}
	g_i = 1;
	while (g_i <= block_size_y)
	{
		if (g_i == it_blocks - dorsize + 3 + dorsize / 2 && it_blocks > 4)
			print_line(block_size_x, g_start_pos, dorsize, 1);
		else if (g_i >= it_blocks - dorsize + 3)
			print_line(block_size_x, g_start_pos, dorsize, 0);
		else
			print_line(block_size_x, g_start_pos, 0, 0);
		ft_putchar('\n');
		g_i++;
		g_start_pos--;
	}
}

void	sastantua(int size)
{
	int block_size_x;
	int block_size_y;
	int dorsize;
	int it_blocks;

	block_size_y = 3;
	block_size_x = size_of_x(size);
	it_blocks = 1;
	dorsize = size;
	if (size % 2 == 0)
		dorsize--;
	while (it_blocks <= size)
	{
		if (it_blocks == size)
			print_block(block_size_x, block_size_y, it_blocks, dorsize);
		else
			print_block(block_size_x, block_size_y, it_blocks, 0);
		block_size_y++;
		it_blocks++;
	}
	return ;
}
