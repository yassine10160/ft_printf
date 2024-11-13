CC = cc
CFLAGS = -Wextra -Werror -Wall -g3

SRCS =	ft_putchar.c ft_print_hexa.c ft_print_ptr.c ft_putstr.c ft_printnbr.c ft_strlen.c ft_printf.c
OBJS =	$(SRCS:.c=.o)
NAME =	libftprintf.a

all: $(NAME)

$(NAME): $(OBJS) Makefile
	ar rcs $(NAME) $(OBJS)

%.o: %.c printf.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all re clean fclean