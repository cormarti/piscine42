/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operands2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-rent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/10 02:10:47 by pde-rent          #+#    #+#             */
/*   Updated: 2017/09/20 03:09:10 by pde-rent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libop.h"

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
