/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-rent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/13 11:06:57 by pde-rent          #+#    #+#             */
/*   Updated: 2017/09/14 05:00:11 by pde-rent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#define ABS(x)	(x < 0) ? - x : x

int		is_delimiter(char c);
int		nb_words(char *str);
void	ft_print_words_tables(char **tab);
char	**ft_split_whitespaces(char *str);
void	ft_putchar(char c);
void	init(int *i, int *j, int *k);

void	ft_putnbr(int nb)
{
	unsigned int res;

	res = ABS(nb);
	if (nb < 0)
		ft_putchar('-');
	if (ABS(res) >= 10)
		ft_putnbr(ABS(res) / 10);
	ft_putchar((ABS(res) % 10) + '0');
}

void	ft_putchar(char c)
{
	write(1,&c,1);
}

char	**ft_split_whitespaces(char *str)
{
	char	**dest;
	int		i;
	int		j;
	int		k;

	dest = (char**)malloc(sizeof(*dest) * (nb_words(str) + 1));
	init(&i, &j, &k);
	while (str[i] != '\0')
		i++;
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

void	ft_print_words_tables(char **tab)
{
	int		i;
	int		j;

	i = -1;
	while (tab[++i] != NULL)
	{
		j = -1;
		while (tab[i][++j])
			ft_putchar(tab[i][j]);
		ft_putchar('\n');
	}
}

int main(int argc, char **argv)
{
	if (argc > 1)
		ft_print_words_tables(ft_split_whitespaces(argv[1]));
	return 0;
}