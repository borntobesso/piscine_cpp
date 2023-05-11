# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sojung <sojung@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/08 14:46:50 by sojung            #+#    #+#              #
#    Updated: 2022/07/08 18:51:42 by sojung           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = account

SRC = Account.cpp tests.cpp

OBJ = $(SRC:.cpp=.o)

CC = g++

FLAGS = -Wall -Wextra -Werror -std=c++98

all : $(NAME)

%.o : %.cpp
	$(CC) $(FLAGS) -I. -c $^ -o $@

$(NAME) : $(OBJ)
	$(CC) $(FLAGS) -I. $^ -o $@

clean :
	rm $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all
