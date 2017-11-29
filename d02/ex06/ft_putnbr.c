/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahrytsen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/27 11:34:35 by ahrytsen          #+#    #+#             */
/*   Updated: 2017/07/27 23:42:36 by ahrytsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_putnbr(int nb)
{
	int temp;
	int i;

	if(nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	i = 10;
	temp = nb;
	while (temp >= 10)
	{
		temp = temp / 10;
		if (temp < 10)
		{
			ft_putchar(temp + 48);
			temp = nb % i;
			i = 1;
		}
		i *= 10;
	}
	if (0 < temp && temp < 10)
		ft_putchar(temp + 48);
	return ;
}
