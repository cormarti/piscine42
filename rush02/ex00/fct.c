/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fct.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahoarau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/16 17:16:41 by ahoarau           #+#    #+#             */
/*   Updated: 2017/09/17 22:58:16 by ahoarau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fct.h"

int		ft_strlen(char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return (i + 1);
}

char	*ft_realloc_strcat(char *s1, char *s2)
{
	char	*res;
	int		i;
	int		j;

	i = 0;
	res = malloc(sizeof(res) * (ft_strlen(s1) + ft_strlen(s2)));
	while (s1[i])
	{
		res[i] = s1[i];
		i++;
	}
	j = 0;
	free(s1);
	while (s2[j])
	{
		res[i + j] = s2[j];
		j++;
	}
	res[i + j] = 0;
	return (res);
}

int		count_char(int nbr)
{
	int count;

	count = 0;
	if (nbr == -2147483648)
	{
		count += 2;
		nbr = 147483648;
	}
	if (nbr < 0)
	{
		count++;
		nbr = -nbr;
	}
	while (nbr > 10)
	{
		count++;
		nbr = nbr / 10;
	}
	count += 1;
	return (count);
}

char	*ft_positive_itoa(int nbr)
{
	int		count;
	char	*ptr;
	int		nbr_cp;

	nbr_cp = nbr;
	count = count_char(nbr);
	ptr = malloc(sizeof(ptr) * count + 1);
	ptr[count] = 0;
	while (count - 1 >= 1)
	{
		ptr[count - 1] = nbr % 10 + '0';
		nbr = nbr / 10;
		count--;
	}
	if (nbr_cp >= 0)
		ptr[0] = nbr % 10 + '0';
	return (ptr);
}

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	dest = malloc(sizeof(src) * ft_strlen(src));
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}
