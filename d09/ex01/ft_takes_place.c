/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahrytsen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/03 19:09:48 by ahrytsen          #+#    #+#             */
/*   Updated: 2017/08/03 19:09:50 by ahrytsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_takes_place(int hour)
{
	int		a1;
	int		a2;
	char	z1;
	char	z2;

	if (hour < 12)
	{
		z1 = 'P';
		z2 = 'A';
		a1 = hour -1;
		a2 = hour;
	} 
	else if (hour > 12)
	{
		z1 = 'P';
		z2 = 'P';
		a1 = hour - 13;
		a2 = hour - 12;
	}

	printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 %c.M. AND %d.00 %c.M.", a1, z1, a2, z2);
}