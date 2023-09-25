# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jpelaez- <jpelaez-@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/13 16:41:07 by jpelaez-          #+#    #+#              #
#    Updated: 2023/09/25 18:57:07 by jpelaez-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = MyAwesomePhoneBook

SRC = main.cpp PhoneBook.cpp 

OBJECT = $(SRC:.cpp=.o)
HEADER = Contact.hpp PhoneBook.hpp 

FLAGS = -Wall -Wextra -Werror -std=c++98
CC = c++
IFLAGS = -I $(HEADER)


all: $(NAME)

$(NAME): 
		$(CC) $(SRC) $(FLAGS) -o $(NAME)

clean:
	rm -f $(OBJECT) 

fclean: clean
	   rm -f $(NAME)

re: fclean all

.PHONY: all re fclean clean