#!/bin/sh
$(gcc -c ft_*.c -Wall -Wextra -Werror ; ar rc libft.a ft_*.o ; rm -rf ft_*.o ; ranlib libft.a ;)