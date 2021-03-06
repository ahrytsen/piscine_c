/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahrytsen <ahrytsen@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/24 21:39:08 by ahrytsen          #+#    #+#             */
/*   Updated: 2017/10/25 18:36:37 by ahrytsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int res;

	res = 1;
	if (nb <= 0)
		return (0);
	while (res <= 46340)
	{
		if (nb == res * res)
			return (res);
		res++;
	}
	return (0);
}
