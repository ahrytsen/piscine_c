/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahrytsen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/02 21:45:47 by ahrytsen          #+#    #+#             */
/*   Updated: 2017/08/02 21:45:48 by ahrytsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *res;
	int i;

	i = 0;
	if (min >= max)
		return (NULL);
	res = malloc((max - min) * sizeof(int));
	if (res == NULL)
		return (NULL);
	while (i < max - min)
	{
		res[i] = min + i;
		i++;
	}
	return (res);
}
