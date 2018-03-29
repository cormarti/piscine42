/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geargenc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/09 15:41:22 by geargenc          #+#    #+#             */
/*   Updated: 2017/09/09 21:51:52 by geargenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int			main(int argc, char **argv)
{
	char	**grid;
	char	**grid_rev;

	if (check_error(argc, argv) == 0)
	{
		ft_putstr("Error\n");
		return (0);
	}
	if ((grid = init_grid(argv + 1, 0)) == NULL ||
		(grid_rev = init_grid(argv + 1, 10)) == NULL)
		return (0);
	if (sudoku(grid, argv + 1, 0, 0) == 0 ||
		sudoku_rev(grid_rev, argv + 1, 0, 0) == 0 ||
		grid_cmp(grid, grid_rev) == 0)
		ft_putstr("Error\n");
	else
		print_grid(grid);
	grid_free(grid);
	grid_free(grid_rev);
	return (0);
}
