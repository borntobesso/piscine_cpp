# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sojung <sojung@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/03 12:58:41 by sojung            #+#    #+#              #
#    Updated: 2022/08/15 18:39:25 by sojung           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Intern

SRC = main.cpp Bureaucrat.cpp Form.cpp ShrubberyCreationForm.cpp \
	RobotomyRequestForm.cpp PresidentialPardonForm.cpp Intern.cpp

OBJ = $(SRC:.cpp=.o)

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98 -g3

%.o : %.cpp
	$(CC) $(FLAGS) -I. -c $^ -o $@

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(FLAGS) -I. $^ -o $@

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all
