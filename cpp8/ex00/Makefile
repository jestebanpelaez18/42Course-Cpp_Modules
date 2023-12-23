# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jpelaez- <jpelaez-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/11 14:46:56 by jpelaez-          #+#    #+#              #
#    Updated: 2023/12/23 11:59:51 by jpelaez-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = easyfind

SRC = main.cpp 

OBJECT = $(SRC:.cpp=.o)
HEADER = easyfind.hpp\

FLAGS = -Wall -Wextra -Werror -std=c++98
CC = c++
INCLUDES = -Iincludes -I

all: $(NAME)

$(NAME): $(OBJECT) $(HEADER)
		$(CC) $(INCLUDES) $(FLAGS) $(OBJECT) -o $(NAME)

clean:
	rm -f $(OBJECT) 

fclean: clean
	   rm -f $(NAME)

re: fclean all

.PHONY: all re fclean clean