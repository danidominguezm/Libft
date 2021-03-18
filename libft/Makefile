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
	  ft_memset.c \
	  ft_memcpy.c \
	  ft_memccpy.c \
	  ft_bzero.c \
	  ft_memmove.c \
	  ft_memchr.c \
	  ft_memcmp.c \
	  ft_calloc.c \
	  ft_strdup.c \
	  ft_substr.c \
	  ft_strjoin.c \
	  ft_strtrim.c \
	  ft_split.c \
	  ft_putchar_fd.c \
	  ft_putstr_fd.c \
	  ft_putendl_fd.c \
	  ft_putnbr_fd.c \
	  ft_itoa.c \
	  ft_strmapi.c

BON_SRC = ft_lstnew.c \
		  ft_lstadd_front.c \
		  ft_lstsize.c \
		  ft_lstlast.c \
		  ft_lstadd_back.c \
		  ft_lstdelone.c \
		  ft_lstclear.c \
		  ft_lstiter.c
OBJ = $(SRC:.c=.o)
BON_OBJ = $(BON_SRC:.c=.o)
CC = gcc
EXEC = exec

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

bonus: $(BON_OBJ)
	ar rc $(NAME) $(BON_OBJ)

%.o : %.c
	$(CC) -c $(CFLAGS) $< -o $@ #-I $(HEADER) 

exec: all
	$(CC) -o $(EXEC) $(OBJ) \
	; ./$(EXEC) \
	; make fclean	
clean: 
	@rm -f $(OBJ)
	@rm -f *.o
fclean: clean
	@rm -f $(NAME) $(EXEC)
re: fclean all 

.PHONY: all clean fclean re exec bonus

