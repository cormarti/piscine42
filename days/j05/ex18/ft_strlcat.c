/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-rent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/07 20:44:18 by pde-rent          #+#    #+#             */
/*   Updated: 2017/09/12 09:53:59 by pde-rent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int dest_ln;
	unsigned int src_ln;

	i = 0;
	src_ln = 0;
	dest_ln = 0;
	while (dest[dest_ln] != '\0')
		dest_ln++;
	while (src[src_ln] != '\0')
		src_ln++;
	while (src[i] != '\0' && ((dest_ln + i) < (size - 1)))
	{
		dest[dest_ln + i] = src[i];
		i++;
	}
	dest[dest_ln + i] = '\0';
	return (src_ln + ((dest_ln < size) ? dest_ln : size));
}
