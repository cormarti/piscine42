/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fct.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahoarau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/16 17:15:11 by ahoarau           #+#    #+#             */
/*   Updated: 2017/09/17 22:59:28 by ahoarau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FCT_H
# define FCT_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

int		ft_strlen(char *s);
char	*ft_realloc_strcat(char *s1, char *s2);
char	*ft_positive_itoa(int nb);
char	*ft_strcpy(char *dest, char *src);
#endif
