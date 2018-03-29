/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libop.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-rent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/16 17:31:48 by pde-rent          #+#    #+#             */
/*   Updated: 2017/09/20 23:24:23 by pde-rent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBOP_H
# define LIBOP_H

# include <unistd.h>

# define SUM(x, y) ((x) + (y))
# define SUB(x, y) ((x) - (y))
# define MULT(x, y) ((x) * (y))
# define DIV(x, y) ((x) / (y))
# define MOD(x, y) ((x) % (y))
# define ABS(x) ((x > 0) ? x : -x)

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
char	*ft_itoa(int nb);
int		ft_atoi(char *str);
int		ft_strlen(char *str);
int		ft_pow(int nb, int power);
int		is_op(char c);
int		is_num(char c);
int		is_space(char c);
int		is_par(char c);
int		is_alpha(char c);
int		is_num(char c);
int		is_alphanum(char c);
int		is_prime(int nb);
int		len(char *str);
int		gcdr(int x, int y);
int		sum(int x, int y);
int		sub(int x, int y);
int		mult(int x, int y);
int		div(int x, int y);
int		mod(int x, int y);
int		power(int x, int y);

#endif
