# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pde-rent <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/09/19 16:48:47 by pde-rent          #+#    #+#              #
#    Updated: 2017/09/20 03:08:48 by pde-rent         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

PATH = /bin/
NAME = libop.a

SRC = 	ft_atoi.c		\
		ft_pow.c		\
		ft_putchar.c	\
		ft_putnbr.c		\
		ft_putstr.c		\
		is_smth.c		\
		operands.c		\
		is_smth2.c		\
		operands2.c

CMP = 	ft_atoi.o		\
		ft_pow.o		\
		ft_putchar.o	\
		ft_putnbr.o		\
		ft_putstr.o		\
		is_smth.o		\
		operands.o		\
		is_smth2.o		\
		operands2.o

FLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -c $(SRC)
	ar rc $(NAME) $(CMP)
	ranlib $(NAME)

clean:
	$(PATH)rm -rf $(CMP)

fclean: clean
	$(PATH)rm -rf $(NAME)

re: fclean all
