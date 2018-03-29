/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-rent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/13 11:06:54 by pde-rent          #+#    #+#             */
/*   Updated: 2017/09/16 15:52:46 by pde-rent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	concat(int argc, char **argv, char *str)
{
	int i;
	int count;
	int nb;

	i = 0;
	count = 0;
	nb = 1;
	while (nb < argc)
	{
		count = 0;
		while (argv[nb][count] != '\0')
		{
			str[i] = argv[nb][count];
			count++;
			i++;
		}
		if (nb != argc - 1)
			str[i] = '\n';
		i++;
		nb++;
	}
	str[i - 1] = '\0';
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		nb;
	int		count;
	char	*str;

	nb = 1;
	count = 0;
	if (argc == 1)
	{
		return ("");
	}
	while (nb < argc)
	{
		i = 0;
		while (argv[nb][i] != '\0')
		{
			count++;
			i++;
		}
		count++;
		nb += 1;
	}
	str = (char *)malloc(sizeof(*str) * (count + 1));
	concat(argc, argv, str);
	return (str);
}
