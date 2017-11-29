/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahrytsen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/31 11:21:20 by ahrytsen          #+#    #+#             */
/*   Updated: 2017/07/31 11:21:23 by ahrytsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	long int	temp;
	long int	nbr;
	int			i;

	nbr = nb;
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr *= -1;
	}
	temp = nbr;
	i = 1;
	while (temp > 9)
	{
		temp /= 10;
		i *= 10;
	}
	while (i > 1)
	{
		ft_putchar((nbr / i) % 10 + 48);
		i /= 10;
	}
	ft_putchar((nbr / i) % 10 + 48);
	return ;
}
