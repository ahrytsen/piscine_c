/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahrytsen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/01 00:03:14 by ahrytsen          #+#    #+#             */
/*   Updated: 2017/08/01 00:03:16 by ahrytsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_uppercase(char *str)
{
	int i;
	int is_uppercase;

	i = 0;
	is_uppercase = 1;
	while (str[i])
	{
		if (str[i] < 'A' || str[i] > 'Z')
			is_uppercase = 0;
		i++;
	}
	return (is_uppercase);
}
