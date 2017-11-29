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

int		ft_atoi(char *str);
void	ft_putnbr(int nb);
int		multiply(int a, int b);
int		modulo(int a, int b);
int		divide(int a, int b);
int		minus(int a, int b);
int		plus(int a, int b);
void	ft_putchar(char c);
void	ft_putstr(char *str);
int		calculator(int arg1, char operateur, int arg2);

#endif
