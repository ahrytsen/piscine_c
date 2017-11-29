/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahrytsen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/02 16:00:52 by ahrytsen          #+#    #+#             */
/*   Updated: 2017/08/02 16:00:54 by ahrytsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_print_params(int argc, char **argv)
{
	int i;

	i = 1;
	while (i < argc)
	{
		while (*argv[i])
			ft_putchar(*argv[i]++);
		ft_putchar('\n');
		i++;
	}
	return (0);
}

int		g_i;
int		g_j;
int		g_z;
char	*g_tmp;

int		main(int argc, char **argv)
{
	g_i = 0;
	while (g_i < argc)
	{
		g_j = 1;
		while (g_j < argc - 1 - g_i)
		{
			g_z = 0;
			while (argv[g_j][g_z] >= argv[g_j + 1][g_z])
			{
				if (argv[g_j][g_z] > argv[g_j + 1][g_z])
				{
					g_tmp = argv[g_j];
					argv[g_j] = argv[g_j + 1];
					argv[g_j + 1] = g_tmp;
					break ;
				}
				else
					g_z++;
			}
			g_j++;
		}
		g_i++;
	}
	ft_print_params(argc, argv);
}
