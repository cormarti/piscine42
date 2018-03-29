# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pde-rent <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/09/19 16:48:47 by pde-rent          #+#    #+#              #
#    Updated: 2017/09/20 02:53:47 by pde-rent         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

DIR = 			/bin/
LIB_DIR = 		srcs/
LIB_NAME =		libsq.a
INC_PATH = 		includes/

NAME = 			bsq

SRC = 			main.c \
				$(LIB_NAME)

FLAGS = 		-Wall -Werror -Wextra

all: $(NAME)

$(NAME):
				make -C $(LIB_DIR)
				gcc $(FLAGS) $(SRC) -I $(INC_PATH) -o $(NAME)

clean:
				make clean -C $(LIB_DIR)

fclean: 		clean
				make fclean -C $(LIB_DIR)
				$(DIR)rm -rf $(NAME)

re: 			fclean all
