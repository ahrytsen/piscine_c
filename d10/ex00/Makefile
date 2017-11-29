#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahrytsen <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/07 12:02:19 by ahrytsen          #+#    #+#              #
#    Updated: 2017/08/07 13:21:08 by ahrytsen         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME	= libft.a
SRC		= srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c
OBJ		= ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
INCL	= includes/*.h
PRE_I	= includes/*.h.gch

all:$(NAME)
$(NAME):
	@gcc -Wall -Wextra -Werror -x c-header $(INCL)
	@gcc -Wall -Wextra -Werror -c $(SRC)
	@ar rc $(NAME) $(OBJ)
clean:
	@/bin/rm -f $(OBJ)
fclean: clean
	@/bin/rm -f $(NAME) $(PRE_I)
re:fclean all
