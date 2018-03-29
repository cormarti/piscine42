/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-rent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/05 03:18:03 by pde-rent          #+#    #+#             */
/*   Updated: 2017/09/12 09:53:28 by pde-rent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_light.h"

char    *ft_itoa(int nb)
{
    char *res;
    int i;
    int dec;
    
    dec = 1;
    i = nb;
    while(i/=10)
      dec++;
    dec = ((nb < 0) ? ++dec : dec);
    res = malloc(sizeof(*res) * (dec + 1));
    if (nb < 0)
    {
      res[0] = '-';
      nb = -nb;
    }
    res[dec--] = '\0';
    while (nb > 9)
    {
        res[dec--] = (nb % 10) + 48;
        nb /= 10;
    }
    res[dec--] = nb + 48;
    return (res);
}