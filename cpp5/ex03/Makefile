# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jpelaez- <jpelaez-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/27 15:56:00 by jpelaez-          #+#    #+#              #
#    Updated: 2023/12/10 17:42:33 by jpelaez-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =  Intern

SRC = main.cpp Bureaucrat.cpp AForm.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp Intern.cpp

OBJECT = $(SRC:.cpp=.o)
HEADER = Bureaucrat.hpp AForm.hpp PresidentialPardonForm.hpp RobotomyRequestForm.hpp ShrubberyCreationForm.hpp Intern.hpp\

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