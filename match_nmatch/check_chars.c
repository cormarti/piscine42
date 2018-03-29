/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-rent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/10 22:57:43 by pde-rent          #+#    #+#             */
/*   Updated: 2017/09/10 22:58:09 by pde-rent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int check_chars(char *s1, char *s2)
{
	int i;
	int j;
	int k;
	int l;
	int m;

	i = -1;
	j = 0;
	k = -1;
	l = -1;
	m = 0;
	while (s1[++i] != '\0')
		while (s2[j] != '\0' || s1[++k] != '\0')
			if (s2[j] == s1[i])
				j++;
	while (s2[++l] != '\0')
		if (s2[l] != '*')
			m++;
	if (j < m)
		return (0);
	return (1);
}

int main()
{
	char *test1 = "toto";
	char *test2 = "tota";

	printf("%d", check_chars(test1, test2));
	return (0);
}