/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahrytsen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/31 23:33:14 by ahrytsen          #+#    #+#             */
/*   Updated: 2017/07/31 23:33:15 by ahrytsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_lowercase(char *str)
{
	int i;
	int is_lowercase;

	i = 0;
	is_lowercase = 1;
	while (str[i])
	{
		if (str[i] < 'a' || str[i] > 'z')
			is_lowercase = 0;
		i++;
	}
	return (is_lowercase);
}
