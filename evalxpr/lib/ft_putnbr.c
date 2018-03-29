/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-rent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/05 01:47:15 by pde-rent          #+#    #+#             */
/*   Updated: 2017/09/12 09:53:26 by pde-rent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define ABS(x)  (x<0) ? - x : x

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	unsigned int res;

	res = ABS(nb);
	if (nb < 0)
		ft_putchar('-');
	if (ABS(res) >= 10)
		ft_putnbr(ABS(res) / 10);
	ft_putchar((ABS(res) % 10) + '0');
}
