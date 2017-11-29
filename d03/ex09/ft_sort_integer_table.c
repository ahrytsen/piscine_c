/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahrytsen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/27 20:59:43 by ahrytsen          #+#    #+#             */
/*   Updated: 2017/07/27 21:00:12 by ahrytsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_integer_table(int *tab, int size)
{
	int tmp;
	int it;
	int it2;

	it = 0;
	while (it < size)
	{
		it2 = 0;
		while (it2 < size - 1)
		{
			if (tab[it2] > tab[it2 + 1])
			{
				tmp = tab[it2];
				tab[it2] = tab[it2 + 1];
				tab[it2 + 1] = tmp;
			}
			it2++;
		}
		it++;
	}
}
