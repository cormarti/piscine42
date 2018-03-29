/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alphanum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-rent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/07 20:39:24 by pde-rent          #+#    #+#             */
/*   Updated: 2017/09/16 21:04:26 by pde-rent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_alphanum(char *str)
{
	int i;

	i = -1;
	while (str[++i] != '\0')
	if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= '0' && str[i] <= '9'))
		return (1);
	return (0);
}

int		ft_str_is_alpha(char *str)
{
	int i;

	i = -1;
	while (str[++i] != '\0')
		if (!((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z')))
			return (0);
	return (1);
}

int		ft_str_is_numeric(char *str)
{
	int i;

	i = -1;
	while (str[++i] != '\0')
		if (!((str[i] >= '0' && str[i] <= '9')))
			return (0);
	return (1);
}