/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-rent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/08 16:28:33 by pde-rent          #+#    #+#             */
/*   Updated: 2017/09/08 16:29:50 by pde-rent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_max(int *tab, int length)
{
	int	i;
	int	array_max;

	i = 0;
	array_max = tab[i];
	while (i < length)
	{
		if (tab[i] > array_max)
			array_max = tab[i];
		i++;
	}
	return (array_max);
}
