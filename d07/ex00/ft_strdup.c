/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahrytsen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/02 21:14:54 by ahrytsen          #+#    #+#             */
/*   Updated: 2017/08/02 21:14:56 by ahrytsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*copy;
	int		len;

	len = 0;
	while (src[len])
		len++;
	copy = (char*)malloc(len + 1);
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
