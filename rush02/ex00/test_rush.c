/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_rush.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahoarau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/16 15:50:49 by ahoarau           #+#    #+#             */
/*   Updated: 2017/09/17 23:14:19 by pde-rent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fct.h"

int		test_ligne(int x, char *line, char *char_set)
{
	int i;

	i = 0;
	while (i < x)
	{
		if (i == 0 && line[i] != char_set[0])
		{
			return (-1);
		}
		if (x > 2 && i > 0 && i < x - 1 && line[i] != char_set[1])
		{
			return (-1);
		}
		if (x > 1 && i == x - 1 && line[i] != char_set[2])
		{
			return (-1);
		}
		i++;
	}
	return (0);
}

int		test_rush(int x, int y, char **tab, char *char_set)
{
	int j;

	j = 0;
	if (test_ligne(x, *tab, char_set) == -1)
	{
		return (-1);
	}
	if (y == 1)
		return (0);
	j = 1;
	while (j <= y - 2)
	{
		if (test_ligne(x, *(tab + j), char_set + 3) == -1)
		{
			return (-1);
		}
		j++;
	}
	if (test_ligne(x, *(tab + j), char_set + 6) == -1)
	{
		return (-1);
	}
	return (0);
}

char	*get_output_string(int colle_nb, int x, int y)
{
	char *res;

	res = malloc(sizeof(res) + 1);
	res[0] = 0;
	res = ft_realloc_strcat(res, "[colle-0");
	res = ft_realloc_strcat(res, ft_positive_itoa(colle_nb));
	res = ft_realloc_strcat(res, "] [");
	res = ft_realloc_strcat(res, ft_positive_itoa(x));
	res = ft_realloc_strcat(res, "] [");
	res = ft_realloc_strcat(res, ft_positive_itoa(y));
	res = ft_realloc_strcat(res, "]");
	return (res);
}

char	*test_which_colle(int x, int y, char **tab)
{
	char	*res;
	char	*char_sets;
	int		i;

	res = malloc(sizeof(res) * 2 + 1);
	res[0] = 0;
	char_sets = malloc(sizeof(char_sets) * 5 * 9 + 1);
	char_sets = "o-o| |o-o/*\\* *\\*/ABAB BCBCABCB BABCABCB BCBA";
	i = 0;
	while (i < 5)
	{
		if (test_rush(x, y, tab, char_sets + i * 9) == 0)
		{
			if (res[0] != 0)
				res = ft_realloc_strcat(res, " || ");
			res = ft_realloc_strcat(res, get_output_string(i, x, y));
		}
		i++;
	}
	return (res);
}
