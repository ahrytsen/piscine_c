/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahrytsen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/01 11:05:49 by ahrytsen          #+#    #+#             */
/*   Updated: 2017/08/01 11:05:52 by ahrytsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

int		is_unique(char *str)
{
	int i;
	int j;

	i = 0;
	while (str[i])
	{
		j = i + 1;
		while (str[j])
		{
			if (str[i] == str[j])
			{
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}

int		base_is_valid(char *str)
{
	int i;
	int is_valid;

	i = 0;
	is_valid = 1;
	while (str[i])
	{
		if (str[i] < ' ' || str[i] == '+' || str[i] == '-' || str[i] > 126)
			is_valid = 0;
		i++;
	}
	if (i == 0)
		is_valid = 0;
	if (is_valid)
		is_valid = is_unique(str);
	return (is_valid);
}

void	print_res(char *z, int j)
{
	while (j >= 0)
	{
		ft_putchar(z[j]);
		j--;
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		i;
	int		j;
	char	z[2048];

	i = 0;
	j = 0;
	if (base_is_valid(base))
	{
		while (base[i])
			i++;
		if (nbr < 0)
		{
			ft_putchar('-');
			nbr *= -1;
		}
		while (nbr >= i)
		{
			z[j] = base[nbr % i];
			nbr /= i;
			j++;
		}
		z[j] = base[nbr];
		z[j + 1] = 0;
		print_res(z, j);
	}
}
