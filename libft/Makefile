NAME = libft.a
#HEADER = libft.h 
CFLAGS = -Wall -Werror -Wextra 
SRC = main.c \
      ft_strlen.c \
      ft_strlcat.c \
	  ft_toupper.c \
	  ft_tolower.c \
	  ft_strlcpy.c \
	  ft_strchr.c \
	  ft_strrchr.c \
	  ft_strnstr.c \
	  ft_strncmp.c \
	  ft_isalpha.c \
	  ft_isdigit.c \
	  ft_isalnum.c \
	  ft_isascii.c \
	  ft_isprint.c \
	  ft_atoi.c \
	  ft_memset.c
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

