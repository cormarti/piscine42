/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbauer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/01 22:42:02 by tbauer            #+#    #+#             */
/*   Updated: 2017/09/02 21:08:53 by tbauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	loop_columns(int l, int c, int x, int y)
{
	while (c <= x)
	{
		if ((l == 1 && c == 1) || (c == x && l == y && y !=1 && x != 1))
			ft_putchar('/');
		else if ((l == 1 && c == x) || (l == y && c == 1))
			ft_putchar('\\');
		else if ((l == 1 || l == y) && (c > 1 && c < x))
			ft_putchar('*');
		else if ((c == 1 || c == x) && (l > 1 && l < y))
			ft_putchar('*');
		else
			ft_putchar(' ');
		c++;
	}
}

int		rush(int x, int y)
{
	int l;
	int c;

	l = 1;
	c = 1;
	if (x < 1 || y < 1)
		return (0);
	while (l <= y)
	{
		loop_columns(l, c, x, y);
		c = 1;
		ft_putchar('\n');
		l++;
	}
	return (0);
}
