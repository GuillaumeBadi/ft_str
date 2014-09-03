#* ************************************************************************** *#
#*                                                                            *#
#*                                                        :::      ::::::::   *#
#*   Makefile                                           :+:      :+:    :+:   *#
#*                                                    +:+ +:+         +:+     *#
#*   By: gbadi <guillaume.badi@gmail.com>           +#+  +:+       +#+        *#
#*                                                +#+#+#+#+#+   +#+           *#
#*   Created: 2014/09/02 14:41:59 by gbadi             #+#    #+#             *#
#*   Updated: 2014/09/02 21:11:40 by gbadi            ###   ########.fr       *#
#*                                                                            *#
#* ************************************************************************** *#

NAME = str

LIB = libstr.a

SOURCE = lib/*.c

MAIN = main.c

OBJS = *.o

FLAGS = -Wall -Werror -Wextra

all: libstr
	gcc -o $(NAME) $(MAIN) $(LIB) $(FLAGS)

quick:
	gcc -o $(NAME) $(MAIN) $(LIB) $(FLAGS)


libstr:
	gcc -c $(SOURCE) $(FLAGS)
	ar rc $(LIB) $(OBJS)
