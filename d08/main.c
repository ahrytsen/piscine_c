/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahrytsen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/02 21:16:15 by ahrytsen          #+#    #+#             */
/*   Updated: 2017/08/02 21:16:19 by ahrytsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ex06/ft_stock_par.h"
#include <unistd.h>
#include <stdio.h>
struct	s_stock_par	*ft_param_to_tab(int ac, char **av);
void				ft_show_tab(struct s_stock_par *par);

int					main(int argc, char **argv)
{
    struct s_stock_par *a;

	a = ft_param_to_tab(argc, argv);
	ft_show_tab(a);
	return (0);
}
