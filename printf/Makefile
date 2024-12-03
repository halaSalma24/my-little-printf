CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
AR = ar rcs
SRC =	ft_putchar.c	ft_putstr.c	ft_putnbr.c	ft_strlen.c	ft_putnbr_base.c \
ft_putunsnbr.c	ft_putpointer.c	ft_printf.c
OBJ = $(SRC:.c=.o)
NAME = libftprintf.a

all : $(NAME)

$(NAME) : $(OBJ)
	$(AR)	$(NAME)	$(OBJ)

%.o : %.c	ft_printf.h
	$(CC)	$(CFLAGS)	-c	$<	-o	$@

clean :
	$(RM)	$(OBJ)

fclean : clean
	$(RM)	$(NAME)

re : fclean	all
