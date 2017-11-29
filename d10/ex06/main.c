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

int	calculator(int arg1, char operateur, int arg2)
{
	int		i;
	char	op[5];
	int		(*funcs[5])(int, int);

	i = 0;
	op[0] = '+';
	op[1] = '-';
	op[2] = '*';
	op[3] = '/';
	op[4] = '%';
	funcs[0] = &plus;
	funcs[1] = &minus;
	funcs[2] = &multiply;
	funcs[3] = &divide;
	funcs[4] = &modulo;
	while (i < 5)
	{
		if (op[i] == operateur)
			break ;
		i++;
	}
	return (funcs[i](arg1, arg2));
}

int	main(int argc, char **argv)
{
	int		arg1;
	int		arg2;
	char	operateur;

	if (argc != 4)
		return (0);
	arg1 = ft_atoi(argv[1]);
	arg2 = ft_atoi(argv[3]);
	operateur = *argv[2];
	if ((operateur != '-' && operateur != '+' && operateur != '*'
			&& operateur != '/' && operateur != '%') || argv[2][1] != '\0')
		ft_putchar('0');
	else if (operateur == '/' && arg2 == 0)
		ft_putstr("Stop : division by zero");
	else if (operateur == '%' && arg2 == 0)
		ft_putstr("Stop : modulo by zero");
	else
		ft_putnbr(calculator(arg1, operateur, arg2));
	ft_putchar('\n');
	return (0);
}
