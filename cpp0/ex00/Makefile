# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jpelaez- <jpelaez-@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/12 16:34:27 by jpelaez-          #+#    #+#              #
#    Updated: 2023/09/25 18:57:12 by jpelaez-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

SRC = megaphone.cpp

OBJECT = $(SRC:.cpp=.o)

FLAGS = -Wall -Wextra -Werror -std=c++98
CC = c++


all: $(NAME)

$(NAME):  $(OBJECT)
		$(CC) $(FLAGS) $(OBJECT) -o $(NAME) 

clean:
	rm -f $(OBJECT) 

fclean: clean
	   rm -f $(NAME)

re: fclean all

.PHONY: all re fclean clean