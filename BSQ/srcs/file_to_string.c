/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlux <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/14 23:13:16 by tlux              #+#    #+#             */
/*   Updated: 2017/09/20 11:55:36 by tlux             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libsq.h"
#include <stdio.h>

int		is_nbline_valid(char *str, int countlines)
{
	int		i;
	int		j;
	char	*stack;

	i = 0;
	j = 0;
	stack = (char *)malloc(sizeof(*stack) * 10);
	while (str[i] != '\n')
		i++;
	i -= 4;
	while (i - j >= 0)
	{
		stack[j] = str[i - j];
		j++;
	}
	if (countlines == ft_atoi(ft_strrev(stack)))
		return (1);
	return (0);
}

int		is_line_valid(char *str, int i)
{
	int countlines;
	int length;
	int savelength;

	countlines = 0;
	length = 0;
	savelength = 0;
	while (str[++i] != '\0')
	{
		while (str[i] != '\n')
		{
			length++;
			i++;
		}
		countlines++;
		if (savelength == 0)
			savelength = length;
		if (length != savelength)
			return (0);
		length = 0;
	}
	if (!is_nbline_valid(str, countlines))
		return (0);
	return (1);
}

int		is_map_valid(char *str)
{
	int		i;
	char	wall;
	char	fill;
	char	space;

	i = 0;
	while (str[i] != '\n')
		i++;
	fill = str[i - 1];
	wall = str[i - 2];
	space = str[i - 3];
	if (!is_line_valid(str, i))
		return (0);
	if (str[i + 1] == '\0')
		return (0);
	while (str[++i] != '\0')
		if (str[i] != wall && str[i] != space && str[i] != '\n')
			return (0);
	string_to_table(str, wall, space, fill);

	return (1);
}

char	*cat(char *buf, char c, int size)
{
	int	i;
    char *tmp;

    tmp = malloc((size + 2) * sizeof(char));
	i = -1;
	while (buf[++i] != '\0')
        tmp[i] = buf[i];
    tmp[i++] = c;
	tmp[i++] = '\0';
    free(buf);
	return (tmp);
}

void	read_standard(void)
{
    char *buf;
    char c;
    int handle;
    int size;

    size = 1;
    buf = malloc(size * sizeof(char));
    buf[0] = '\0';
    while(((handle = read(0, &c, 1))) > 0)
	{
        buf = cat(buf, c, size);
        size++;
	}
    printf("%s\n",buf);
	if(!is_map_valid(buf))
		write(2, "map error\n", 10);
}

void	file_to_string(char *argv)
{
	int		fd;
	int		ret;
	int		i;
	char	*str;
	char	buf[1];

	i = 0;
	ret = 1;
	fd = open(argv, O_RDONLY);
	while (ret == 1)
	{
		ret = read(fd, buf, 1);
		i++;
	}
	close(fd);
	str = (char *)malloc(sizeof(*str) * (i));
	if (str == NULL)
		exit(0);
	fd = open(argv, O_RDONLY);
	read(fd, str, i);
	str[i - 1] = '\0';
	close(fd);
	if(!is_map_valid(str))
		write(2, "map error\n", 10);
}