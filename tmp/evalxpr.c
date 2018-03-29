/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_xpr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-rent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/16 17:57:43 by pde-rent          #+#    #+#             */
/*   Updated: 2017/09/17 23:41:12 by pde-rent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int flag = 0;

void    var_init(int *i, int *j, int *k, int *l, int *m)
{
    *i = -1;
    *j = -1;
    *k = 0;
    *l = 0;
    *m = 0;
}
/*
char    *open_par(char *str, char *tmp, int *k)
{
    int j;
    int i;
    int nb_par_o;
    int nb_par_c;

    nb_par_c = 0;
    nb_par_o = 1;
    j = -1;
    *k++;
    while (nb_par_c != nb_par_o)
    {   
        ft_putnbr(++flag);
        if (str[*k] == '(')
            nb_par_o++;
        if (str[*k] == ')')
            nb_par_c++;
        if (!is_space(str[*k]))
            tmp[++j] = str[*k];
        *k++;
    }
//  *k--;
    return (tmp);
}
*/
char    *open_par(char *str, char *tmp, int *k)
{
    int j;
    int i;
    int nb_par_o;
    int nb_par_c;

    nb_par_c = 0;
    nb_par_o = 1;
    j = -1;
    while (str[++*k -1] != ')' && nb_par_o > nb_par_c)
    {
        if (!is_space(str[*k]))
            tmp[++j] = str[*k];
        if (str[*k] == '(')
            nb_par_o++;
        if (str[*k] == ')')
            nb_par_c++;
    }
//  *k--;
    return (tmp);
}

int     eval_xpr(char *str)
{
    int     i;
    int     j;
    int     xpr_ln;
    int     nb_par;
    int     nb_op;
    char    **xpr;
    char    *tmp;

    var_init(&i, &j, &xpr_ln, &nb_par, &nb_op);
    xpr_ln = ft_strlen(str);
    while (str[++i] != 0)
    {
        if (str[i] == '(' || str[i] == ')')
            nb_par++;
        if (str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/' || str[i] == '%')
            nb_op++;
    }
    if (nb_par % 2 != 0)
        return (0);     //Error: odd parenthesis number
    nb_par /= 2;
    i = -1;
    while (str[++i] != 0)
        if (is_space(str[i]))
            j++;
    i = -1;
    if ((xpr = malloc((nb_op + nb_par) * sizeof(*xpr))) == NULL)     //Error: malloc did not alloc D2 correclty
        return (0);
    while (++i < nb_op)
        if ((xpr[i] = malloc((xpr_ln - j + 1) * sizeof(*xpr[i]))) == NULL)     //Error: malloc did not alloc D1 correctly
            return (0);
    if ((tmp = malloc((xpr_ln - j + 1) * sizeof(*tmp))) == NULL)     //Error: malloc did not alloc D2 correclty
        return (0);
    var_init(&i, &j, &xpr_ln, &nb_par, &nb_op);
    while (str[++i])        //Space remover
        if (!is_space(str[i]))
        {
            if (is_num(str[i]) || is_op(str[i]))
                xpr[xpr_ln][++j] = str[i];
            if (str[i] == '(')
            {
                if (j != -1)
                    xpr_ln++;
                xpr[xpr_ln] = open_par(str, tmp, &i);
            //  i += ft_strlen(tmp);
                xpr_ln++;
            }
            if (is_op(str[i]))
            {
                nb_op++;
                if ((nb_op % 2) == 0)
                {
                    xpr_ln++;
                    j = -1;
                }
            }
        }
    i = -1;
    ////////////////////////////////////// COMMENT
    while (++i < xpr_ln)
    {
        ft_putstr(xpr[i]);
        ft_putchar('\n');
    }
    ///////////////////////////////////// END OF COMMENT
    ///////////////////////////////////// CALCULATE THE PARSED XPR[i] THEN RETURN THE RESULT
    return (0);    
}

int     main(int ac, char **av)
{
    if (ac != 2)
        return (0);                             //Error: odd argument number
    return (eval_xpr(av[1]));
}