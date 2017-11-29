#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahrytsen <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/14 19:11:32 by ahrytsen          #+#    #+#              #
#    Updated: 2017/08/14 19:11:33 by ahrytsen         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = bsq
SRC = main.c read.c bsq.c ft_atoi.c print.c
OBJ = main.o read.o bsq.o ft_atoi.o print.o

all:$(NAME)
$(NAME):
	@gcc -Wall -Wextra -Werror -c $(SRC)
	@gcc -Wall -Wextra -Werror -o $(NAME) $(SRC)
clean:
	@/bin/rm -f $(OBJ)
fclean:clean
	@/bin/rm -f $(NAME)
re:fclean all
