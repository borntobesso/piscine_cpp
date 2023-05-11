# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sojung <sojung@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/05 11:15:54 by sojung            #+#    #+#              #
#    Updated: 2022/07/05 17:29:08 by sojung           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

SRC = megaphone.cpp

OBJ = $(SRC:.cpp=.o)

CC = g++

FLAGS = -Wall -Wextra -Werror -std=c++98

all : $(NAME)

%.o : %.cpp
	$(CC) $(FLAGS) -c $< -o $@

$(NAME) : $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $@

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all
