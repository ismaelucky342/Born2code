# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ismherna <ismherna@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/22 21:37:15 by ismherna          #+#    #+#              #
#    Updated: 2024/12/11 17:40:15 by ismherna         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

G = \033[1;32m
Y = \033[1;33m
R = \033[0;31m
NC = \033[0m


NAME =			philo

CC =			gcc

CFLAGS =		-Wall -Werror -Wextra -fsanitize=thread -g

SRC_FILES =		main.c \
				utils/ft_allocate.c \
				utils/ft_atol.c \
				utils/ft_isdigit.c \
				utils/ft_usleep.c \
				utils/ft_get_time.c \
				init_and_threads.c \
				monitoring_rutines.c \
				checker_dead.c \
				output.c \
				philo_rutines.c \

OBJS = $(SRC_FILES:.c=.o)

all: $(NAME)
	@echo "															"	
	@echo "															"	
	@echo "															"	
	@echo "$(G)██████╗ ██╗  ██╗██╗██╗      ██████╗ ███████╗ ██████╗ ██████╗ ██╗  ██╗███████╗██████╗ ███████╗$(RESET)	"
	@echo "$(G)██╔══██╗██║  ██║██║██║     ██╔═══██╗██╔════╝██╔═══██╗██╔══██╗██║  ██║██╔════╝██╔══██╗██╔════╝$(RESET)	"
	@echo "$(G)██████╔╝███████║██║██║     ██║   ██║███████╗██║   ██║██████╔╝███████║█████╗  ██████╔╝███████╗$(RESET)	"
	@echo "$(G)██╔═══╝ ██╔══██║██║██║     ██║   ██║╚════██║██║   ██║██╔═══╝ ██╔══██║██╔══╝  ██╔══██╗╚════██║$(RESET)	"
	@echo "$(G)██║     ██║  ██║██║███████╗╚██████╔╝███████║╚██████╔╝██║     ██║  ██║███████╗██║  ██║███████║$(RESET)	"
	@echo "$(G)╚═╝     ╚═╝  ╚═╝╚═╝╚══════╝ ╚═════╝ ╚══════╝ ╚═════╝ ╚═╝     ╚═╝  ╚═╝╚══════╝╚═╝  ╚═╝╚══════╝$(RESET)	"
	@echo "            		 2024/05/25 - ismherna@student.42.fr - 42 Madrid - Ismael Hernández		"	

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.c
	@printf "%-100s\r" ">Philo compiling: $(CC) $(CFLAGS) -c -o $@ $<"
	@$(CC) $(CFLAGS) -c -o $@ $<

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
