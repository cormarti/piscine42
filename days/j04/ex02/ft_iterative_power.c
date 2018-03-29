/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-rent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/04 15:10:49 by pde-rent          #+#    #+#             */
/*   Updated: 2017/09/06 07:33:52 by pde-rent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	long res;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	res = nb;
	power--;
	while (power--)
		res = res * nb;
	if (res > 2147483647)
		return (0);
	return (res);
}
