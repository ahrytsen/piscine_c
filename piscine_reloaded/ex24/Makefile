#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahrytsen <ahrytsen@student.unit.ua>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/10/25 22:25:16 by ahrytsen          #+#    #+#              #
#    Updated: 2017/10/25 22:37:12 by ahrytsen         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME	= libft.a
SRC		= srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c\
		srcs/ft_strlen.c srcs/ft_swap.c
OBJ		= ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
INCL	= includes/*.h
PRE_I	= includes/*.h.gch

all:$(NAME)
$(NAME):
	@gcc -Wall -Wextra -Werror -x c-header $(INCL)
	@gcc -Wall -Wextra -Werror -c $(SRC)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)
clean:
	@/bin/rm -f $(OBJ)
fclean: clean
	@/bin/rm -f $(NAME) $(PRE_I)
re:fclean all
