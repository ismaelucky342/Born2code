CC      = gcc
CFLAGS  = -Werror -Wextra -Wall -g

INC     = -I ./includes/ \

SRC_PATH    = src/
SRC         = 	ft_atoi.c \
				ft_exit.c \
				ft_usleep.c \
				initiate.c \
				input_tools.c \
				philosophers.c \
				procedure.c \
				thread_utils.c
SRCS        = $(addprefix $(SRC_PATH), $(SRC))

# Objects
OBJ_PATH    = obj/
OBJ         = $(SRC:.c=.o)
OBJS        = $(addprefix $(OBJ_PATH), $(OBJ))

NAME        = push_swap

GREEN = \033[0;32m
RESET = \033[0m

all: $(NAME)

$(OBJ_PATH)%.o: $(SRC_PATH)%.c | $(OBJ_PATH)
	@$(CC) $(CFLAGS) -c $< -o $@ $(INC)

$(OBJS): | $(OBJ_PATH)

$(OBJ_PATH):
	@mkdir -p $(OBJ_PATH)


$(NAME): $(OBJS) 
	@echo "Compiling $(NAME)..."
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJS) $(INC) -lm
	@echo "$(NAME) ready."
	@echo "															"	
	@echo "$(GREEN)██████╗ ██╗  ██╗██╗██╗      ██████╗ ███████╗ ██████╗ ██████╗ ██╗  ██╗███████╗██████╗ ███████╗$(RESET)	"
	@echo "$(GREEN)██╔══██╗██║  ██║██║██║     ██╔═══██╗██╔════╝██╔═══██╗██╔══██╗██║  ██║██╔════╝██╔══██╗██╔════╝$(RESET)	"
	@echo "$(GREEN)██████╔╝███████║██║██║     ██║   ██║███████╗██║   ██║██████╔╝███████║█████╗  ██████╔╝███████╗$(RESET)	"
	@echo "$(GREEN)██╔═══╝ ██╔══██║██║██║     ██║   ██║╚════██║██║   ██║██╔═══╝ ██╔══██║██╔══╝  ██╔══██╗╚════██║$(RESET)	"
	@echo "$(GREEN)██║     ██║  ██║██║███████╗╚██████╔╝███████║╚██████╔╝██║     ██║  ██║███████╗██║  ██║███████║$(RESET)	"
	@echo "$(GREEN)╚═╝     ╚═╝  ╚═╝╚═╝╚══════╝ ╚═════╝ ╚══════╝ ╚═════╝ ╚═╝     ╚═╝  ╚═╝╚══════╝╚═╝  ╚═╝╚══════╝$(RESET)	"
	@echo "               			2024/05/25 - ismherna@student.42.fr - 42 Madrid - Ismael Hernández		"

clean:
	@echo "Removing .o object files..."
	@rm -rf $(OBJ_PATH)

fclean: clean
	@echo "Removing $(NAME)..."
	@rm -f $(NAME)

re: fclean all

.PHONY: all re clean fclean
