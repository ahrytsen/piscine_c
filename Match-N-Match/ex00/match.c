/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahrytsen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/06 12:04:07 by ahrytsen          #+#    #+#             */
/*   Updated: 2017/08/06 12:04:09 by ahrytsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strstr(char *str, char *to_find)
{
	int i;
	int j;

	i = 0;
	while (str[i])
	{
		j = 0;
		while (to_find[j] && to_find[j] != '*')
		{
			if (str[i + j] == to_find[j])
				j++;
			else
				break ;
		}
		if (to_find[j] == 0 || to_find[j] == '*')
			return (i+j);
		i++;
	}
	return (0);
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] == s2[i])
			i++;
		else
			return (s1[i] - s2[i]);
	}
	return (0);
}

int		match(char *s1, char *s2)
{
	int res;
	int i;
	int j;

	res = 1;
	i = 0;
	j = 0;
	while(*s1 && res)
	{
		if(*s2 == '*')
		{
			s2++;
			i++;
			continue ;
		}
		else
		{
			if(i > 0)
				j = ft_strstr(s1, s2);
		}
		s1++;
	}
	return (res ? 1 : 0);
}
