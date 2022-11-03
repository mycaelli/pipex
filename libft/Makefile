NAME = libft.a

CFLAGS = -Wall -Wextra -Werror -I. -c

CC = gcc

AR = ar rcs

RM = rm -rf

SRC = 	ft_printf.c \
		ft_printf_str.c \
		ft_printf_char.c \
		ft_printf_signed_int.c \
		ft_itoa.c \
		ft_strlen.c


SRC_OBJ = $(SRC:.c=.o)

$(NAME):	$(SRC_OBJ)
	$(AR) $(NAME) $(SRC_OBJ)

$(SRC_OBJ):
	$(CC) $(CFLAGS) $(SRC)

all: $(NAME)

clean:
	$(RM) $(SRC_OBJ)

fclean: clean
	$(RM) $(NAME)

re:	fclean all

.PHONY: all clean fclean re