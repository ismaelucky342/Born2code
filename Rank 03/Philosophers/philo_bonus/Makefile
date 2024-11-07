# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ismherna <ismherna@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/22 21:37:15 by ismherna          #+#    #+#              #
#    Updated: 2024/11/02 21:25:42 by ismherna         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

G = \033[1;32m
Y = \033[1;33m
R = \033[0;31m
NC = \033[0m


NAME =			philo_bonus

CC =			gcc

CFLAGS =		-Wall -Werror -Wextra

SRC_FILES =		philo_bonus.c \
				utils/ft_get_time.c \
				utils/ft_atol.c \
				utils/ft_secure_itoa.c \
				utils/ft_strjoin.c \
				utils/ft_strlen.c \
				utils/ft_usleep.c \
				init_bonus.c \
				process_bonus.c \
				monitoring_routines_bonus.c \
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
