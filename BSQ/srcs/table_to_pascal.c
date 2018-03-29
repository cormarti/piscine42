/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   table_to_pascal.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlux <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/15 13:44:32 by tlux              #+#    #+#             */
/*   Updated: 2017/09/19 18:57:57 by tlux             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libsq.h"

int		min_around(int j, int i, int **pascal)
{
	int min;

	min = 0;
	min = pascal[j - 1][i];
	if (pascal[j - 1][i - 1] < min)
		min = pascal[j - 1][i - 1];
	if (pascal[j][i - 1] < min)
		min = pascal[j][i - 1];
	return (min + 1);
}

int		*ft_pascal(char **tab, int **pascal, char fill)
{
	int i;
	int j;
	int max[3];

	max[0] = -1;
	i = 0;
	j = 1;
	while (tab[j][0] != '\0')
	{
		while (tab[j][++i] != '\n')
			if (pascal[j][i] == 1)
			{
				pascal[j][i] = min_around(j, i, pascal);
				if (pascal[j][i] > max[0])
				{
					max[0] = pascal[j][i];
					max[1] = j;
					max[2] = i;
				}
			}
		i = 1;
		j++;
	}
	print_table(tab, max, fill);
	return (0);
}

int		**ft_binar(char **tab, int **pascal, char space, char wall)
{
	int i;
	int j;

	i = 1;
	j = 1;
	while (tab[j][0] != '\0')
	{
		while (tab[j][i] != '\n')
		{
			if (tab[j][i] == space)
				pascal[j][i] = 1;
			if (tab[j][i] == wall)
				pascal[j][i] = 0;
			i++;
		}
		i = 1;
		j++;
	}
	pascal[0][0] = 0;
	pascal[0][1] = 0;
	return (pascal);
}

char	**table_to_pascal(char **tab, char space, char wall, char fill)
{
	int j;
	int i;
	int alloc;
	int **pascal;

	j = 0;
	i = -1;
	alloc = 0;
	while (tab[j][0] != '\0')
	{
		while (tab[j][++i] != '\n')
			alloc++;
		i = 0;
		j++;
	}
	pascal = (int **)malloc(sizeof(*pascal) * (j + 1));
	i = 0;
	while (i <= j + 1)
	{
		pascal[i] = (int *)malloc(sizeof(pascal[i]) * (alloc / j) + 1);
		i++;
	}
	ft_pascal(tab, ft_binar(tab, pascal, space, wall), fill);
	return (0);
}
