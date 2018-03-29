/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geargenc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/09 21:35:15 by geargenc          #+#    #+#             */
/*   Updated: 2017/09/09 21:44:09 by geargenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

char		**init_grid(char **argv, char def)
{
	char	**grid;
	int		i;

	if ((grid = (char **)malloc(9 * sizeof(char *))) == NULL)
		return (NULL);
	i = 0;
	while (i < 9)
	{
		if ((grid[i] = (char *)malloc(9 * sizeof(char))) == NULL)
			return (NULL);
		i++;
	}
	i = 0;
	while (i < 81)
	{
		if (argv[i / 9][i % 9] == '.')
			grid[i / 9][i % 9] = def;
		else
			grid[i / 9][i % 9] = argv[i / 9][i % 9] - '0';
		i++;
	}
	return (grid);
}

void		print_grid(char **grid)
{
	int		i;
	int		j;

	j = 0;
	while (j < 9)
	{
		i = 0;
		while (i < 9)
		{
			ft_putchar(grid[j][i] + '0');
			if (i < 8)
				ft_putchar(' ');
			i++;
		}
		ft_putchar('\n');
		j++;
	}
}

int			grid_cmp(char **grid1, char **grid2)
{
	int		i;
	int		j;

	j = 0;
	while (j < 9)
	{
		i = 0;
		while (i < 9)
		{
			if (grid1[j][i] != grid2[j][i])
				return (0);
			i++;
		}
		j++;
	}
	return (1);
}

void		grid_free(char **grid)
{
	int		i;

	i = 0;
	while (i < 9)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
