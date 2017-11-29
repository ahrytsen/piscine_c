/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahrytsen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/31 23:08:51 by ahrytsen          #+#    #+#             */
/*   Updated: 2017/07/31 23:08:52 by ahrytsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_numeric(char *str)
{
	int i;
	int is_non_digit;

	i = 0;
	is_non_digit = 1;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			is_non_digit = 0;
		i++;
	}
	return (is_non_digit);
}
