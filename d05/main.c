/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahrytsen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/30 14:19:43 by ahrytsen          #+#    #+#             */
/*   Updated: 2017/07/30 14:21:05 by ahrytsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//int		ft_putchar(char c);

//void	ft_putstr(char *str);
//void	ft_putnbr(int nb);
//int	ft_atoi(char *str);
//char	*ft_strcpy(char *dest, char *src);
//char	*ft_strncpy(char *dest, char *src, unsigned int n);
//char	*ft_strstr(char *str, char *to_find);
//int		ft_strcmp(char *s1, char *s2);
//int		ft_strncmp(char *s1, char *s2, unsigned int n);
//char	*ft_strupcase(char *str);
//char *ft_strlowcase(char *str);
//char *ft_strcapitalize(char *str);
//int ft_str_is_alpha(char *str);
//int		ft_str_is_numeric(char *str);
//int ft_str_is_lowercase(char *str);
//int ft_str_is_uppercase(char *str);
//int ft_str_is_printable(char *str);
//char *ft_strcat(char *dest, char *src);
char *ft_strncat(char *dest, char *src, int nb);
//unsigned int ft_strlcat(char *dest, char *src, unsigned int size);
//unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);
//void ft_putnbr_base(int nbr, char *base);

int		main()
{
	char dest[] = "Калькулятор переводит\n\t числа из одной системы счисления в любую другую.";
	char src[]  = "erthrjytkuyili;jhetrygdfh";
	// printf("\nSTRNCPY:\t%s\n\n", strncpy(dest, src, 19));
	// char dest1[] = "Калькулятор переводит\n\t числа из одной системы счисления в любую другую.";
	// char src1[]  = "Выперевести";
	printf("%s\n", ft_strncat(dest, src, 7));
// 	char str1[] = "This is a simple - ";
// 	char str2[] = "fegrjy";
// 	int nbr = -1313343242;
// 	ft_putnbr_base(nbr, base);
// 	int res = strncmp(str1, str2, 19);
//  puts (str1);
// 	printf("%c\n", '\n');
// 	puts (str2);
// 	printf("%c\n", '\n');
//  printf("%i\n", ft_strlcat(str1, str2, 5));
//  printf("%i\n", ft_strlcat(str1, str2, 5));
// 	printf("%c\n", '\n');
// 	puts (str1);
	return 0;
}
