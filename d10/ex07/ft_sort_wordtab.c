/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahrytsen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/08 12:24:43 by ahrytsen          #+#    #+#             */
/*   Updated: 2017/08/08 12:24:48 by ahrytsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	sorting(char **tab, int i, int j, int z)
{
	char	*tmp;

	while (tab[i])
	{
		j = 0;
		while (tab[j + 1])
		{
			z = 0;
			while (tab[j][z] >= tab[j + 1][z])
			{
				if (tab[j][z] > tab[j + 1][z])
				{
					tmp = tab[j];
					tab[j] = tab[j + 1];
					tab[j + 1] = tmp;
					break ;
				}
				z++;
			}
			j++;
		}
		i++;
	}
}

void	ft_sort_wordtab(char **tab)
{
	int		i;
	int		j;
	int		z;

	i = 0;
	j = 0;
	z = 0;
	sorting(tab, i, j, z);
}
