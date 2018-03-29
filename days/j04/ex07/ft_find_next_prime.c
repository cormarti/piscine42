/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_next_prime.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-rent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/06 06:35:16 by pde-rent          #+#    #+#             */
/*   Updated: 2017/09/07 06:29:10 by pde-rent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int i;

	if (nb <= 1)
		return (2);
	i = 2;
	while (i <= (nb / i))
	{
		if (nb % i == 0)
			return (ft_is_prime(nb + 1));
		i++;
	}
	return (nb);
}

int		ft_find_next_prime(int nb)
{
	return (ft_is_prime(nb));
}
