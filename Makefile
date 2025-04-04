# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: briandri <briandri@student.42antanana      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/04 19:02:28 by briandri          #+#    #+#              #
#    Updated: 2025/03/18 13:41:29 by briandri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = cc
AR = ar

CFLAGS = -Wextra -Wall -Werror -I./include
SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c \
	ft_memset.c ft_bzero.c ft_memcpy.c ft_toupper.c ft_tolower.c ft_atoi.c ft_memmove.c \
	ft_strlcpy.c ft_strlcat.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c \
	ft_memcmp.c ft_strnstr.c ft_strdup.c ft_calloc.c ft_substr.c ft_strjoin.c ft_strtrim.c \
	ft_split.c ft_strmapi.c ft_itoa.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

SRC_BONUS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstlast_bonus.c ft_lstsize_bonus.c ft_lstadd_back_bonus.c \
			ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c 

OBJ = $(SRC:.c=.o)
OBJ_BONUS = $(SRC_BONUS:.c=.o)

COLOR_BoldCyan = \033[1;36m
COLOR_Reset = \033[0m
COLOR_Red = \033[31m

%.o : %.c
	$(CC) $(CFLAGS) -o $@ -c $<

$(NAME) : $(OBJ)
	$(AR) -rcs $@ $^
	@echo "$(COLOR_BoldCyan)Library created: $(NAME)"

bonus : $(OBJ) $(OBJ_BONUS)
	$(AR) -rcs $(NAME) $^

all : $(NAME)
	@echo "$(COLOR_BoldCyan)Building $(NAME)..."

clean :
	rm -f $(OBJ) $(OBJ_BONUS)
	@echo "$(COLOR_Red)Object files cleaned."

fclean : clean
	rm -f $(NAME)
	@echo "$(COLOR_Reset)Library $(NAME) cleaned."

re : fclean all

PHONY : all clean fclean re bonus
