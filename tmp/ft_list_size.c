/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-rent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 15:54:22 by pde-rent          #+#    #+#             */
/*   Updated: 2017/09/18 19:37:15 by pde-rent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	t_list	*item;
	int		i;
	
	item = begin_list;
	i = 0;
	if (item)
	{
		i = 1;
		while (item->next)
		{
			item = item->next;
			i++;
		}
	}
	return (i);
}