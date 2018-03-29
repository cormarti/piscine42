/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-rent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/13 11:06:41 by pde-rent          #+#    #+#             */
/*   Updated: 2017/09/16 15:52:36 by pde-rent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_light.h"

char	*ft_strdup(char *src)
{
	int		i;
	int		src_len;
	char	*str;

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
