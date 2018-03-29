/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-rent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 15:54:39 by pde-rent          #+#    #+#             */
/*   Updated: 2017/09/21 02:17:04 by pde-rent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list	*prev_item;
	t_list	*item;
	t_list	*next_item;

	prev_item = NULL;
	item = *begin_list;
	while (item != NULL)
	{
		next_item = item->next;
		item->next = prev_item;
		prev_item = item;
		item = next_item;
	}
	*begin_list = prev_item;
}
