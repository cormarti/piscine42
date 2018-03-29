/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libsq.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-rent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/16 17:31:48 by pde-rent          #+#    #+#             */
/*   Updated: 2017/09/20 03:17:55 by pde-rent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBSQ_H
# define LIBSQ_H

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

#define ABS(x)	(x < 0) ? - x : x

void	print_table(char **tab, int *max, char fill);
void	file_to_string(char *argv);
void	ft_putstr(char *str);
void	read_standard(void);
void	ft_putchar(char c);
void	ft_putnbr(int nb);
char	**ft_assign_table(char **tab, char *str, int sizeline, int nblines);
char	**table_to_pascal(char **tab, char space, char wall, char fill);
char	**string_to_table(char *str, char wall, char space, char fill);
char	*ft_strrev(char *str);
char	*ft_itoa(int nb);
int		**ft_binar(char **tab, int **pascal, char space, char wall);
int		*ft_pascal(char **tab, int **pascal, char fill);
int		is_nbline_valid(char *str, int countlines);
int		min_around(int j, int i, int **pascal);
int		is_line_valid(char *str, int i);
int		is_map_valid(char *str);
int		ft_strlen(char *str);
int		ft_atoi(char *str);

#endif
