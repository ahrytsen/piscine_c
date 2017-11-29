#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahrytsen <ahrytsen@student.unit.ua>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/10/26 21:29:05 by ahrytsen          #+#    #+#              #
#    Updated: 2017/10/26 21:34:22 by ahrytsen         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME	= ft_display_file
SRC		= main.c

all:$(NAME)
$(NAME):
	@gcc -Wall -Wextra -Werror -o $(NAME) $(SRC)
clean:
	@/bin/rm -rf main.o
fclean: clean
	@/bin/rm -rf $(NAME)
re:fclean all