/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahrytsen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/31 12:55:21 by ahrytsen          #+#    #+#             */
/*   Updated: 2017/08/01 21:07:37 by ahrytsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int 		g_i = 0;
int 		g_j = 0;
long int 	g_res = 0;
int 		g_is_positive = 1;

int		ft_atoi(char *str)
{
	while (str[g_i])
	{
		if (g_j == 0 && (str[g_i] == 32 || str[g_i] == '-'
			|| str[g_i] == '+' || (str[g_i] > 8 && str[g_i] < 14)))
		{
			if (str[g_i] == '-')
			{
				g_is_positive = -1;
				g_j++;
			}
			else if (str[g_i] == '+')
				g_j++;
		}
		else if (str[g_i] < '0' || str[g_i] > '9')
			return (g_res * g_is_positive);
		else if (str[g_i] >= '0' && str[g_i] <= '9')
		{
			g_res = g_res * 10 + (str[g_i] - '0');
			g_j++;
		}
		g_i++;
	}
	return (g_res * g_is_positive);
}
