/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   more.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-rent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/10 02:10:47 by pde-rent          #+#    #+#             */
/*   Updated: 2017/09/13 15:55:09 by pde-rent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_light.h"

int		ft_pow(int nb, int power);

int		gcdr(int x, int y)
{
	if (x == 0)
		return (y);
	return (gcdr(y % x, x));
}

int		sum(int x, int y)
{
	return (x + y);
}

int		sub(int x, int y)
{
	return (x - y);
}

int		mult(int x, int y)
{
	return (x * y);
}

int		div(int x, int y)
{
	return (x / y);
}

int		mod(int x, int y)
{
	return (x % y);
}

int		power(int x, int y)
{
	return (ft_pow(x, y));
}