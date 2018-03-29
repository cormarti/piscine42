/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-rent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/13 11:06:54 by pde-rent          #+#    #+#             */
/*   Updated: 2017/09/14 05:00:09 by pde-rent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strcat(char *dest, char *src, int argc, int argmax)
{
	int		i;
	int		j;

	i = 0;
	j = -1;
	while (dest[i] != '\0')
		i++;
	while (src[++j] != '\0')
		dest[i + j] = src[j];
	if (!(argc == argmax))
		dest[i + j] = '\n';
	return (dest);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*array;
	int		i;

	i = -1;
	array = (char*)malloc(sizeof(*array) * (argc));
	while (++i < argc - 1)
		array = ft_strcat(array, argv[i + 1], i, argc - 2);
	printf("%s", array);
	return (array);
}

int		main(int argc, char *argv[])
{
	ft_concat_params(argc, argv);
	return 0;
}
//"o0PpDa6RLl" "1nM2Ivq" "aX9c" "JDgmxY" "DMeB" "TzK91qd7S" "WYNHS3"
/*
 1nM2Ivq$
 aX9c$
 JDgmxY$
-^P^ODMeB$
+DMeB$
 TzK91qd7S$
 WYNHS3$
 avlYVXfLsFH$
 */