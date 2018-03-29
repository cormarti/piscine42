/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-rent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/08 15:51:31 by pde-rent          #+#    #+#             */
/*   Updated: 2017/09/08 16:42:46 by pde-rent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	shout(void)
{
	write(1, "Alert !!!\n", 10);
}

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1++ == *s2++)
		if (*s1 == '\0' && *s2 == '\0')
			return (0);
	return (*--s1 - *--s2);
}

void	flag_alert(char *str)
{
	if ((ft_strcmp(str, "president") == 0) ||
		(ft_strcmp(str, "attentat") == 0) ||
		(ft_strcmp(str, "bauer") == 0))
		shout();
}

void	lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] = str[i] + 32;
		i++;
	}
}

int		main(int argc, char **argv)
{
	char	word[500];
	int		i;
	int		j;
	int		k;

	i = 1;
	while (i < argc)
	{
		j = 0;
		k = 0;
		while (argv[i][j])
		{
			if (argv[i][j] != ' ')
			{
				word[k] = argv[i][j];
				k++;
			}
			j++;
		}
		word[j] = '\0';
		lowercase(temp);
		find_alert(temp);
		i++;
	}
	return (0);
}
