# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: esmeza-s <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/18 11:46:10 by esmeza-s          #+#    #+#              #
#    Updated: 2024/09/18 11:46:14 by esmeza-s         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

TARGET = myprogram
OBJS = main.o ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
CFLAGS = -Wall -Wextra -Werror 

main.o 			= main.c
ft_putchar.o	= ft_putchar.c
ft_putstr.o		= ft_putstr.c
ft_strcmp.o		= ft_strcmp.c
ft_strlen.o		= ft_strlen.c
ft_swap.o		= ft_swap.c

all : $(TARGET)

$(TARGET) = $(OBJS)
	gcc $(CFLAGS) $(OBJS) -O $(TARGET)

clean :
	rm -f *.o $(TARGET)

fclean : clean
	rm -f $(TARGET)

re : fclean all
