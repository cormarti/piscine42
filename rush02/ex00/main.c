/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahoarau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/16 14:27:57 by ahoarau           #+#    #+#             */
/*   Updated: 2017/09/17 23:02:35 by ahoarau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "fct.h"
#include "test_rush.h"

char	*read_input(void)
{
	char	*buffer;
	char	*input;
	int		n;
	int		i;

	input = malloc(1);
	input[0] = 0;
	buffer = malloc(1);
	i = 0;
	while ((n = read(0, buffer, 1)) > 0)
	{
		buffer[n] = 0;
		input = ft_realloc_strcat(input, buffer);
		i++;
	}
	input[ft_strlen(input)] = 0;
	return (input);
}

int		count_newline(char *s)
{
	int i;
	int n;

	i = 0;
	n = 0;
	while (s[i])
	{
		if (s[i] == '\n')
			n++;
		i++;
	}
	return (n);
}

int		*get_dimensions(char **tab)
{
	int i;
	int j;
	int *dimensions;

	dimensions = malloc(sizeof(dimensions) * 2);
	j = 0;
	while (tab[0][j])
		j++;
	dimensions[0] = j;
	i = 1;
	while (tab[i])
	{
		j = 0;
		while (tab[i][j])
			j++;
		if (dimensions[0] != j)
		{
			dimensions[0] = 0;
			dimensions[1] = 0;
			return (dimensions);
		}
		i++;
	}
	dimensions[1] = i;
	return (dimensions);
}

char	**get_tab(char *input)
{
	char	**tab;
	int		i;
	int		j;

	tab = malloc(sizeof(tab) * (count_newline(input) + 1));
	tab[0] = &(input[0]);
	i = 0;
	j = 1;
	while (input[i])
	{
		if (input[i] == '\n')
		{
			input[i] = 0;
			if (input[i + 1] != 0)
				tab[j] = &(input[i + 1]);
			else
				tab[j] = 0;
			j++;
		}
		i++;
	}
	return (tab);
}

int		main(void)
{
	char	*output;
	int		output_lenght;
	char	**tab;
	int		*dimensions;

	tab = get_tab(read_input());
	dimensions = get_dimensions(tab);
	if (dimensions[0] == 0 && dimensions[1] == 0)
	{
		write(1, "aucune\n", 7);
		return (0);
	}
	output = test_which_colle(dimensions[0], dimensions[1], tab);
	output_lenght = ft_strlen(output);
	if (output_lenght > 1)
		write(1, output, output_lenght);
	else
		write(1, "aucune", 6);
	write(1, "\n", 1);
	return (0);
}
