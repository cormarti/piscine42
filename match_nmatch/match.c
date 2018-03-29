/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-rent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/10 19:27:23 by pde-rent          #+#    #+#             */
/*   Updated: 2017/09/10 23:37:11 by pde-rent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     check_chars(char *s1, char *s2, int i);
int     str_ok(char *s1, char *s2);
char    *str_offset(char *str, int i);

int     match(char *s1, char *s2)
{
	if (check_chars(s1, s2, -1) ==  0)
		return (0);
	if (str_ok(s1, s2) == 0)
		return(1);
	if (((s1[0] != s2[0]) && s2[0] != '*') ||
			(s1[0] == '\0' && (s2[0] != *str_offset(s1,-1) && s2[0] != '*')))
		return (0);
	else if ((s1[0] == s2[0]) && s1[0] != '*')
	{
		if (!str_ok(str_offset(s1,1), str_offset(s2,1)))
			return(match(str_offset(s1,1), str_offset(s2,1)));
	}
	else if ((*str_offset(s1,1) == '*') && (*str_offset(s2,1) == '*'))
		return(match(str_offset(s1,1), s2));
	else if (s2[0] == '*' && s1[0] != '\0')
		return ((match(s1, str_offset(s2,1)) == 1 || match(str_offset(s1,1), s2) == 1));
	else if (s2[0] == '*' && s1[0] == '\0')
		return(match(s1, str_offset(s2,1)));
	if (*str_offset(s1,1) == '\0' && *str_offset(s1,1) == '\0')
		if (s2[0] != s1[0] && s2[0] != '*')
			return (0);
	return (1);
}

int     check_chars(char *s1, char *s2, int i)
{
	int j;
	int k;
	int l;
	int m;

	i = -1;
	j = 0;
	l = -1;
	m = 0;
	while (s1[++i] != '\0')
	{    
		k = 0;
		while (s1[k] != '\0')
		{
			if (s2[j] == s1[i])
				j++;
			k++;
		}
	}
	while (s2[++l] != '\0')
		if (s2[l] != '*')
			m++;
	if (j < m)
		return (0);
	return (1);
}

char    *str_offset(char *str, int i)
{
	return(str + i);
}

int     str_ok(char *s1, char *s2)
{
	if (s1[0] == '\0' && s2[0] == '\0')
		return(0);
	return (1);
}