/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahrytsen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 20:10:42 by ahrytsen          #+#    #+#             */
/*   Updated: 2017/08/07 20:10:50 by ahrytsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))
{
	int count;

	count = 0;
	while (*tab)
	{
		if (f(*tab++))
			count++;
	}
	return (count);
}