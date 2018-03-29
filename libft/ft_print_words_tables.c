/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_words_tables.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-rent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/13 11:07:03 by pde-rent          #+#    #+#             */
/*   Updated: 2017/09/16 15:52:56 by pde-rent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_light.h"

void	ft_print_words_tables(char **tab)
{
	int		i;
	int		j;

	i = -1;
	while (tab[++i] != '\0')
	{
		j = -1;
		while (tab[i][++j])
			ft_putchar(tab[i][j]);
		ft_putchar('\n');
	}
}
