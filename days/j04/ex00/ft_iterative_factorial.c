/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-rent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/04 15:06:39 by pde-rent          #+#    #+#             */
/*   Updated: 2017/09/07 06:09:15 by pde-rent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	facto;
	int res;

	i = 1;
	facto = 1;
	res = 1;
	if (nb < 0 || nb > 12)
		return (0);
	while (i <= nb)
	{
		res = facto * i;
		if (res / i != facto)
			return (0);
		i++;
		facto = res;
	}
	return (facto);
}
