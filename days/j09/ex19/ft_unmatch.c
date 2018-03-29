/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unmatch.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-rent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/08 16:31:35 by pde-rent          #+#    #+#             */
/*   Updated: 2017/09/08 16:31:53 by pde-rent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_unmatch(int *tab, int length)
{
	int i;
	int j;
	int matched;

	j = 0;
	while (j < length)
	{
		i = 0;
		matched = 0;
		while (i < length)
		{
			if (i != j)
				if (tab[i] == tab[j])
				{
					matched = 1;
					break ;
				}
			i++;
		}
		if (!matched)
			return (tab[j]);
		j++;
	}
	return (tab[j]);
}
