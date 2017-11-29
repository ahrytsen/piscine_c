/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahrytsen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 20:28:18 by ahrytsen          #+#    #+#             */
/*   Updated: 2017/08/07 20:28:20 by ahrytsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int res;
	int i;

	res = 0;
	i = 0;
	while (i < length - 1)
	{
		if ((f(tab[i], tab[i + 1]) > 0 && res < 0)
			|| (f(tab[i], tab[i + 1]) < 0 && res > 0))
			return (0);
		else
		{
			res = f(tab[i], tab[i + 1]);
			i++;
		}
	}
	return (1);
}
