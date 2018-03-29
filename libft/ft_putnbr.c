/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-rent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/05 01:47:15 by pde-rent          #+#    #+#             */
/*   Updated: 2017/09/12 09:53:26 by pde-rent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_light.h"

void	ft_putnbr(int nb)
{
	unsigned int res;

	res = (unsigned int)ABS(nb);
	if (nb < 0)
		ft_putchar('-');
	if (res >= 10)
		ft_putnbr(res / 10);
	ft_putchar((res % 10) + '0');
}
