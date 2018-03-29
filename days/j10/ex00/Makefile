# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pde-rent <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/09/19 16:48:47 by pde-rent          #+#    #+#              #
#    Updated: 2017/09/20 02:45:18 by pde-rent         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC =	srcs/ft_putchar.c	\
		srcs/ft_putnbr.c	\
		srcs/ft_putstr.c	\
		srcs/ft_strcmp.c	\
		srcs/ft_strlen.c	\
		srcs/ft_swap.c

CMP =	srcs/ft_putchar.o	\
		srcs/ft_putnbr.o	\
		srcs/ft_putstr.o	\
		srcs/ft_strcmp.o	\
		srcs/ft_strlen.o	\
		srcs/ft_swap.o

FLAGS = -Wall -Werror -Wextra
INCLUDES = -I /includes

all: $(NAME)

$(NAME):
	gcc $(FLAGS) $(INCLUDES) -c $(SRC)
	ar rc $(NAME) $(CMP)
	ranlib $(NAME)

clean:
	/bin/rm -rf $(CMP)

fclean: clean
	/bin/rm -rf $(NAME)

re: fclean all
