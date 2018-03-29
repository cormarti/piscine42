/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlux <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/15 10:47:47 by tlux              #+#    #+#             */
/*   Updated: 2017/09/19 19:57:27 by tlux             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	print_table(char **tab, int *max, char fill);
char	**table_to_pascal(char **tab, char space, char wall, char fill);
char	**string_to_table(char *str, char wall, char space, char fill);
void	file_to_string(char *argv);
void	read_standard(void);

int		main(int argc, char **argv)
{
	int i;

	i = 1;
	while (i < argc)
	{
		file_to_string(argv[i]);
		i++;
		if(i != argc)
		write(1,"\n",1);
	}
	if (argc == 1)
	{
		read_standard();
	}
	return (0);
}
