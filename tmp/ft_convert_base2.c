/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-rent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/13 11:07:07 by pde-rent          #+#    #+#             */
/*   Updated: 2017/09/14 05:00:15 by pde-rent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		from_decimal(int nb, int nbase);
int		to_decimal(int nb, int nbase);
int		to_value(char *str);
int		len(char *str);

int		to_value(char *str)
{
	int		i;
	char	c;
	long	res;

	res = 0;
	i = -1;
	while (str[++i] != 0)
	{
		c = str[i];
		if (c >= '0' && c <= '9')
			res *= 10 + (c - '0');
		else if (c >= 'a' && c <= 'z')
			res *= 10 + (c - 'a' + 10);
		else if (c >= 'A' && c <= 'Z')
			res *= 10 + (c - 'A' + 10);
	}
	return (res);
}

int		from_decimal(int nb, int nbase)
{
	long	res;

	res = 0;
	if (nb == 0 || nbase == 10)
		return (nb);
	if (nb < 0 || nbase < 2)
		return (0);
	res = (nb % nbase) + 10 * from_decimal(nb / nbase, nbase);
	res = res > (2147483647) ? 0 : res;
	return (res);
}

int		to_decimal(int nb, int nbase)
{
	int		power;
	long	res;
	int		i;

	i = 0;
	power = 1;
	res = 0;
	if (nb == 0 || nbase == 10)
		return (nb);
	if (nb < 0 || nbase < 2)
		return (0);
	while (--i >= 0)
	{
		res = res + nb * power;
		power = power * nbase;
	}
	res = res > (2147483647) ? 0 : res;
	return (res);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*res_str;
	int		i;
	int		res;

	i = 0;
	res_str = (char*)malloc(sizeof(res_str) * (32));
	res = to_decimal(to_value(nbr), len(base_from));
	if (len(base_from) > 1)
		while (res > 0)
		{
			res_str[i] = from_decimal(res, len(base_to));
			res /= len(base_to);
			++i;
		}
	else
		res_str[i++] = base_to[0];
	res_str[i] = '\0';
	return (res_str);
}

int		len(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
