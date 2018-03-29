/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-rent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/12 17:25:21 by pde-rent          #+#    #+#             */
/*   Updated: 2017/09/13 10:05:45 by pde-rent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int		i;
	int		j;

	i = argc;
	while (--i >= 1)
	{
		j = -1;
		while (argv[i][++j] != '\0')
			ft_putchar(argv[i][j]);
		ft_putchar('\n');
	}
	return (0);
}
