/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahrytsen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 19:52:33 by ahrytsen          #+#    #+#             */
/*   Updated: 2017/08/12 19:52:34 by ahrytsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

t_stack	*create_elem(int nb)
{
	t_stack *res;

	res = malloc(sizeof(t_stack));
	res->next = 0;
	res->data = nb;
	return (res);
}

void	push(t_stack **prev, int nb)
{
	t_stack *tmp;

	if (!*prev)
		*prev = create_elem(nb);
	else
	{
		tmp = create_elem(nb);
		tmp->next = *prev;
		*prev = tmp;
	}
}

int		pop(t_stack **top)
{
	int		res;
	t_stack	*tmp;

	if (!*top)
		return (0);
	res = (*top)->data;
	tmp = (*top)->next;
	free(*top);
	*top = tmp;
	return (res);
}
