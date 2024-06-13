# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ismherna <ismherna@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/22 15:48:04 by ismherna          #+#    #+#              #
#    Updated: 2024/03/12 12:40:17 by ismherna         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libftprintf.a
INCLUDE	= 	pintf.h

SRC		=	ft_printf.c			\
			ft_string.c			\
			ft_unsigned.c		\
			ft_number.c			\
			ft_hexadecimals.c	\
			ft_char.c			\
			ft_pointers.c		\

OBJ		=	${SRC:.c=.o}

CC		=	gcc
RM		=	rm -f
AR		=	ar rc
RN		=	ranlib

CFLAGS	=	-Wall -Wextra -Werror

DEF_COLOR   =   \033[0;39m
GRAY        =   \033[0;90m
RED         =   \033[0;91m
GREEN       =   \033[0;92m
YELLOW      =   \033[0;93m
BLUE        =   \033[0;94m
MAGENTA     =   \033[0;95m
CYAN        =   \033[0;96m
WHITE       =   \033[0;97m

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

all: $(NAME)
	norminette 

$(NAME):	${OBJ} 
	@echo "Compiling .."
	${AR} ${NAME} ${OBJ}
	${RN} ${NAME}

	@echo "$(GREEN)ft_printf compiled!$(DEF_COLOR)"
	@echo "$(BLUE)Compiled Objects:  $(words $(NAME)  ${OBJ})$(DEF_COLOR)"
	@echo "$(GREEN) Done ! $(DEF_COLOR)"


clean:
	@echo "$(RED)Removing .o  ...$(DEF_COLOR)"
	${RM} ${OBJ}
	@echo "$(BLUE)Deleted Objects: $(words ${OBJ})  ${OBJ}$(DEF_COLOR)"
	@echo "$(GREEN)Done !"

fclean: clean
	@echo "$(RED)Removing libftprintf.a ...$(DEF_COLOR)"	
	${RM} $(NAME)
	@echo "$(BLUE)Deleted Objects:  $(words $(NAME))  $(NAME)$(DEF_COLOR)"
	@echo "$(GREEN)Done !$(DEF_COLOR)"

re: fclean all  
