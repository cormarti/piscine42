/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-rent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/04 15:27:01 by pde-rent          #+#    #+#             */
/*   Updated: 2017/09/07 05:40:09 by pde-rent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_eight_queens_puzzle(void);
int		is_safe(int tab[8], int col, int line);
void	back_track(int tab[8], int *res, int pos);

int		is_safe(int tab[8], int col, int line)
{
	int i;

	i = 0;
	while (i < col)
	{
		if (line == tab[i] || i + tab[i] == col + line
			|| i - tab[i] == col - line)
			return (0);
		i++;
	}
	return (1);
}

void	back_track(int tab[8], int *res, int pos)
{
	int i;

	if (pos == 8)
		*res = 1 + *res;
	else
	{
		i = 0;
		while (i < 8)
		{
			if (is_safe(tab, pos, i))
			{
				tab[pos] = i;
				back_track(tab, res, pos + 1);
			}
		}
	}
}

int		ft_eight_queens_puzzle(void)
{
	int tab[8];
	int i;
	int res;

	i = 0;
	while (i < 8)
	{
		tab[i] = -1;
		i++;
	}
	res = 0;
	back_track(tab, &res, 0);
	return (res);
}

int main()
{
	int test = 0;
	test = ft_eight_queens_puzzle();
	return 0;
}