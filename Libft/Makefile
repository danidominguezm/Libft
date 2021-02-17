NAME = libft.a
#HEADER = libft.h 
CFLAGS = -Wall -Werror -Wextra 
SRC = main.c \
      ft_strlen.c \
      ft_strlcat.c \
	  ft_toupper.c \
	  ft_tolower.c
OBJ = $(SRC:.c=.o)
CC = gcc
EXEC = exec

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

%.o : %.c
	$(CC) -c $(CFLAGS) $< -o $@ #-I $(HEADER) 

exec: all
	$(CC) -o $(EXEC) $(OBJ) \
	; ./$(EXEC) \
	; make fclean	
clean: 
	@rm -f $(OBJ)
fclean: clean
	@rm -f $(NAME) $(EXEC)
re: fclean all

.PHONY: all clean fclean re exec

