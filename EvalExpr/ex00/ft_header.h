/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_header.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahrytsen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 15:35:40 by ahrytsen          #+#    #+#             */
/*   Updated: 2017/08/12 15:35:41 by ahrytsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEADER_H
# define FT_HEADER_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

typedef	struct	s_opp
{
	char	opp;
	int		prior;
	int		(*func)(int, int);
}				t_opp;
typedef struct	s_stack
{
	int				data;
	struct s_stack	*next;
}				t_stack;
int				eval_expr(char *str);
int				ft_strlen(char *str);
int				ft_atoi(char *str);
void			ft_putchar(char c);
void			ft_putnbr(int nb);
int				ft_sub(int a, int b);
int				ft_add(int a, int b);
int				ft_mul(int a, int b);
int				ft_div(int a, int b);
int				ft_mod(int a, int b);
int				calculator(int a, char operateur, int b);
void			push(t_stack **prev, int nb);
int				pop(t_stack **top);
t_stack			*create_elem(int nb);
char			*conv_to_rpn(char *str);
extern t_opp	g_opptab[];

#endif
