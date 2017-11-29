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

NAME = eval_expr
SRC = ft_stack.c ft_str.c ft_math.c evalexpr.c conv_to_rpn.c 

all:$(NAME)
$(NAME):
	@gcc -Wall -Wextra -Werror -o $(NAME) $(SRC)
clean:
	@/bin/rm -f lox
fclean:
	@/bin/rm -f $(NAME) 
