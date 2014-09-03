#* ************************************************************************** *#
#*                                                                            *#
#*                                                        :::      ::::::::   *#
#*   Makefile                                           :+:      :+:    :+:   *#
#*                                                    +:+ +:+         +:+     *#
#*   By: gbadi <guillaume.badi@gmail.com>           +#+  +:+       +#+        *#
#*                                                +#+#+#+#+#+   +#+           *#
#*   Created: 2014/09/02 14:41:59 by gbadi             #+#    #+#             *#
#*   Updated: 2014/09/03 17:31:41 by gbadi            ###   ########.fr       *#
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


nf:
	gcc -o $(NAME) $(MAIN) $(LIB)

quick:
	gcc -o $(NAME) $(MAIN) $(LIB) $(FLAGS)

libstr-nf:
	gcc -c $(SOURCE)
	ar rc $(LIB) $(OBJ)

libstr:
	gcc -c $(SOURCE) $(FLAGS)
	ar rc $(LIB) $(OBJS)

clean:
	rm *.o

fclean: clean
	rm $(NAME) $(LIB)
