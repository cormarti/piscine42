/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-rent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/12 06:10:47 by pde-rent          #+#    #+#             */
/*   Updated: 2017/09/12 15:56:52 by pde-rent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_ok(char *str);
int		base_converter(int nb, int nbase);
int		ft_atoi_base(char *str, char *base);

int		ft_atoi_base(char *str, char *base)
{
	int	i;
	int	res;
	int sign;
	int nbase;

	i = 0;
	sign = 1;
	res = 0;
	nbase = 0;
	while ((str[i] == ' ') || (str[i] == '\t') || (str[i] == '\n') ||
			(str[i] == '\v') || (str[i] == '\f') || (str[i] == '\r'))
		i++;
	if (str[i] == '-')
		sign = -1;
	if ((str[i] == '-') || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	if (res > 1 && is_ok(base))
		while (base[nbase] != '\0')
			nbase++;
	return (base_converter(sign * res, nbase));
}

int		base_converter(int nb, int nbase)
{
	long res;

	res = 0;
	if (nb == 0 || nbase == 10)
		return (nb);
	if (nb < 0 || nbase < 2)
		return (0);
	res = (nb % nbase) + 10 * base_converter(nb / nbase, nbase);
	res = res > (2147483647) ? 0 : res;
	return (res);
}

int		is_ok(char *str)
{
	int i;
	int j;

	i = -1;
	while (str[++i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z')
				|| (str[i] >= 'A' && str[i] <= 'Z')
				|| (str[i] >= '0' && str[i] <= '9'))
			return (0);
		j = -1;
		while (str[++j] != '\0')
			if (i != j && str[j] == str[i])
				return (0);
	}
	return (1);
}
