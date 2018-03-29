/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-rent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/02 14:51:07 by pde-rent          #+#    #+#             */
/*   Updated: 2017/09/02 21:54:47 by tbauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	loop_columns(int l, int c, int x, int y)
{
	while (c <= x)
	{
		if ((l == 1 && c == x && x != 1) || (c == 1 && l == y && y != 1))
			ft_putchar('C');
		else if ((l == 1 && c == 1) || (l == y && c == x))
			ft_putchar('A');
		else if ((l == 1 || l == y) && (c > 1 && c < x))
			ft_putchar('B');
		else if ((c == 1 || c == x) && (l > 1 && l < y))
			ft_putchar('B');
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
