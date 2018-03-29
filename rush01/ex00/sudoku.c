/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geargenc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/09 21:27:38 by geargenc          #+#    #+#             */
/*   Updated: 2017/09/09 22:05:14 by geargenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int	sudoku(char **grid, char **argv, int j, int i)
{
	if (j == 9)
		return (1);
	if (i == 9)
		return (sudoku(grid, argv, j + 1, i - 9));
	if (argv[j][i] != '.')
		return (sudoku(grid, argv, j, i + 1));
	while ((check(grid, j, i) == 0 && grid[j][i] <= 9) || grid[j][i] < 1)
		grid[j][i]++;
	if (grid[j][i] == 10)
	{
		grid[j][i] = 0;
		return (0);
	}
	if (sudoku(grid, argv, j, i + 1) == 1)
		return (1);
	else
	{
		grid[j][i]++;
		return (sudoku(grid, argv, j, i));
	}
}

int	sudoku_rev(char **grid, char **argv, int j, int i)
{
	if (j == 9)
		return (1);
	if (i == 9)
		return (sudoku_rev(grid, argv, j + 1, i - 9));
	if (argv[j][i] != '.')
		return (sudoku_rev(grid, argv, j, i + 1));
	while ((check(grid, j, i) == 0 && grid[j][i] >= 1) || grid[j][i] > 9)
		grid[j][i]--;
	if (grid[j][i] == 0)
	{
		grid[j][i] = 10;
		return (0);
	}
	if (sudoku_rev(grid, argv, j, i + 1) == 1)
		return (1);
	else
	{
		grid[j][i]--;
		return (sudoku_rev(grid, argv, j, i));
	}
}
