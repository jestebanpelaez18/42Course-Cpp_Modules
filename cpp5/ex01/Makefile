# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jpelaez- <jpelaez-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/27 15:56:00 by jpelaez-          #+#    #+#              #
#    Updated: 2023/12/02 19:52:09 by jpelaez-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =  Form

SRC = main.cpp Bureaucrat.cpp Form.cpp

OBJECT = $(SRC:.cpp=.o)
HEADER = Bureaucrat.hpp Form.hpp\

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