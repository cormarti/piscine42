/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-rent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/14 21:37:30 by pde-rent          #+#    #+#             */
/*   Updated: 2017/09/16 15:54:54 by pde-rent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strrev(char *str);
int		ft_power_s(int nb, int power);
int		ft_getval(char *nbr, char *base_from);
int		ft_strlen(char *str);

int		ft_power_s(int nb, int power)
{
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	return (nb * ft_power_s(nb, power - 1));
}

int		ft_getval(char *nbr, char *base_from)
{
	int		val;
	int		i;
	int		j;
	int		len;

	len = ft_strlen(nbr);
	val = 0;
	i = -1;
	while (nbr[++i])
	{
		j = -1;
		while (nbr[i] != base_from[++j])
			val += j * (len - i ? ft_power_s(10, len - i - 1) : 1);
	}
	return (val);
}

char	*ft_strrev(char *str)
{
	int			i;
	int			length;
	char		tmp;

	if (str)
	{
		i = 0;
		length = ft_strlen(str);
		while (i < length / 2)
		{
			tmp = str[i];
			str[i] = str[length - i - 1];
			str[length - i - 1] = tmp;
			i++;
		}
	}
	return (str);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*res;
	int		val;
	int		len_base;
	int		i;

	val = ft_getval(nbr, base_from);
	len_base = ft_strlen(base_to);
	res = (char*)malloc(sizeof(char) * (32));
	i = 0;
	if (val)
		while (val > 0)
		{
			res[i] = base_to[val % len_base];
			val /= len_base;
			++i;
		}
	else
		res[i++] = base_to[0];
	res[i] = '\0';
	res = ft_strrev(res);
	return (res);
}
