/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   allheader.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahrytsen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 21:11:40 by ahrytsen          #+#    #+#             */
/*   Updated: 2017/08/07 21:14:39 by ahrytsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ALLHEADER_H
# define ALLHEADER_H

# include <unistd.h>

typedef	struct	s_opp
{
	char	*opp;
	void	(*func)(int, int);
}				t_opp;

int				ft_strcmp(char *s1, char *s2);
int				ft_atoi(char *str);
void			ft_putnbr(int nb);
void			ft_sub(int a, int b);
void			ft_add(int a, int b);
void			ft_mul(int a, int b);
void			ft_div(int a, int b);
void			ft_mod(int a, int b);
void			ft_usage(int a, int b);
void			ft_putchar(char c);
void			ft_putstr(char *str);
void			calculator(int arg1, char *operateur, int arg2);

#endif
