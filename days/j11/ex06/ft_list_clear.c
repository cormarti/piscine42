/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-rent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 15:54:34 by pde-rent          #+#    #+#             */
/*   Updated: 2017/09/21 02:01:10 by pde-rent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list	*next;
	t_list	*item;

	item = *begin_list;
	while (item != NULL)
	{
		next = item->next;
		free(item);
		item = next;
	}
	*begin_list = NULL;
}
