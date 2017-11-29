/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahrytsen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/05 19:37:59 by ahrytsen          #+#    #+#             */
/*   Updated: 2017/08/05 19:38:00 by ahrytsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

char				**ft_split_whitespaces(char *str);

int					str_len(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char				*ft_strdup(char *src)
{
	char	*copy;
	int		len;

	copy = (char*)malloc(str_len(src) + 1);
	if (copy == NULL)
		return (NULL);
	else
	{
		len = 0;
		while (src[len])
		{
			copy[len] = src[len];
			len++;
		}
		copy[len] = 0;
	}
	return (copy);
}

struct	s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	int			i;
	t_stock_par	*res;

	res = (struct s_stock_par *)malloc(sizeof(struct s_stock_par) * (ac + 1));
	i = 0;
	while (i < ac)
	{
		res[i].str = av[i];
		res[i].size_param = str_len(av[i]);
		res[i].copy = ft_strdup(av[i]);
		res[i].tab = ft_split_whitespaces(av[i]);
		i++;
	}
	res[i].str = NULL;
	return (res);
}
