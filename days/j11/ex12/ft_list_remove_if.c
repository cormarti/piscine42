/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-rent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 15:54:47 by pde-rent          #+#    #+#             */
/*   Updated: 2017/09/21 02:02:05 by pde-rent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*prev_item;
	t_list	*item;
	t_list	*tmp;

	item = *begin_list;
	prev_item = NULL;
	tmp = NULL;
	while (item != NULL)
	{
		if ((*cmp)(item->data, data_ref) == 0)
		{
			if (item == *begin_list)
				*begin_list = item->next;
			else
				prev_item->next = item->next;
			tmp = item;
			item = item->next;
			free(tmp);
		}
		else
		{
			prev_item = item;
			item = item->next;
		}
	}
}
