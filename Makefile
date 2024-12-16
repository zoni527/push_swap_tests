# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jvarila <jvarila@student.hive.fi>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/07 15:58:04 by jvarila           #+#    #+#              #
#    Updated: 2024/12/16 17:29:35 by jvarila          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror
VPATH = ./

SRCDIR = /home/jvarila/Repos/push_swap/
SRC = $(SRCDIR)stack.c
LIBDIR = /home/jvarila/Repos/push_swap/libft/
LIB = $(LIBDIR)libft.a

TST01 = /home/jvarila/Tests/push_swap_tests/push_swap_test_01

all: push_swap_test_01

push_swap_test_01: push_swap_test_01.c $(SRC) $(LIBDIR)libft.h
	$(CC) $(CFLAGS) -I$(SRC_DIR) -I$(LIBDIR) $(SRC) push_swap_test_01.c -L$(LIBDIR) -lft -o push_swap_test_01 -g -fsanitize=address

clean:

fclean: clean
	rm -f ./push_swap_test_01

re: fclean all

.PHONY: clean fclean re all
