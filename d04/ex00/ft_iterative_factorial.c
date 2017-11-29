/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahrytsen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/28 09:13:52 by ahrytsen          #+#    #+#             */
/*   Updated: 2017/07/28 17:58:21 by ahrytsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int res;

	if (nb == 0)
		return (1);
	else if (nb < 0)
		return (0);
	else
	{
		res = nb;
		while (nb > 1)
		{
			nb--;
			res *= nb;
		}
		return (res);
	}
}
