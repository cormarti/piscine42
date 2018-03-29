/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-rent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/09 19:18:29 by pdr-rent          #+#    #+#             */
/*   Updated: 2017/09/09 21:47:04 by geargenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int		check_error(int argc, char *argv[])
{
	int	x_pos;
	int	y_pos;

	if (argc != 10)
		return (0);
	x_pos = 1;
	while (x_pos < 10)
	{
		if (ft_strlen(argv[x_pos]) != 9)
			return (0);
		y_pos = 0;
		while (y_pos < 9)
		{
			if (argv[x_pos][y_pos] != '.' &&
				check(argv + 1, x_pos - 1, y_pos) == 0)
				return (0);
			if (argv[x_pos][y_pos] != '.' &&
				(argv[x_pos][y_pos] < '1' || argv[x_pos][y_pos] > '9'))
				return (0);
			y_pos++;
		}
		x_pos++;
	}
	return (1);
}