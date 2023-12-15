# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/14 18:23:41 by bhildebr          #+#    #+#              #
#    Updated: 2023/12/15 13:53:47 by bhildebr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = gcc
CFLAGS = -Wall -Wextra -Werror -g

HEADERS = \
	cllist.h \
	ft_universe.h \
	integer.h \
	memory.h \
	program.h
SOURCES = \
	cllist_append.c \
	cllist_create.c \
	cllist_destroy.c \
	ft_atoi.c \
	ft_isdigit.c \
	integer_create.c \
	integer_destroy.c \
	integer_set.c \
	main.c \
	memory_create.c \
	memory_destroy.c \
	program_are_numbers_sorted.c \
	program_create.c \
	program_destroy.c \
	program_read_numbers.c \
	program_run.c \
	program_solve.c
OBJECTS = \
	cllist_append.o \
	cllist_create.o \
	cllist_destroy.o \
	ft_atoi.o \
	ft_isdigit.o \
	integer_create.o \
	integer_destroy.o \
	integer_set.o \
	main.o \
	memory_create.o \
	memory_destroy.o \
	program_are_numbers_sorted.c \
	program_create.o \
	program_destroy.o \
	program_read_numbers.o \
	program_run.o \
	program_solve.c

all: norm $(NAME)

norm:
	norminette $(HEADERS) $(SOURCES)

$(NAME): $(OBJECTS)
	cc -o $(NAME) $(OBJECTS)

clean:
	$(RM) $(OBJECTS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all norm clean fclean re