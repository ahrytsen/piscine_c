/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahrytsen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/03 09:36:33 by ahrytsen          #+#    #+#             */
/*   Updated: 2017/08/03 09:36:35 by ahrytsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
}

int		elements(char *str)
{
	int i;
	int res;

	i = 0;
	res = 0;
	while (str[i])
	{
		if (str[i] == '\n' || str[i] == '\t' || str[i] == ' ')
			res++;
		i++;
	}
	return (res + 1);
}

char	**ft_split_whitespaces(char *str)
{
	int		i;
	int		j;
	char	**res;

	i = 0;
	j = 0;
	res = (char**)malloc(sizeof(char*) * elements(str) + 1);
	while (str[i])
	{
		while (str[i] != '\n' && str[i] != '\t' && str[i] != ' ' && str[i])
			i++;
		if (i)
		{
			res[j] = (char*)malloc(sizeof(char) * (i + 1));
			ft_strncpy(res[j], str, i);
			str = str + i;
			i = 0;
			j++;
			continue ;
		}
		str++;
	}
	res[j] = NULL;
	return (res);
}
