NAME = libft.a
SRC_DIR = srcs/
LIB_DIR = includes/
SRC = $(SRC_DIR)ft_putchar.c $(SRC_DIR)ft_putstr.c $(SRC_DIR)ft_strcmp.c $(SRC_DIR)ft_strlen.c $(SRC_DIR)ft_swap.c
CFLAGS = -Wall -Werror -Wextra 
CC = gcc

OBJ = ${SRC:.c=.o}

all: $(NAME)

$(NAME): $(OBJ)
	ar -rcs $@ $(OBJ)

%.o: %.c
	$(CC) $(LIB) $(CFLAGS) -o $@ -c $<

clean: 
	rm -rf $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all


