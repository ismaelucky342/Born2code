# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ismherna <ismherna@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/22 21:37:15 by ismherna          #+#    #+#              #
#    Updated: 2024/12/14 15:03:13 by ismherna         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

G = \033[1;32m
Y = \033[1;33m
R = \033[0;31m
NC = \033[0m


NAME =			philo_bonus

CC =			gcc

CFLAGS =		-Wall -Werror -Wextra  -g3 

SRC_FILES =		main.c \
				utils/ft_atol.c \
				utils/ft_error_msg.c \
				utils/ft_current_time.c \
				utils/ft_strcpy.c \
				utils/ft_usleep.c \
				routine_bonus.c \
				init_bonus.c \
				ft_free.c \
				parsing_bonus.c \
				output_bonus.c \

OBJS = $(SRC_FILES:.c=.o)

all: $(NAME)
	@echo "															"	
	@echo "															"	
	@echo "															"	
	@echo "$(G)██████╗ ██╗  ██╗██╗██╗      ██████╗ ███████╗ ██████╗ ██████╗ ██╗  ██╗███████╗██████╗ ███████╗        ██████╗  ██████╗ ███╗   ██╗██╗   ██╗███████╗$(RESET)	"
	@echo "$(G)██╔══██╗██║  ██║██║██║     ██╔═══██╗██╔════╝██╔═══██╗██╔══██╗██║  ██║██╔════╝██╔══██╗██╔════╝        ██╔══██╗██╔═══██╗████╗  ██║██║   ██║██╔════╝$(RESET)	"
	@echo "$(G)██████╔╝███████║██║██║     ██║   ██║███████╗██║   ██║██████╔╝███████║█████╗  ██████╔╝███████╗        ██████╔╝██║   ██║██╔██╗ ██║██║   ██║███████╗$(RESET)	"
	@echo "$(G)██╔═══╝ ██╔══██║██║██║     ██║   ██║╚════██║██║   ██║██╔═══╝ ██╔══██║██╔══╝  ██╔══██╗╚════██║        ██╔══██╗██║   ██║██║╚██╗██║██║   ██║╚════██║$(RESET)	"
	@echo "$(G)██║     ██║  ██║██║███████╗╚██████╔╝███████║╚██████╔╝██║     ██║  ██║███████╗██║  ██║███████║███████╗██████╔╝╚██████╔╝██║ ╚████║╚██████╔╝███████║$(RESET)	"
	@echo "$(G)╚═╝     ╚═╝  ╚═╝╚═╝╚══════╝ ╚═════╝ ╚══════╝ ╚═════╝ ╚═╝     ╚═╝  ╚═╝╚══════╝╚═╝  ╚═╝╚══════╝╚══════╝╚═════╝  ╚═════╝ ╚═╝  ╚═══╝ ╚═════╝ ╚══════╝$(RESET)	"
	@echo "$(G)            		 						      2024/05/25 - ismherna@student.42.fr - 42 Madrid - Ismael Hernández		$(RESET)"	

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.c
	@printf "%-200s\r" ">Philo_bonus compiling: $(CC) $(CFLAGS) -c -o $@ $<"
	@$(CC) $(CFLAGS) -c -o $@ $<

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
