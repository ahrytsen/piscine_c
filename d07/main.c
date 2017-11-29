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

#include <stdio.h>

//char *ft_strdup(char *src);
//int *ft_range(int min, int max);
//int ft_ultimate_range(int **range, int min, int max);
//char *ft_concat_params(int argc, char **argv);
char **ft_split_whitespaces(char *str);
void ft_print_words_tables(char **tab);

int main()
{
	char **s1;
	char s2[] = "sdgdhfghf   rgdhg rrrr  \thhdfsdb\r wqvscc JOPA";
	s1 = ft_split_whitespaces(s2);
	ft_print_words_tables(s1);

}
