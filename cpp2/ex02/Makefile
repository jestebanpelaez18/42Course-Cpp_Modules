# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jpelaez- <jpelaez-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/04 14:22:28 by jpelaez-          #+#    #+#              #
#    Updated: 2023/10/06 13:45:26 by jpelaez-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Fixed

SRC = main.cpp Fixed.cpp

OBJECT = $(SRC:.cpp=.o)

FLAGS = -Wall -Wextra -Werror -std=c++98
CC = c++


all: $(NAME)

$(NAME): 
		$(CC) $(SRC) $(FLAGS) -o $(NAME)

clean:
	rm -f $(OBJECT) 

fclean: clean
	   rm -f $(NAME)

re: fclean all

.PHONY: all re fclean clean