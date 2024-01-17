


LIB = ar rcs
RM = rm -f
CC = gcc
CCFLAGS = -Wall -Wextra -Werror
NAME = libft.a
SRC = ft_tolower.c
OBJ = $(SRC:.c=.o)
INCLUDE = libft.h

all: $(NAME)

$(NAME): $(OBJ) 
	$(LIB) $(NAME) $(OBJ)

%.o: %.c 	
	$(CC) $(CCFLAGS) -c $< -o $@

.PHONY: clean fclean re 

clean:	
	$(RM) $(OBJ) 

fclean:
	$(RM) $(NAME)

re: fclean all




