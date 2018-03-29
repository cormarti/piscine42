/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-rent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 18:15:23 by pde-rent          #+#    #+#             */
/*   Updated: 2017/09/20 02:57:32 by pde-rent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "srcs/libop.h"

int		calculate(int x, int y, char op)
{
	int		i;
	int		(*ope[5])(int, int);
	char	*op_list;

	ope[0] = sum;
	ope[1] = sub;
	ope[2] = mult;
	ope[3] = div;
	ope[4] = mod;
	op_list = "+-*/%";
	i = 5;
	while (i--)
		if (op == op_list[i])
			return ((ope[i])(x, y));
	return (0);
}

int		main(int ac, char **av)
{
	if (ac != 4)
		return (0);
	if (len(av[2]) == 1 && is_op(av[2][0]))
	{
		if (ft_atoi(av[3]) == 0 && (av[2][0] == '/' || av[2][0] == '%'))
		{
			if (av[2][0] == '/')
				ft_putstr("Stop : division by zero\n");
			else if (av[2][0] == '%')
				ft_putstr("Stop : modulo by zero\n");
			return (0);
		}
		ft_putnbr(calculate(ft_atoi(av[1]), ft_atoi(av[3]), av[2][0]));
	}
	else
		ft_putchar('0');
	return (0);
}
