NAME = libft.a
CFLAGS = -Wall -Wextra -Werror -c
CC = cc
OBJDIR = objs

GREEN = \033[0;32m
BLUE = \033[0;34m
RED = \033[0;31m
RESET = \033[0m

SRCS = ft_atoi.c \
      ft_bzero.c \
      ft_calloc.c \
      ft_isalnum.c \
      ft_isalpha.c \
      ft_isascii.c \
      ft_isdigit.c \
      ft_isprint.c \
      ft_itoa.c \
      ft_memchr.c \
      ft_memcmp.c \
      ft_memcpy.c \
      ft_memmove.c \
      ft_memset.c \
      ft_putchar_fd.c \
      ft_putendl_fd.c \
      ft_putnbr_fd.c \
      ft_putstr_fd.c \
      ft_split.c \
      ft_strchr.c \
      ft_strdup.c \
      ft_striteri.c \
      ft_strjoin.c \
      ft_strlcat.c \
      ft_strlcpy.c \
      ft_strlen.c \
      ft_strmapi.c \
      ft_strncmp.c \
      ft_strnstr.c \
      ft_strrchr.c \
      ft_strtrim.c \
      ft_substr.c \
      ft_tolower.c \
      ft_toupper.c

OBJS = $(SRCS:%.c=$(OBJDIR)/%.o)

all: $(NAME)

$(NAME): $(OBJS)
		@echo "$(BLUE)Creating library $(NAME)...$(RESET)"
		@ar rc $(NAME) $(OBJS)
		@echo "$(GREEN)✓ $(NAME) created successfully!$(RESET)"

$(OBJDIR)/%.o: %.c libft.h
		@mkdir -p $(OBJDIR)
		@echo "$(BLUE)Compiling $<...$(RESET)"
		@$(CC) $(CFLAGS) $< -o $@ -I .

clean:
		@echo "$(RED)Cleaning object files...$(RESET)"
		@rm -rf $(OBJDIR)
		@echo "$(GREEN)✓ Object files cleaned!$(RESET)"

fclean: clean
		@echo "$(RED)Cleaning $(NAME)...$(RESET)"
		@rm -f $(NAME)
		@echo "$(GREEN)✓ $(NAME) cleaned!$(RESET)"

re: fclean all

.PHONY: all clean fclean re
