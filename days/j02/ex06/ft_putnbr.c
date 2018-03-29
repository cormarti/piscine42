/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-rent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/04 12:11:19 by pde-rent          #+#    #+#             */
/*   Updated: 2017/09/08 01:58:32 by pde-rent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_putnbr(int nb)
{
	long res;

	res = nb;
	if (res == -2147483648)
	{
		ft_putnbr(res / 10);
		ft_putchar('8');
		return ;
	}
	if (res < 0)
	{
		ft_putchar('-');
		res = res * -1;
	}
	if (res >= 10)
	{
		ft_putnbr(res / 10);
	}
	ft_putchar((res % 10) + '0');
}
