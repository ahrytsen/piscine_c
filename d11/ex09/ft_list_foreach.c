/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahrytsen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 23:12:08 by ahrytsen          #+#    #+#             */
/*   Updated: 2017/08/09 23:12:09 by ahrytsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "ft_list.h"
void	ft_list_push_front(t_list **begin_list, void *data);
void	ft_list_reverse(t_list **begin_list)
{
	t_list *tmp;
	t_list *prev;

	prev = 0;
	while (*begin_list)
	{
		tmp = (*begin_list)->next;
		(*begin_list)->next = prev;
		prev = *begin_list;
		*begin_list = tmp;
	}
	*begin_list = prev;
}

int main()
{
	t_list *jopa;
	jopa = 0;
	ft_list_push_front(&jopa, "jopa slona");
	ft_list_push_front(&jopa, "bober");
	ft_list_push_front(&jopa, "lox");
	ft_list_push_front(&jopa, "jopa slona");
	ft_list_push_front(&jopa, "bober");
	ft_list_push_front(&jopa, "lox");
	ft_list_reverse(&jopa);
	while (jopa)
	{
		printf("%s\n", jopa->data);
		jopa = jopa->next;
	}
	return 0;
}
