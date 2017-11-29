/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahrytsen <ahrytsen@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/25 21:45:27 by ahrytsen          #+#    #+#             */
/*   Updated: 2017/10/26 18:32:28 by ahrytsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int				i;
	unsigned int	j;
	int				*range;

	if (min >= max)
		return (0);
	i = min;
	j = max - min;
	range = (int*)malloc(sizeof(int) * (j));
	j = 0;
	while (i < max)
		range[j++] = i++;
	return (range);
}
