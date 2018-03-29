/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-rent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 15:54:29 by pde-rent          #+#    #+#             */
/*   Updated: 2017/09/21 02:16:15 by pde-rent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*item;
	t_list	*next_item;
	int		i;

	next_item = NULL;
	item = NULL;
	i = 0;
	while (i < ac)
	{
		item = ft_create_elem(av[i]);
		item->next = next_item;
		next_item = item;
		i++;
	}
	return (item);
}
