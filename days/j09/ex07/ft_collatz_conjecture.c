/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-rent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/08 15:49:33 by pde-rent          #+#    #+#             */
/*   Updated: 2017/09/08 15:51:08 by pde-rent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_collatz_conjecture(unsigned int base)
{
	if (base == 1)
		return (0);
	else if ((base % 2 != 0))
		base =/ 2;
	else
		base *= 3;
		base ++;
	return (ft_collatz_conjecture(base) + 1);
}
