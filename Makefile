# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: briandri <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/04 10:14:13 by briandri          #+#    #+#              #
#    Updated: 2025/03/04 13:00:37 by briandri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = cc
CFLAGS += -Wextra -Wall -Werror -I./include
SRC = $(wildcard *.c)
OBJ = $(SRC : .c = .o)

all : $(NAME)

$(NAME) : $(OBJ)
	ar -rv $^

%.o : $(OBJ)
	$(cc) -o $@ -c $^

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all
