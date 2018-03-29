/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-rent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/12 00:00:48 by pde-rent          #+#    #+#             */
/*   Updated: 2017/09/12 15:50:58 by pde-rent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define ABS(x)  (x < 0) ? -x : x
#define FALSE 0
#define TRUE 1

int		ft_putchar(char c);
int		is_twice(char *str);
int		is_alphanumeric(char *str);
int		ft_putchar(char c);

void	ft_putnbr_base(int nb, char *base)
{
	unsigned int nbase;
	unsigned int res;

	res = (unsigned int)ABS(nb);
	nbase = 0;
	if (nb > 1 || is_twice(base) == FALSE || is_alphanumeric(base) == TRUE)
	{
		while (base[nbase] != '\0')
			nbase++;
		if (nb < 0)
			ft_putchar('-');
		if (res >= nbase)
		{
			ft_putnbr_base((res / nbase), base);
			ft_putnbr_base(res % nbase, base);
		}
		else
			ft_putchar(res + '0');
	}
}

int		is_twice(char *str)
{
	int i;
	int j;

	i = -1;
	while (str[++i] != '\0')
	{
		j = -1;
		while (str[++j] != '\0')
			if (i != j && str[j] == str[i])
				return (1);
	}
	return (0);
}

int		is_alphanumeric(char *str)
{
	int i;

	i = -1;
	while (str[++i] != '\0')
		if (!(str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= '0' && str[i] <= '9'))
			return (0);
	return (1);
}
