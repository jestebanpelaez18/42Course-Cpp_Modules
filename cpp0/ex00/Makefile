# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jpelaez- <jpelaez-@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/12 16:34:27 by jpelaez-          #+#    #+#              #
#    Updated: 2023/09/13 16:39:04 by jpelaez-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

SRC = megaphone.cpp

OBJECT = $(SRC:.cpp=.o)
HEADER = megaphone.hpp

FLAGS = -Wall -Wextra -Werror
CC = c++


all: $(NAME)

$(NAME):  $(OBJECT) $(HEADER)
		$(CC) $(FLAGS) $(OBJECT) -o $(NAME) 

clean:
	rm -f $(OBJECT) 

fclean: clean
	   rm -f $(NAME)

re: fclean all

.PHONY: all re fclean clean