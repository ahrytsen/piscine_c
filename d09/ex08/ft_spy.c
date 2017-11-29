/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahrytsen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/04 01:53:49 by ahrytsen          #+#    #+#             */
/*   Updated: 2017/08/04 01:53:51 by ahrytsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;

	i = 0;
	while (str[i])
	{
		j = 0;
		while (to_find[j])
		{
			if (str[i + j] == to_find[j])
				j++;
			else
				break ;
		}
		if (to_find[j] == 0)
			return (&str[i]);
		i++;
	}
	return (0);
}

int main(int argc, char const *argv[])
{
	argc = 0;
	argv[argc] = 0;
	write(1, "Aaaaaaaaaaaaaaaaaaaaaaaaa", 58);
	return (0);
}