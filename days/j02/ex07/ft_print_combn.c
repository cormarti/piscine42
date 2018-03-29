/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-rent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/06 22:39:57 by pde-rent          #+#    #+#             */
/*   Updated: 2017/09/07 06:40:07 by pde-rent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	output(int *tab, int n)
{
	int	i;
	int	is_lower;

	i = 1;
	is_lower = 1;
	while (i < n)
	{
		if (tab[i - 1] >= tab[i])
			is_lower = 0;
		i++;
	}
	if (is_lower)
	{
		i = 0;
		while (i < n)
		{
			ft_putchar(tab[i] + '0');
			i++;
		}
		if (tab[0] < (10 - n))
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}

void	ft_print_combn(int n)
{
	int		i;
	int		tab[n];

	i = -1;
	if (n == 1)
		while (++i < 10)
			ft_putchar(i + '0');
	while (i < n)
		tab[i++] = 0;
	while (tab[0] <= (10 - n) && n > 1)
	{
		output(tab, n);
		tab[n - 1] += 1;
		i = n;
		while (i > 1 && n > 1)
		{
			i--;
			if (tab[i] > 9)
			{
				tab[i - 1] += 1;
				tab[i] = 0;
			}
		}
	}
}
