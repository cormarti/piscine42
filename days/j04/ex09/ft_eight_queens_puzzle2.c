/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle2.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-rent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/07 03:57:11 by pde-rent          #+#    #+#             */
/*   Updated: 2017/09/07 05:38:49 by pde-rent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	output(int tab[8]);
void	back_track2(int tab[8], int pos);
int		is_safe(int tab[8], int tab, int line);
void	ft_eight_queens_puzzle2(void);

void	output(int tab[8])
{
	int i;

	i = 0;
	while (i < 8)
	{
		ft_putchar(tab[i] + 49);
		i++;
	}
	ft_putchar('\n');
}

void	back_track2(int tab[8], int pos)
{
	int i;

	if (pos == 8)
		output(tab);
	else
	{
		i = 0;
		while (i < 8)
		{
			if (is_safe(tab, pos, i))
			{
				tab[pos] = i;
				back_track2(tab, pos + 1);
			}
			i++;
		}
	}
}

int		is_safe(int tab[8], int tab, int line)
{
	int i;

	i = 0;
	while (i < tab)
	{
		if (line == tab[i] || i + tab[i] == tab + line
			|| i - tab[i] == tab - line)
			return (0);
		i++;
	}
	return (1);
}

void	ft_eight_queens_puzzle2(void)
{
	int tab[8];
	int i;

	i = 0;
	while (i < 8)
	{
		tab[i] = -1;
		i++;
	}
	back_track2(tab, 0);
}
int main()
{
	ft_eight_queens_puzzle2();
	return(0);
}