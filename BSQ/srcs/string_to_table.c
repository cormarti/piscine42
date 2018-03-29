/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_to_table.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlux <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/15 10:52:07 by tlux              #+#    #+#             */
/*   Updated: 2017/09/19 18:54:34 by tlux             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libsq.h"
#include <stdio.h>

char	**ft_assign_table(char **tab, char *str, int sizeline, int nblines)
{
	int i;
	int j;
	int k;

	k = 1;
	j = -1;
	i = -1;

	printf("%s\n", str);
	while (str[k - 1] != '\n')
		k++;
	while (++j <= nblines)
	{
		while (++i <= sizeline + 1)
			if (j == 0)
				tab[j][i] = (i == sizeline + 1) ? '\n' : '0';
			else
			{
				if (tab[j][i] == '\n')
					k++;
				tab[j][i] = (i == 0) ? '0' : str[k];
				k = (i != 0) ? k + 1 : k;
			}
		i = -1;
	}
	tab[j][0] = '\0';
	i = -1;
	while (tab[++i] != 0)
		printf("%.*s\n", 201, tab[i]);
	return (tab);
}

char	**string_to_table(char *str, char wall, char space, char fill)
{
	int		i;
	int		sizeline;
	int		nblines;
	int		startchar;
	char	**tab;

	sizeline = 0;
	nblines = 0;
	i = 1;
	while (str[i - 1] != '\n')
		i++;
	startchar = i;
	while (str[i] != '\n' && i++)
		sizeline++;
	i = startchar;
	while (str[i] != '\0' && i++)
		if (str[i] == '\n')
			nblines++;
	tab = (char **)malloc(sizeof(*tab) * (nblines + 2));
	i = -1;
	while (++i <= nblines + 1)
		tab[i] = (char *)malloc(sizeof(tab[i]) * (sizeline + 2));
	table_to_pascal(ft_assign_table(tab, str, sizeline, nblines),
			space, wall, fill);
	return (0);
}
