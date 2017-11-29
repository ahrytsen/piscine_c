/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   evalexpr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahrytsen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 15:32:00 by ahrytsen          #+#    #+#             */
/*   Updated: 2017/08/12 15:32:02 by ahrytsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

t_opp g_opptab[] =
{
	{'-', 2, &ft_sub},
	{'+', 2, &ft_add},
	{'*', 3, &ft_mul},
	{'/', 3, &ft_div},
	{'%', 3, &ft_mod},
	{'(', 1, 0},
	{')', 1, 0},
};

int		calculator(int a, char operateur, int b)
{
	int i;

	i = 0;
	while (g_opptab[i].opp)
	{
		if (g_opptab[i].opp == operateur)
			break ;
		i++;
	}
	return (g_opptab[i].func(a, b));
}

int		eval_expr(char *str)
{
	t_stack *main_stack;

	main_stack = 0;
	str = conv_to_rpn(str);
	while (*str)
	{
		if (*str >= '0' && *str <= '9')
		{
			push(&main_stack, ft_atoi(str));
			while (*str >= '0' && *str <= '9')
				str++;
		}
		else if (*str == '-' || *str == '+' || *str == '/'
			|| *str == '*' || *str == '%')
		{
			push(&main_stack, calculator(pop(&main_stack),
				*str, pop(&main_stack)));
		}
		str++;
	}
	return (pop(&main_stack));
}

int		main(int ac, char **av)
{
	if (ac > 1)
	{
		ft_putnbr(eval_expr(av[1]));
		ft_putchar('\n');
	}
	return (0);
}
