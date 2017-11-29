/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahrytsen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/28 12:15:03 by ahrytsen          #+#    #+#             */
/*   Updated: 2017/07/28 12:54:39 by ahrytsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int tmp;

	if (power < 0)
		return (0);
	else
	{
		tmp = 1;
		while (power > 0)
		{
			tmp = nb * tmp;
			power--;
		}
		return (tmp);
	}
}
