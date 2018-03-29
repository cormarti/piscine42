/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-rent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/12 17:25:03 by pde-rent          #+#    #+#             */
/*   Updated: 2017/09/13 15:55:37 by pde-rent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int	i;

	argc = 2;
	i = -1;
	while (argv[0][++i] != '\0')
		ft_putchar(argv[0][i]);
	ft_putchar('\n');
	return (0);
}
