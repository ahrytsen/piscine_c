/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahrytsen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/29 19:23:40 by ahrytsen          #+#    #+#             */
/*   Updated: 2017/07/29 19:23:43 by ahrytsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int i;

	i = 2;
	if (nb < 4)
		return (0);
	else if (nb == 4)
		return (4);
	else
	{
		while (i <= nb / 4)
		{
			if (nb == (i * i))
				return (i);
			i++;
		}
		return (0);
	}
}
