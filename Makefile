# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bkaztaou <bkaztaou@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/04 17:58:02 by bkaztaou          #+#    #+#              #
#    Updated: 2022/11/04 18:34:13 by bkaztaou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=gcc
FLAGS=-Wall -Wextra -Werror
LIB=libft.a
SRC=$(wildcard .c)
OBJ=$(patsubst %.c, %.o, $(SRC))
all:$(LIB)

$(LIB):$(OBJ)
    ar -rcs $(LIB).o

%.o:%.c
    $(CC) $(FLAGS) -c $^ -o $@

clean:
    rm -f *.o $(LIB)
