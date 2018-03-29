/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-rent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/07 20:38:29 by pde-rent          #+#    #+#             */
/*   Updated: 2017/09/12 09:53:45 by pde-rent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_alphanumeric(char c);

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (is_alphanumeric(str[i]) && (str[i] >= 'a' && str[i] <= 'z'))
			if ((i == 0) || !is_alphanumeric(str[i - 1]))
				str[i] -= 32;
		if (is_alphanumeric(str[i]) && (str[i] >= 'A' && str[i] <= 'Z'))
			if (is_alphanumeric(str[i - 1]))
				str[i] += 32;
		i++;
	}
	return (str);
}

int		is_alphanumeric(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
			|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}
