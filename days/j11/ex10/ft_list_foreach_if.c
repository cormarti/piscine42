/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-rent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 15:54:43 by pde-rent          #+#    #+#             */
/*   Updated: 2017/09/21 03:21:32 by pde-rent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_foreach_if(
		t_list *begin_list, void (*f)(void *),
		void *data_ref, int (*cmp)())
{
	t_list	*item;

	item = begin_list;
	while (item != NULL)
	{
		if ((*cmp)(item->data, data_ref) == 0)
			(*f)(item->data);
		item = item->next;
	}
}
