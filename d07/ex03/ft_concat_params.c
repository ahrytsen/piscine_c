/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahrytsen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/02 22:23:09 by ahrytsen          #+#    #+#             */
/*   Updated: 2017/08/02 22:23:11 by ahrytsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		size_argv(int argc, char **argv)
{
	int i;
	int j;
	int size;

	i = 1;
	size = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			size++;
			j++;
		}
		size++;
		i++;
	}
	return (size);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		j;
	int		z;
	char	*res;

	i = 1;
	z = 0;
	res = malloc(sizeof(char) * size_argv(argc, argv));
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			res[z] = argv[i][j];
			j++;
			z++;
		}
		i++;
		if (i < argc)
			res[z] = '\n';
		z++;
	}
	res[z] = 0;
	return (res);
}
