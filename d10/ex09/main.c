/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahrytsen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 21:00:48 by ahrytsen          #+#    #+#             */
/*   Updated: 2017/08/07 21:00:50 by ahrytsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "allheader.h"
#include "ft_opp.h"

void	ft_usage(int a, int b)
{
	a = 0;
	b = 0;
	ft_putstr("error : only [");
	while (g_opptab[a].opp)
	{
		ft_putchar(' ');
		ft_putstr(g_opptab[a].opp);
		a++;
	}
	ft_putstr("] are accepted.");
}

void	calculator(int arg1, char *operateur, int arg2)
{
	int i;

	i = 0;
	while (*g_opptab[i].opp)
	{
		if (ft_strcmp(g_opptab[i].opp, operateur) == 0)
		{
			g_opptab[i].func(arg1, arg2);
			return ;
		}
		i++;
	}
	g_opptab[i].func(arg1, arg2);
}

int		main(int argc, char **argv)
{
	int		arg1;
	int		arg2;
	char	*operateur;

	if (argc != 4)
		return (0);
	arg1 = ft_atoi(argv[1]);
	arg2 = ft_atoi(argv[3]);
	operateur = argv[2];
	calculator(arg1, operateur, arg2);
	ft_putchar('\n');
	return (0);
}
