# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: briandri <briandri@student.42antanana      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/04 19:02:28 by briandri          #+#    #+#              #
#    Updated: 2025/03/15 10:54:14 by briandri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = cc
CFLAGS = -Wextra -Wall -Werror -I./include
SRC =	$(shell find . -name "*.c" -type f)
OBJ := $(SRC:.c=.o)

COLOR_BoldCyan = \033[1;36m
COLOR_Reset = \033[0m
COLOR_Red = \033[31m

all : $(NAME)
	@echo "$(COLOR_BoldCyan)Building $(NAME)..."

$(NAME) : $(OBJ)
	@ar -r $@ $^
	@echo "$(COLOR_BoldCyan)Library created: $(NAME)"

%.o : %.c
	@$(CC) $(CFLAGS) -c $< -o $@

clean :
	@rm -f $(OBJ)
	@echo "$(COLOR_Red)Object files cleaned."

fclean : clean
	@rm -f $(NAME)
	@echo "$(COLOR_Reset)Library $(NAME) cleaned."

re : fclean all

PHONY : all clean fclean re
