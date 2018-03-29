/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlux <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/16 21:09:33 by tlux              #+#    #+#             */
/*   Updated: 2017/09/19 18:59:57 by tlux             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libsq.h"
#include <stdio.h>

void	print_table(char **tab, int *max, char fill)
{
	int i;
	int j;

	i = 1;
	j = 1;
	int x = 0;
	while (x < 20)
	{
		printf("%.*s",21,tab[x]);
		x++;
	}
	while (tab[j][0] != '\0')
	{
		while (tab[j][i] != '\n')
		{
			if (j > (max[1] - max[0]) && j <= max[1])
				if (i > (max[2] - max[0]) && i <= max[2])
					tab[j][i] = fill;
			ft_putchar(tab[j][i]);
			i++;
		}
		printf("%d\n", i);
		ft_putchar('\n');
		i = 1;
		j++;
	}
}
