/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_light.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-rent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/16 17:31:48 by pde-rent          #+#    #+#             */
/*   Updated: 2017/09/16 18:47:20 by pde-rent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

# define EVEN(x) (((x % 2) != 0) ? FALSE : TRUE)
# define MAX(x, y) ((x) < (y) ? (y) : (x))
# define MIN(x, y) ((x) < (y) ? (x) : (y))
# define MEAN(x, y) (((x) + (y)) / 2)
# define ABS(x) ((x > 0) ? x : -x)
# define MULT(x, y) ((x) * (y))
# define SUM(x, y) ((x) + (y))
# define SUB(x, y) ((x) - (y))
# define DIV(x, y) ((x) / (y))
# define MOD(x, y) ((x) % (y))
# define CONCAT(x, y) x##y
# define FALSE 0
# define TRUE 1

void	ft_sort_integer_table(int *tab, int size);
void	ft_print_words_tables(char **tab);
void	ft_swap(int *a, int *b);
void	ft_putstr(char *str);
void	ft_putchar(char c);
void	ft_putnbr(int nb);
char	**ft_split_whitespaces(char *str);
char	*ft_itoa_base(int value, int base);
char	*ft_strdup(char *src);
char	*ft_strrev(char *str);
char    *ft_itoa(int nb);
int	    ft_atoi_base(char *str, char *base);
int		ft_strstr(char *str, char *to_find);
int		ft_strcat(char *dest, char *src);
int		ft_str_is_alphanum(char *str);
int		ft_strcmp(char *s1, char *s2);
int		ft_str_is_numeric(char *str);
int		ft_str_is_alpha(char *str);
int		ft_pow(int nb, int power);
int		ft_strlen(char *str);
int		ft_fibo(int index);
int		ft_atoi(char *str);
int		ft_fact(int nb);
int		ft_sqrt(int nb);
int		is_alphanum(char c);
int		is_alpha(char c);
int		is_space(char c);
int		is_prime(int nb);
int		is_par(char c);
int		is_num(char c);
int		is_num(char c);
int		is_op(char c);
int		len(char *str);
int		power(int x, int y);
int		gcdr(int x, int y);
int		mult(int x, int y);
int		sum(int x, int y);
int		sub(int x, int y);
int		div(int x, int y);
int		mod(int x, int y);

#endif