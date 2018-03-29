/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_smth.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-rent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/05 03:18:03 by pde-rent          #+#    #+#             */
/*   Updated: 2017/09/20 03:18:25 by pde-rent         ###   ########.fr       */
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
	if (!(c == ' ' || (c > 8 && c < 14)))
		return (0);
	return (1);
}

int		is_par(char c)
{
	if (!(c == '(' || c == ')'))
		return (0);
	return (1);
}
