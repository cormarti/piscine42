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
NAME = libsq.a
INC_PATH = ../includes/

SRC = 	table_to_pascal.c	\
		string_to_table.c	\
		file_to_string.c	\
		ft_putchar.c		\
		ft_putstr.c			\
		ft_putnbr.c			\
		ft_strrev.c			\
		ft_strlen.c			\
		ft_atoi.c			\
		ft_itoa.c			\
		print.c

CMP = 	table_to_pascal.o	\
		string_to_table.o	\
		file_to_string.o	\
		ft_putchar.o		\
		ft_putstr.o			\
		ft_putnbr.o			\
		ft_strrev.o			\
		ft_strlen.o			\
		ft_atoi.o			\
		ft_itoa.o			\
		print.o

FLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -c $(SRC) -I $(INC_PATH)
	ar rc ../$(NAME) $(CMP)
	ranlib ../$(NAME)

clean:
	$(PATH)rm -rf $(CMP)

fclean: clean
	$(PATH)rm -rf ../$(NAME)

re: fclean all
