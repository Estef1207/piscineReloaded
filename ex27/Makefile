CC = cc

NAME = ft_display_file

CFLAGS = -Wall -Wextra -Werror -Iincludes/

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) main.c -o $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
