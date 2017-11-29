/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahrytsen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/27 20:53:25 by ahrytsen          #+#    #+#             */
/*   Updated: 2017/07/27 20:56:49 by ahrytsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	get_first_non_space(char *str)
{
	int i;

	i = 0;
	while (str[i] > 0 && str[i] <= 32)
	{
		i += 1;
	}
	if (str[i] != 0)
	{
		return (i);
	}
	return (-1);
}

int	get_string_len(char *str)
{
	int len;

	len = 0;
	while (str[len] != 0)
	{
		len += 1;
	}
	return (len);
}

int	is_digit(char c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}

int	convert_digits_to_int(char *digit_array)
{
	int i;
	int result;
	int mult;

	i = get_string_len(digit_array) - 1;
	result = 0;
	mult = 1;
	while (i >= 0)
	{
		digit_array[i] -= 48;
		result += mult * digit_array[i];
		mult *= 10;
		i -= 1;
	}
	return (result);
}

int	ft_atoi(char *str)
{
	int i;
	int y;

	i = get_first_non_space(str);
	y = 0;
	if (str[i] < '0' || str[i] > '9' || i == -1)
	{
		return (0);
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		str[y] = str[i];
		i += 1;
		y += 1;
	}
	str[y] = 0;
	return (convert_digits_to_int(str));
}
