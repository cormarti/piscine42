/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geargenc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/09 21:38:53 by geargenc          #+#    #+#             */
/*   Updated: 2017/09/09 21:43:25 by geargenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUDOKU_H

# define SUDOKU_H

# include <unistd.h>
# include <stdlib.h>

int		check(char **grid, int j, int i);
int		check_error(int argc, char **argv);
int		sudoku(char **grid, char **argv, int j, int i);
int		sudoku_rev(char **grid, char **argv, int j, int i);
char	**init_grid(char **argv, char def);
void	print_grid(char **grid);
int		grid_cmp(char **grid1, char **grid2);
void	grid_free(char **grid);
void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_strlen(char *str);

#endif
