/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   more.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-rent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/10 02:10:47 by pde-rent          #+#    #+#             */
/*   Updated: 2017/09/13 15:55:09 by pde-rent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_num(char c)
{
		if (!((c >= '0' && c <= '9')))
			return (0);
	return (1);
}

int		is_alpha(char c)
{
	if (!((c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z')))
		return (0);
	return (1);
}

int		is_op(char c)
{
	if (!(c == '+' || c == '-' || c == '/' || c == '*' || c == '%'))
		return (0);
	return (1);
}

int		is_space(char c)
{
	if (!(c == ' ' || (c > 8 && c < 14 )))
		return (0);
	return (1);
}

int		is_par(char c)
{
		if (!(c == '(' || c == ')' ))
			return (0);
	return (1);
}

int		is_alphanum(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
			|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}

int		is_prime(int nb)
{
	int	i;

	if ((nb % 2 == 0 && nb != 2) || nb <= 1)
		return (0);
	i = 3;
	while (i * i <= nb)
	{
		if ((nb % i) == 0)
			return (0);
		i++;
	}
	return (1);
}

int		len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}