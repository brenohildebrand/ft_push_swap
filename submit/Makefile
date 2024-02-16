# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/14 13:52:24 by bhildebr          #+#    #+#              #
#    Updated: 2024/02/14 13:52:24 by bhildebr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = build/push_swap
FRAMEWORK = lib/ft_framework/build/libframework.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror

SOURCES = \
	source/processes/julien/julien.c \
	source/processes/julien/julien_adjust_a.c \
	source/processes/julien/julien_for_five.c \
	source/processes/julien/julien_for_four.c \
	source/processes/julien/julien_for_more_than_five.c \
	source/processes/julien/julien_for_one.c \
	source/processes/julien/julien_for_three.c \
	source/processes/julien/julien_for_two.c \
	source/processes/julien/julien_get_lss.c \
	source/processes/julien/julien_get_option.c \
	source/processes/julien/julien_get_price.c \
	source/processes/julien/julien_keep_lss.c \
	source/processes/julien/julien_push.c \
	source/processes/julien/julien_push_cheapest.c \
	source/processes/push_swap/fill_stack_a.c \
	source/processes/push_swap/pa.c \
	source/processes/push_swap/pb.c \
	source/processes/push_swap/push_swap.c \
	source/processes/push_swap/ra.c \
	source/processes/push_swap/rb.c \
	source/processes/push_swap/rr.c \
	source/processes/push_swap/rra.c \
	source/processes/push_swap/rrb.c \
	source/processes/push_swap/rrr.c \
	source/processes/push_swap/sa.c \
	source/processes/push_swap/sb.c \
	source/processes/push_swap/ss.c \
	source/processes/push_swap/validate_argc.c \
	source/processes/push_swap/validate_arguments.c \
	source/processes/push_swap/validate_argv.c \
	source/types/stack/stack_create.c \
	source/types/stack/stack_destroy.c \
	source/types/stack/stack_get_height.c \
	source/types/stack/stack_peek.c \
	source/types/stack/stack_pop.c \
	source/types/stack/stack_print.c \
	source/types/stack/stack_push.c \
	source/types/stack/stack_reverse_rotate.c \
	source/types/stack/stack_rotate.c \
	source/types/stack/stack_swap.c

OBJECTS = \
	objects/julien.o \
	objects/julien_adjust_a.o \
	objects/julien_for_five.o \
	objects/julien_for_four.o \
	objects/julien_for_more_than_five.o \
	objects/julien_for_one.o \
	objects/julien_for_three.o \
	objects/julien_for_two.o \
	objects/julien_get_lss.o \
	objects/julien_get_option.o \
	objects/julien_get_price.o \
	objects/julien_keep_lss.o \
	objects/julien_push.o \
	objects/julien_push_cheapest.o \
	objects/fill_stack_a.o \
	objects/pa.o \
	objects/pb.o \
	objects/push_swap.o \
	objects/ra.o \
	objects/rb.o \
	objects/rr.o \
	objects/rra.o \
	objects/rrb.o \
	objects/rrr.o \
	objects/sa.o \
	objects/sb.o \
	objects/ss.o \
	objects/validate_argc.o \
	objects/validate_arguments.o \
	objects/validate_argv.o \
	objects/stack_create.o \
	objects/stack_destroy.o \
	objects/stack_get_height.o \
	objects/stack_peek.o \
	objects/stack_pop.o \
	objects/stack_print.o \
	objects/stack_push.o \
	objects/stack_reverse_rotate.o \
	objects/stack_rotate.o \
	objects/stack_swap.o

INCLUDES = \
	-include ft_framework.h \
	-iquote lib/ft_framework/includes \
	-iquote lib/ft_framework/source/base/processes/allocate \
	-iquote lib/ft_framework/source/base/processes/deallocate \
	-iquote lib/ft_framework/source/base/processes/delete \
	-iquote lib/ft_framework/source/base/processes/new \
	-iquote lib/ft_framework/source/base/types/any \
	-iquote lib/ft_framework/source/base/types/trillian \
	-iquote lib/ft_framework/source/processes/assert \
	-iquote lib/ft_framework/source/processes/debug \
	-iquote lib/ft_framework/source/processes/error \
	-iquote lib/ft_framework/source/processes/print \
	-iquote lib/ft_framework/source/types/character \
	-iquote lib/ft_framework/source/types/file \
	-iquote lib/ft_framework/source/types/fractional \
	-iquote lib/ft_framework/source/types/integer \
	-iquote lib/ft_framework/source/types/string \
	-iquote lib/ft_framework/source/types/vector \
	-iquote source/processes/julien \
	-iquote source/processes/push_swap \
	-iquote source/types/stack

all: $(NAME)

$(NAME): $(FRAMEWORK) $(OBJECTS)
	@cc -o $(NAME) $(OBJECTS) $(FRAMEWORK)

$(FRAMEWORK):
	$(MAKE) -C lib/ft_framework

directories:
	mkdir -p build
	mkdir -p objects

clean:
	$(RM) $(OBJECTS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

%.o: %.c
    $(CC) $(CFLAGS) $(INCLUDES) -c $< -o 

.PHONY: $(NAME) all directories clean fclean re

