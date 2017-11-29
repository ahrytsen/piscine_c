/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahrytsen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/31 21:43:26 by ahrytsen          #+#    #+#             */
/*   Updated: 2017/07/31 21:43:29 by ahrytsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int i;
	int j;

	i = 0;
	while (str[i])
	{
		j = 0;
		while ((str[i + j] >= 'a' && str[i] <= 'z')
			|| (str[i + j] >= 'A' && str[i + j] <= 'Z')
			|| (str[i + j] >= '0' && str[i + j] <= '9'))
		{
			if (j == 0 && str[i + j] >= 'a' && str[i + j] <= 'z')
				str[i + j] -= 32;
			else if (j && str[i + j] >= 'A' && str[i + j] <= 'Z')
				str[i + j] += 32;
			j++;
		}
		if (j > 0)
			i += j + 1;
		else
			i++;
	}
	return (str);
}
