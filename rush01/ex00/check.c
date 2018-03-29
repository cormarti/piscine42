/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geargenc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/09 17:51:09 by geargenc          #+#    #+#             */
/*   Updated: 2017/09/09 18:18:19 by geargenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	check_line(char **grid, int j, int i)
{
	int		x;

	x = 0;
	while (x < 9)
	{
		if (x != i && grid[j][x] == grid[j][i])
			return (0);
		x++;
	}
	return (1);
}

static int	check_column(char **grid, int j, int i)
{
	int		y;

	y = 0;
	while (y < 9)
	{
		if (y != j && grid[y][i] == grid[j][i])
			return (0);
		y++;
	}
	return (1);
}

static int	check_square(char **grid, int j, int i)
{
	int		x;
	int		y;

	y = j / 3 * 3;
	while (y < (j / 3 * 3) + 3)
	{
		x = i / 3 * 3;
		while (x < (i / 3 * 3) + 3)
		{
			if ((x != i || y != j) && grid[y][x] == grid[j][i])
				return (0);
			x++;
		}
		y++;
	}
	return (1);
}

int			check(char **grid, int j, int i)
{
	if (check_line(grid, j, i) == 0 || check_column(grid, j, i) == 0
		|| check_square(grid, j, i) == 0)
		return (0);
	return (1);
}
