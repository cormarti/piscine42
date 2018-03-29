/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match_with_flags.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-rent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/10 21:58:09 by pde-rent          #+#    #+#             */
/*   Updated: 2017/09/10 21:58:31 by pde-rent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	str_ok(char *s1, char *s2);
char *str_offset(char *str, int i);

int match(char *s1, char *s2)
{
	int res;

	res = 1;
	if (str_ok(s1, s2) == 0)
	{
		printf("flag a %d\n",res);
		return(res);
	}
	if (((s1[0] != s2[0]) && s2[0] != '*') || (s1[0] == '\0' && (s2[0] != *str_offset(s1,-1) && s2[0] != '*')))
	{
		res = 0;
		printf("flag h %d\n",res);
		return (res);
	}
	else if ((s1[0] == s2[0]) && s1[0] != '*')
	{
		if (!str_ok(str_offset(s1,1), str_offset(s2,1)))
		{
			printf("flag b %d\n",res);
			return (res);
		}
		printf("flag g %d\n",res);
		res = match(str_offset(s1,1), str_offset(s2,1));
		return(res);
	}
	else if (*str_offset(s1,1) == '*' && *str_offset(s2,1) == '*')
	{
		printf("flag c - callback %d\n",res);
		res = match(str_offset(s1,1), s2);
		return(res);
	}
	else if (s2[0] == '*' && s1[0] != '\0')
	{
		return ((match(s1, str_offset(s2,1)) == 1 || match(str_offset(s1,1), s2) == 1));
	}
	else if (s2[0] == '*' && s1[0] == '\0')
	{
		printf("flag d - callback %d\n",res);
		res = match(s1, str_offset(s2,1));
		return(res);
	}
	if (*str_offset(s1,1) == '\0' && *str_offset(s1,1) == '\0')
	{
		if (s2[0] != s1[0] && s2[0] != '*')
			res = 0;
		printf("flag i %d\n",res);
	}
	return (res);
}

char *str_offset(char *str, int i)
{
	return(str + i);
}

int	str_ok(char *s1, char *s2)
{
	if (s1[0] == '\0' && s2[0] == '\0')
		return(0);
	return (1);
}

int main()
{
	char *test1 = "aa";
	char *test2 = "***a**0**a";
	printf("Expected: %d\n", match(test1, test2));

	return(0);
}