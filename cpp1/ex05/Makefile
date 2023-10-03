# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jpelaez- <jpelaez-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/03 17:12:41 by jpelaez-          #+#    #+#              #
#    Updated: 2023/10/03 17:13:57 by jpelaez-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Harl

SRC = main.cpp Harl.cpp

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