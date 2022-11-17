NAME = pipex

CC = cc

CFLAGS = -Wall -Wextra -Werror

RM = rm -rf

SRC = pipex.c

OBJ = $(SRC:%.c=%.o)

LIBFT_A = libft/libft.a

CLEAN_LIBFT = cd libft && make clean

FCLEAN_LIBFT = cd libft && make fclean

all: $(NAME)

$(NAME): $(LIBFT_A) $(OBJ)
	$(CC) $(CFLAGS) $(SRC) $(LIBFT_A) -o $(NAME) -g

$(LIBFT_A):
	cd libft && make

clean: 
	$(CLEAN_LIBFT)
	$(RM) $(OBJ)

fclean: clean 
	$(FCLEAN_LIBFT)
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re