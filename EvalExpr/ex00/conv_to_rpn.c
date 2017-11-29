/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_to_rpn.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahrytsen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 22:41:41 by ahrytsen          #+#    #+#             */
/*   Updated: 2017/08/12 22:41:42 by ahrytsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int		prior_cmp(char op1, char op2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (g_opptab[i].opp != op1)
		i++;
	while (g_opptab[j].opp != op2)
		j++;
	return (g_opptab[i].prior - g_opptab[j].prior);
}

int		convertor(char *s, char *res, int i, t_stack **op_st)
{
	while (*s)
	{
		if ((*s >= '0' && *s <= '9') || *s == ' ')
			res[i++] = *s;
		if (*s == '-' || *s == '+' || *s == '/' || *s == '*' || *s == '%')
		{
			if (*op_st && prior_cmp((*op_st)->data, *s) >= 0)
			{
				res[i++] = pop(op_st);
				res[i++] = ' ';
				continue ;
			}
			push(op_st, *s);
		}
		else if (*s == '(')
			push(op_st, *s);
		else if (*s == ')')
		{
			res[i++] = ' ';
			while ((res[i] = pop(op_st)) != '(')
				i++;
		}
		s++;
	}
	return (i);
}

char	*conv_to_rpn(char *str)
{
	t_stack	*op_st;
	char	*res;
	int		i;

	res = malloc(ft_strlen(str));
	op_st = 0;
	i = convertor(str, res, 0, &op_st);
	while (op_st)
	{
		res[i] = ' ';
		i++;
		res[i] = pop(&op_st);
		i++;
	}
	res[i] = 0;
	return (res);
}
