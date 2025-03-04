# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: briandri <briandri@student.42antanana      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/04 19:02:28 by briandri          #+#    #+#              #
#    Updated: 2025/03/04 19:02:41 by briandri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = cc
CFLAGS = -Wextra -Wall -Werror -I./include
SRC = ft_isdigit.c ft_isalpha.c ft_isalnum.c ft_isascii.c 
OBJ := $(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	ar -rv $@ $^

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

PHONY : all clean fclean re
