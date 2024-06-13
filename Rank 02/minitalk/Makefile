# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ismherna <ismherna@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/10 16:11:30 by ismherna          #+#    #+#              #
#    Updated: 2024/06/11 22:06:56 by ismherna         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

all:
        @cd libft && make
        @gcc -Wall -Wextra -Werror src/server.c libft/libft.a -o server
        @gcc -Wall -Wextra -Werror src/client.c libft/libft.a -o client
        @echo "minitalk ready."
        @echo "██        ██   ██████   ██ █      ██   ██████    ████████    ████████      ██          ██    ██  "
        @echo "██ ██  ██ ██     ██     ██  █     ██     ██         ██      ██        ██   ██          ██  ██    "
        @echo "██   ██   ██     ██     ██   █     ██     ██         ██     ██        ██   ██          ████      "
        @echo "██         ██     ██     ██    █   ██     ██         ██     ████████████   ██          ████      "
        @echo "██         ██     ██     ██     █  ██     ██         ██     ██        ██   ██          ██  ██    "
        @echo "██         ██   ██████   ██      █ ██   ██████       ██     ██        ██   ████████    ██    ██  "
        @echo "░░ ▒░▓  ░░░ ▒░ ░ ░▒   ▒  ▒▒    ░░ ▒░▓  ░░░ ▒░ ░ ░▒   ▒  ▒▒    ░░ ▒░▓  ░░░ ▒░ ░ ░▒   ▒  ▒▒▒░ ░ ░▒ "
        @echo "                        2024/05/25 - ismherna@student.42.fr - 42 Madrid - Ismael Hernández"
clean:
        @cd libft && make clean
        @rm -f server
        @rm -f client

fclean: clean
        @cd libft && make fclean

re: fclean all
