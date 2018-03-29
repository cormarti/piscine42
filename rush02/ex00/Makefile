# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pde-rent <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/09/17 23:14:31 by pde-rent          #+#    #+#              #
#    Updated: 2017/09/17 23:14:33 by pde-rent         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = colle-2
SRC = fct.c test_rush.c main.c
FLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -o $(NAME) $(SRC)

clean:

fclean: clean
	rm -f $(NAME)

re: fclean all