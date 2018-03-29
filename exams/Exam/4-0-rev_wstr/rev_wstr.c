/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/15 21:18:24 by exam              #+#    #+#             */
/*   Updated: 2017/09/15 21:32:08 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		nb_words(char *str);
int		is_delimiter(char c);
void	ft_putstr(char *str);
void	rev_wstr(char *str, int nb_words);
void	ft_putchar(char c);

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	int str_ln = 0;
	while (str[str_ln] != '\0')
		str_ln++;
	write (1, str, str_ln);
}
int		nb_words(char *str)
{
	int nb = 0;
	int i = 0;
	while (str[i] != '\0')
	{
		if(!is_delimiter(str[i]))
			if(i == 0 || is_delimiter(str[i-1]))
				nb++;
		i++;
	}
	return nb;
}

int		is_delimiter(char c)
{
	if (c == 32 || c == '\t')
		return 1;
	return 0;
}

int		main(int ac, char **av)
{
	if (ac != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	rev_wstr(av[1], nb_words(av[1]));
	ft_putchar('\n');
	return 0;
}

void	rev_wstr(char *str, int nb_words)
{
	int	i = 0;
	int k = 0;
	int nb = 0;
	int ln = 0;
	int ws = 0;
	while (str[ln] != '\0')
		ln++;
	i = ln-1;
	while (is_delimiter(str[i]))
	{
		ws++;
		i--;
	}
	i = 0;
	char res[ln-ws+1];

	while (nb != nb_words)
	{
		if(!is_delimiter(str[i]))
			if(i == 0 || is_delimiter(str[i-1]))
				nb++;
		i++;
	}
	i--;
	while (i <= (ln-ws))
	{
		res[k] = str[i];
		k++;
		i++;
	}
	i = -1;
	while (++i < k)
		if (is_delimiter(res[i]))
			res[i] = '\0';
	ft_putstr(res);
	if (nb_words > 1)
	{
		ft_putchar(' ');
		rev_wstr(str, --nb_words);	
	}
}


