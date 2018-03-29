/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-rent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/14 16:38:38 by pde-rent          #+#    #+#             */
/*   Updated: 2017/09/18 20:05:23 by pde-rent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

char				*ft_strdup(char *src)
{
	int				i;
	int				src_len;
	char			*str;

	i = -1;
	src_len = 0;
	while (src[src_len])
		src_len++;
	str = (char*)malloc(sizeof(*str) * (src_len + 1));
	while (++i < src_len)
		str[i] = src[i];
	str[i] = 0;
	return (str);
}

t_stock_par			*ft_param_to_tab(int ac, char **av)
{
	t_stock_par		*item;
	int				i;
	int				j;

	if ((item = (t_stock_par*)malloc(sizeof(t_stock_par) * (ac + 1))) == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
			j++;
		item[i].size_param = j;
		item[i].str = av[i];
		item[i].copy = ft_strdup(av[i]);
		item[i].tab = ft_split_whitespaces(av[i]);
		i++;
	}
	item[i].str = 0;
	return (item);
}
