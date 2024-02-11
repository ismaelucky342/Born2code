# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rde-migu <rde-migu@student.42madrid>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/17 18:46:32 by rde-migu          #+#    #+#              #
#    Updated: 2024/01/30 14:56:27 by rde-migu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIB = ar rcs
RM = rm -f
CC = gcc
CCFLAGS = -Wall -Wextra -Werror
NAME = libft.a 
SRC = ft_tolower.c ft_putstr_fd.c ft_putendl_fd.c ft_isalnum.c ft_isalpha.c ft_isdigit.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_strncmp.c ft_strnstr.c ft_putchar_fd.c ft_putnbr_fd.c ft_strjoin.c ft_calloc.c ft_strdup.c ft_memchr.c ft_memcmp.c ft_substr.c ft_itoa.c ft_split.c ft_strrchr.c ft_strmapi.c ft_striteri.c ft_atoi.c ft_strchr.c ft_strtrim.c
OBJ = $(SRC:.c=.o)
INCLUDE = libft.h

SRCBONUS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

OBJBONUS = $(SRCBONUS:.c=.o)

all: $(NAME)

$(NAME): $(OBJ) $(INCLUDE) 
	$(LIB) $(NAME) $(OBJ)

bonus: $(OBJ) $(OBJBONUS) $(INCLUDE)
	$(LIB) $(NAME) $(OBJBONUS) $(OBJ)


%.o: %.c $(INCLUDE) 	
	$(CC) $(CCFLAGS) -c $< -o $@

.PHONY: clean fclean re 

clean:	
	$(RM) $(OBJ) $(OBJBONUS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

rebonus: fclean bonus


