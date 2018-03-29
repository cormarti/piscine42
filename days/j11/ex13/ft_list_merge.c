/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-rent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 15:54:51 by pde-rent          #+#    #+#             */
/*   Updated: 2017/09/21 02:02:13 by pde-rent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list	*item;

	if (*begin_list1)
	{
		item = *begin_list1;
		while (item->next)
			item = item->next;
		item->next = begin_list2;
	}
	else
		*begin_list1 = begin_list2;
}
