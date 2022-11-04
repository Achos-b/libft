# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bkaztaou <bkaztaou@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/04 17:58:02 by bkaztaou          #+#    #+#              #
#    Updated: 2022/11/04 19:04:05 by bkaztaou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=cc
CFLAGS=-Wall -Wextra -Werror
SRC=$(wildcard *.c)
OBJ=$(patsubst %.c, %.o, $(SRC))
LIB=libft.a

all:$(LIB)

$(LIB):$(OBJ)
	ar -csr $(LIB) *.o

%.o:%.c
	$(CC) $(CFLAGS) -c $^ -o $@

clean:
	rm -rf *.o $(LIB)
