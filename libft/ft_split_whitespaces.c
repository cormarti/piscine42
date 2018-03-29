/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-rent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/13 11:06:57 by pde-rent          #+#    #+#             */
/*   Updated: 2017/09/16 15:52:50 by pde-rent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_light.h"

char	**ft_split_whitespaces(char *str);
int		is_delimiter(char c);
int		nb_words(char *str);
void	init(int *i, int *j, int *k);

char	**ft_split_whitespaces(char *str)
{
	char	**dest;
	int		i;
	int		j;
	int		k;

	init(&i, &j, &k);
	while (str[i] != '\0')
		i++;
	dest = (char**)malloc(sizeof(*dest) * (nb_words(str) + 1));
	while (++j < nb_words(str))
		dest[j] = malloc(sizeof(*dest[j]) * (i + 1));
	init(&i, &j, &k);
	while (str[++i] != '\0' && j < nb_words(str))
		if (!is_delimiter(str[i]))
		{
			if (i == 0 || is_delimiter(str[i - 1]))
			{
				k = -1;
				j++;
			}
			dest[j][++k] = str[i];
			dest[j][k + 1] = '\0';
		}
	dest[j + 1] = NULL;
	return (dest);
}

void	init(int *i, int *j, int *k)
{
	*i = -1;
	*j = -1;
	*k = -1;
}

int		is_delimiter(char c)
{
	if (c == ' ' || c == '\t' || c == '\n' || c == '\r')
		return (1);
	return (0);
}

int		nb_words(char *str)
{
	int		i;
	int		nb_words;

	i = -1;
	nb_words = 0;
	while (str[++i] != '\0')
	{
		if (!is_delimiter(str[i]))
			if (i == 0 || is_delimiter(str[i - 1]))
				nb_words++;
	}
	return (nb_words);
}
