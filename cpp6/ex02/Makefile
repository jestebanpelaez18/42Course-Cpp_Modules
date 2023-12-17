# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jpelaez- <jpelaez-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/11 14:46:56 by jpelaez-          #+#    #+#              #
#    Updated: 2023/12/17 12:47:24 by jpelaez-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =  Base

SRC = main.cpp Base.cpp

OBJECT = $(SRC:.cpp=.o)
HEADER = Base.hpp A.hpp B.hpp C.hpp\

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