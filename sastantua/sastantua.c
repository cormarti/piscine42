/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-rent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/03 23:11:25 by pde-rent          #+#    #+#             */
/*   Updated: 2017/09/16 16:38:54 by pde-rent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

int		calc_base(int max_lvl)
{
	int lvl;
	int tower_width;
	int level_width;

	lvl = 1;
	tower_width = 1;
	level_width = 4;
	while (lvl <= max_lvl)
	{
		tower_width += 2 * (2 + lvl);
		lvl++;
		tower_width += level_width;
		if (lvl % 2 && lvl < max_lvl)
			level_width += 2;
	}
	tower_width -= level_width;
	return (tower_width);
}

void	make_space(int space)
{
	int i;

	i = 0;
	while (i < space)
	{
		ft_putchar(' ');
		i++;
	}
}

void	build_floor(int max_lvl, int lvl, int tower_width, int current_lvl)
{
	int door;
	int i;

	door = 1 + 2 * ((lvl - 1) / 2);
	i = -1;
	while (++i < tower_width)
	{
		if (i == 0)
			ft_putchar('/');
		else if (i == tower_width - 1)
			ft_putchar('\\');
		else
		{
			if (lvl == max_lvl && i >= (tower_width - door) / 2
					&& i < (tower_width + door) / 2
					&& 2 + lvl - current_lvl <= door)
				if (door >= 5 && current_lvl == 2 + lvl - door / 2 - 1
						&& i == (tower_width + door) / 2 - 2)
					ft_putchar('$');
				else
					ft_putchar('|');
			else
				ft_putchar('*');
		}
	}
}

void	sastantua(int max_lvl)
{
	int	lvl;
	int	height;
	int	current_lvl;
	int	tower_width;

	if (max_lvl < 1)
		return ;
	lvl = 1;
	tower_width = 1;
	while (lvl <= max_lvl)
	{
		height = 2 + lvl;
		current_lvl = 0;
		while (current_lvl < height)
		{
			tower_width += 2;
			make_space((calc_base(max_lvl) - tower_width) / 2);
			build_floor(max_lvl, lvl, tower_width, current_lvl);
			ft_putchar('\n');
			current_lvl++;
		}
		lvl++;
		tower_width += 4 + 2 * ((lvl - 2) / 2);
	}
}
