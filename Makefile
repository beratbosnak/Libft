NAME = libft.a
FLAG = -Wall -Wextra -Werror
OPTION = -c
SRC = $(shell find . -name "ft_*.c")

all: $(NAME)

$(NAME):
		gcc $(FLAGS) $(OPTION) $(SRC) -I .
		ar rc $(NAME) *.o
clean:
		rm -f *.o
fclean: clean
		rm -f $(NAME)
re: fclean all