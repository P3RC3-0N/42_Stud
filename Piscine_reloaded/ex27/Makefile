NAME = ft_display_file
SRC_DIR = srcs/
LIB_DIR = includes/
SRC = $(SRC_DIR)ft_display_file.c
CFLAGS = -Wall -Werror -Wextra 
CC = gcc

OBJ = ${SRC:.c=.o}

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(LIB) $(CFLAGS) -o $@ $^

clean: 
	rm -rf $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all


