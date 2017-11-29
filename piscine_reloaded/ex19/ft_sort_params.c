/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahrytsen <ahrytsen@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/25 20:13:27 by ahrytsen          #+#    #+#             */
/*   Updated: 2017/10/25 21:16:38 by ahrytsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (!*s1 || !*s2)
			break ;
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int		ft_print_param(int ac, char **av)
{
	int i;

	i = 1;
	if (ac > 0)
	{
		while (i < ac)
		{
			while (*av[i])
				ft_putchar(*av[i]++);
			ft_putchar('\n');
			i++;
		}
	}
	return (0);
}

int		main(int ac, char **av)
{
	int		i;
	int		j;
	char	*tmp;

	i = 0;
	if (ac > 1)
	{
		while (i < ac)
		{
			j = 1;
			while (j < ac - 1)
			{
				if (ft_strcmp(av[j], av[j + 1]) > 0)
				{
					tmp = av[j];
					av[j] = av[j + 1];
					av[j + 1] = tmp;
				}
				j++;
			}
			i++;
		}
		ft_print_param(ac, av);
	}
	return (0);
}
