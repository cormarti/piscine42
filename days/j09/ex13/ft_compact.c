/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_compact.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-rent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/08 16:18:37 by pde-rent          #+#    #+#             */
/*   Updated: 2017/09/08 16:23:18 by pde-rent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		tab_size(char **tab)
{
	int	i;
	i = 0;
	while (tab[i] != 0)
		i++;
	return (i);
}

int		ft_compact(char **tab, int length)
{
	int	i;
	int	j;
	int	k;
	i = 0;
	length = 0;
	while (tab[i])
	{
		if (tab[i] == 0)
		{
			k = 0;
			while (tab[i + k + 1])
			{
				j = 0;
				while (tab[i + k + 1][j])
				{
					tab[i + k][j] = tab[i + k + 1][j];
					j++;
				}
				k++;
			}
		}
		i++;
	}
	return (tab_size(tab));
}
