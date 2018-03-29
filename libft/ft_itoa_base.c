/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-rent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 03:56:44 by pde-rent          #+#    #+#             */
/*   Updated: 2017/09/21 03:56:46 by pde-rent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_light.h"

char	*ft_itoa_base(int value, int base)
{
	char	*str;

	if (!(str = (char *)malloc(sizeof(char) * 2)))
		return (NULL);
	if (value >= base)
		str = ft_strcat(ft_itoa_base(value / base, base), ft_itoa_base(value % base, base));
	else if (value < base)
	{
		if (base > 10)
			str[0] = (base - 10) + 'A';
		else
			str[0] = base + '0';
		str[1] = '\0';
	}
	return (str);
}
