/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-rent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/13 11:07:13 by pde-rent          #+#    #+#             */
/*   Updated: 2017/09/16 15:53:09 by pde-rent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		nb_words(char *str)
{
	int		i;
	int		nb;

	i = 0;
	nb = 0;
	while (str[i] != '\0')
	{
		while (str[i] && (str[i] == ' ' || str[i] == '\t'))
			i++;
		if (str[i])
		{
			nb++;
			while (str[i] && str[i] != ' ' && str[i] != '\t')
				i++;
		}
	}
	return (nb);
}

char	**ft_dest(char *str)
{
	char	**dest;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!(dest = (char **)malloc(sizeof(char *) * (nb_words(str) + 1))))
		return (dest);
	while (str[i] != '\0')
	{
		while (*str && (*str == ' ' || *str == '\t'))
			str++;
		if (*str)
		{
			while (str[i] && str[i] != ' ' && str[i] != '\t')
				i++;
			dest[j] = ft_strndup(str, i);
			j++;
			str += i;
			i = 0;
		}
	}
	dest[j] = NULL;
	return (dest);
}
