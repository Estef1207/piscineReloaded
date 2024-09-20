CC = cc

CFLAGS = -Wall -Wextra -Werror -Iincludes/

all: libft

libft: ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
	ar rcs libft.a ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

ft_putstr.o: srcs/ft_putstr.c
	$(CC) $(CFLAGS) -c srcs/ft_putstr.c
ft_strcmp.o: srcs/ft_strcmp.c
	$(CC) $(CFLAGS) -c srcs/ft_strcmp.c
ft_strlen.o: srcs/ft_strlen.c
	$(CC) $(CFLAGS) -c srcs/ft_strlen.c
ft_swap.o: srcs/ft_swap.c
	$(CC) $(CFLAGS) -c srcs/ft_swap.c

clean:
	rm -f *.o

fclean: clean
	rm -f libft.a

re: fclean all
