NAME = libft.a
CFLAGS = -Wall -Werror -Wextra 
SRC = $(*.c)
OBJ = $(SRC:.c=.o)


all: $(NAME)

$(NAME): $(OBJ)
	$(CC) -o $@ $<
%.o : %.c
	$(CC) -c $(CFLAGS) $< -o $@ 

clean: 
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
re: fclean all

.PHONY: all clean fclean re

