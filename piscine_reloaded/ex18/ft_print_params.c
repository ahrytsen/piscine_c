/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahrytsen <ahrytsen@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/25 19:32:46 by ahrytsen          #+#    #+#             */
/*   Updated: 2017/10/25 19:48:49 by ahrytsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int ac, char **av)
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
