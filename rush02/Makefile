# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: elindber <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/08/31 10:23:43 by elindber          #+#    #+#              #
#    Updated: 2019/08/31 16:29:36 by thinguye         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = colle-2
SRC = ./srcs/
INC = *.h
RUSH = rush00.c rush01.c rush02.c rush03.c rush04.c
FT = ft_putchar.c ft_putstr.c

all: comp

comp:
	gcc $(RUSH) $(FT) $(INC) main.c

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -r $(NAME)

re: fclean all
