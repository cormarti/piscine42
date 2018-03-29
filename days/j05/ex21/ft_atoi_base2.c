/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   Bx: pde-rent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/12 06:10:47 bx pde-rent          #+#    #+#             */
/*   Updated: 2017/09/12 15:56:52 bx pde-rent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     is_ok(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (((str[i] >= '\0' && str[i] < '0') ||(str[i] > '9' && str[i] < 'A')
			|| (str[i] > 'F')) && str[i] != '-')
			return (0);
		i++;
	}
    return (1);
}

int     len(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}

int     atoi_base(char *str, char *base)
{
	int		i;
	int		j;
	int		x;
	int		dec;
	int		sign;

	j = 0;
	dec = 0;
	sign = 1;
	if(!(is_ok(str)))
        return (0);
	i = len(str, '\0') - 1;
	while (str[i] && str[i] != '-' && str[i] != '+' && i >= 0)
	{
		x = 0;
		while (base[x] && str[i] != base[x])
			x++;
		if (x == len(base, '\0'))
			x = 0;
		dec += x * power(len(base, '\0'), j++);
		i--;
	}
	while (str[i] && i >= 0)
		if (str[i--] == '-')
			sign *= -1;
	return (dec * sign);
}