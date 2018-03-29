/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-rent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/13 11:06:50 by pde-rent          #+#    #+#             */
/*   Updated: 2017/09/14 18:21:33 by pde-rent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int		i;
	int		j;
	int		rng;

	j = -1;
	rng = max - min;
	range = (int**)malloc(sizeof(*range) * (rng + 1));
	while (++j < rng)
		range[j] = (int*)malloc(sizeof(range) * (rng + 1));
	if (rng <= 0)
		return (rng);
	i = -1;
	while (min < max)
	{
		*range[++i] = min;
		printf("%d\n", *range[i]);
		min++;
	}
	return (rng);
}

int main()
{
	int **test;
	ft_ultimate_range(test, -5, 10);
	return 0;
}