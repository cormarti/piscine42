/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-rent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/12 17:25:26 by pde-rent          #+#    #+#             */
/*   Updated: 2017/09/13 15:57:59 by pde-rent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int i;

	i = -1;
	while (str[++i] != '\0')
		ft_putchar(str[i]);
	ft_putchar('\n');
}

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1++ == *s2++)
		if (*s1 == '\0' && *s2 == '\0')
			return (0);
	return (*--s1 - *--s2);
}

int		main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*tmp;

	i = 0;
	while (++i < argc - 1)
	{
		j = 0;
		while (++j < argc - 1)
			if (ft_strcmp(argv[j + 1], argv[j]) < 0)
			{
				tmp = argv[j];
				argv[j] = argv[j + 1];
				argv[j + 1] = tmp;
			}
	}
	i = 0;
	while (++i < argc)
		ft_putstr(argv[i]);
	return (0);
}
