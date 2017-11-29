#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahrytsen <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/08 10:38:59 by ahrytsen          #+#    #+#              #
#    Updated: 2017/08/08 10:39:00 by ahrytsen         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = do-op
SRC = ft_atoi.c ft_putchar.c ft_putstr.c ft_putnbr.c ft_math.c main.c
INCL = allheader.h

all:$(NAME)
$(NAME):
	@gcc -Wall -Wextra -Werror -x c-header $(INCL)
	@gcc -Wall -Wextra -Werror -o $(NAME) $(SRC)
clean:
	@/bin/rm -f *.gch
	@/bin/rm -f $(NAME) 
