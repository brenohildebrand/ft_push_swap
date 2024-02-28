# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/20 19:23:32 by bhildebr          #+#    #+#              #
#    Updated: 2024/02/20 19:23:32 by bhildebr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

LIBTRILLIAN = /home/bhildebr/github/ft_framework/build/default/bin/libtrillian.a

DEBUG = ./build/debug/bin/push_swap
DEFAULT = ./build/default/bin/push_swap

CC = gcc
CFLAGS = -Wall -Wextra -Werror -std=c99 -Dpush_swap=main
CPATHS = \
	-include trillian.h \
	-include any.h \
	-include allocate.h \
	-include deallocate.h \
	-include delete.h \
	-include new.h \
	-include assert.h \
	-include debug.h \
	-include error.h \
	-include print.h \
	-include character.h \
	-include file.h \
	-include fractional.h \
	-include integer.h \
	-include string.h \
	-include vector.h \
	-iquote /home/bhildebr/github/ft_framework/source/base/functions/allocate \
	-iquote /home/bhildebr/github/ft_framework/source/base/functions/deallocate \
	-iquote /home/bhildebr/github/ft_framework/source/base/functions/delete \
	-iquote /home/bhildebr/github/ft_framework/source/base/functions/new \
	-iquote /home/bhildebr/github/ft_framework/source/base/types/any \
	-iquote /home/bhildebr/github/ft_framework/source/base/types/trillian \
	-iquote /home/bhildebr/github/ft_framework/source/functions/assert \
	-iquote /home/bhildebr/github/ft_framework/source/functions/debug \
	-iquote /home/bhildebr/github/ft_framework/source/functions/error \
	-iquote /home/bhildebr/github/ft_framework/source/functions/print \
	-iquote /home/bhildebr/github/ft_framework/source/types/character \
	-iquote /home/bhildebr/github/ft_framework/source/types/file \
	-iquote /home/bhildebr/github/ft_framework/source/types/fractional \
	-iquote /home/bhildebr/github/ft_framework/source/types/integer \
	-iquote /home/bhildebr/github/ft_framework/source/types/string \
	-iquote /home/bhildebr/github/ft_framework/source/types/vector \
	-iquote /home/bhildebr/github/ft_push_swap/source/functions/julien \
	-iquote /home/bhildebr/github/ft_push_swap/source/functions/push_swap \
	-iquote /home/bhildebr/github/ft_push_swap/source/types/stack

SOURCES = \
	./source/functions/julien/julien.c \
	./source/functions/julien/julien_adjust_a.c \
	./source/functions/julien/julien_for_five.c \
	./source/functions/julien/julien_for_four.c \
	./source/functions/julien/julien_for_more_than_five.c \
	./source/functions/julien/julien_for_one.c \
	./source/functions/julien/julien_for_three.c \
	./source/functions/julien/julien_for_two.c \
	./source/functions/julien/julien_get_option.c \
	./source/functions/julien/julien_get_price.c \
	./source/functions/julien/julien_push.c \
	./source/functions/julien/julien_push_cheapest.c \
	./source/functions/push_swap/fill_stack_a.c \
	./source/functions/push_swap/pa.c \
	./source/functions/push_swap/pb.c \
	./source/functions/push_swap/push_swap.c \
	./source/functions/push_swap/ra.c \
	./source/functions/push_swap/rb.c \
	./source/functions/push_swap/rr.c \
	./source/functions/push_swap/rra.c \
	./source/functions/push_swap/rrb.c \
	./source/functions/push_swap/rrr.c \
	./source/functions/push_swap/sa.c \
	./source/functions/push_swap/sb.c \
	./source/functions/push_swap/ss.c \
	./source/functions/push_swap/validate_argc.c \
	./source/functions/push_swap/validate_arguments.c \
	./source/functions/push_swap/validate_argv.c \
	./source/types/stack/stack_create.c \
	./source/types/stack/stack_destroy.c \
	./source/types/stack/stack_get_height.c \
	./source/types/stack/stack_peek.c \
	./source/types/stack/stack_pop.c \
	./source/types/stack/stack_print.c \
	./source/types/stack/stack_push.c \
	./source/types/stack/stack_reverse_rotate.c \
	./source/types/stack/stack_rotate.c \
	./source/types/stack/stack_swap.c

HEADERS = \
	julien.h \
	push_swap.h \
	stack.h

OBJECTS = \
	julien.o \
	julien_adjust_a.o \
	julien_for_five.o \
	julien_for_four.o \
	julien_for_more_than_five.o \
	julien_for_one.o \
	julien_for_three.o \
	julien_for_two.o \
	julien_get_option.o \
	julien_get_price.o \
	julien_push.o \
	julien_push_cheapest.o \
	fill_stack_a.o \
	pa.o \
	pb.o \
	push_swap.o \
	ra.o \
	rb.o \
	rr.o \
	rra.o \
	rrb.o \
	rrr.o \
	sa.o \
	sb.o \
	ss.o \
	validate_argc.o \
	validate_arguments.o \
	validate_argv.o \
	stack_create.o \
	stack_destroy.o \
	stack_get_height.o \
	stack_peek.o \
	stack_pop.o \
	stack_print.o \
	stack_push.o \
	stack_reverse_rotate.o \
	stack_rotate.o \
	stack_swap.o

DEPENDENCIES = \
	julien.d \
	julien_adjust_a.d \
	julien_for_five.d \
	julien_for_four.d \
	julien_for_more_than_five.d \
	julien_for_one.d \
	julien_for_three.d \
	julien_for_two.d \
	julien_get_option.d \
	julien_get_price.d \
	julien_push.d \
	julien_push_cheapest.d \
	fill_stack_a.d \
	pa.d \
	pb.d \
	push_swap.d \
	ra.d \
	rb.d \
	rr.d \
	rra.d \
	rrb.d \
	rrr.d \
	sa.d \
	sb.d \
	ss.d \
	validate_argc.d \
	validate_arguments.d \
	validate_argv.d \
	stack_create.d \
	stack_destroy.d \
	stack_get_height.d \
	stack_peek.d \
	stack_pop.d \
	stack_print.d \
	stack_push.d \
	stack_reverse_rotate.d \
	stack_rotate.d \
	stack_swap.d

DEBUG_DIR = ./build/debug
DEFAULT_DIR = ./build/default

DEBUG_OBJECTS = $(addprefix $(DEBUG_DIR)/objects/, $(OBJECTS))
DEBUG_DEPENDENCIES = $(addprefix $(DEBUG_DIR)/dependencies/, $(DEPENDENCIES))

DEFAULT_OBJECTS = $(addprefix $(DEFAULT_DIR)/objects/, $(OBJECTS))
DEFAULT_DEPENDENCIES = $(addprefix $(DEFAULT_DIR)/dependencies/, $(DEPENDENCIES))

all: build

$(NAME): build

$(LIBTRILLIAN):
	@make -C /home/bhildebr/github/ft_framework

debug: $(LIBTRILLIAN) $(DEBUG)
$(DEBUG): CFLAGS += -DDEBUG -g
$(DEBUG): $(DEBUG_OBJECTS) | $(DEBUG_DIR)
	@$(CC) $(CFLAGS) -o $(DEBUG_DIR)/bin/$(NAME) $(DEBUG_OBJECTS) $(LIBTRILLIAN)

build: $(LIBTRILLIAN) $(DEFAULT)
$(DEFAULT): $(DEFAULT_OBJECTS) | $(DEFAULT_DIR)
	@$(CC) $(CFLAGS) -o $(DEFAULT_DIR)/bin/$(NAME) $(DEFAULT_OBJECTS) $(LIBTRILLIAN)

clean:
	@$(RM) $(DEBUG_OBJECTS)
	@$(RM) $(DEFAULT_OBJECTS)

fclean: clean
	@$(RM) $(DEBUG_DIR)/bin/$(NAME)
	@$(RM) $(DEFAULT_DIR)/bin/$(NAME)

re: fclean all

.PHONY: all build debug release $(NAME) clean fclean re

-include $(DEBUG_DEPENDENCIES)
-include $(DEFAULT_DEPENDENCIES)

$(DEBUG_DIR)/objects/allocate.o: ./source/base/functions/allocate/allocate.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEBUG_DIR)/dependencies/allocate.d -c ./source/base/functions/allocate/allocate.c -o $(DEBUG_DIR)/objects/allocate.o

$(DEBUG_DIR)/objects/deallocate.o: ./source/base/functions/deallocate/deallocate.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEBUG_DIR)/dependencies/deallocate.d -c ./source/base/functions/deallocate/deallocate.c -o $(DEBUG_DIR)/objects/deallocate.o

$(DEBUG_DIR)/objects/delete.o: ./source/base/functions/delete/delete.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEBUG_DIR)/dependencies/delete.d -c ./source/base/functions/delete/delete.c -o $(DEBUG_DIR)/objects/delete.o

$(DEBUG_DIR)/objects/new.o: ./source/base/functions/new/new.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEBUG_DIR)/dependencies/new.d -c ./source/base/functions/new/new.c -o $(DEBUG_DIR)/objects/new.o

$(DEBUG_DIR)/objects/any_create.o: ./source/base/types/any/any_create.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEBUG_DIR)/dependencies/any_create.d -c ./source/base/types/any/any_create.c -o $(DEBUG_DIR)/objects/any_create.o

$(DEBUG_DIR)/objects/any_destroy.o: ./source/base/types/any/any_destroy.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEBUG_DIR)/dependencies/any_destroy.d -c ./source/base/types/any/any_destroy.c -o $(DEBUG_DIR)/objects/any_destroy.o

$(DEBUG_DIR)/objects/trillian_create.o: ./source/base/types/trillian/trillian_create.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEBUG_DIR)/dependencies/trillian_create.d -c ./source/base/types/trillian/trillian_create.c -o $(DEBUG_DIR)/objects/trillian_create.o

$(DEBUG_DIR)/objects/trillian_delete.o: ./source/base/types/trillian/trillian_delete.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEBUG_DIR)/dependencies/trillian_delete.d -c ./source/base/types/trillian/trillian_delete.c -o $(DEBUG_DIR)/objects/trillian_delete.o

$(DEBUG_DIR)/objects/trillian_destroy.o: ./source/base/types/trillian/trillian_destroy.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEBUG_DIR)/dependencies/trillian_destroy.d -c ./source/base/types/trillian/trillian_destroy.c -o $(DEBUG_DIR)/objects/trillian_destroy.o

$(DEBUG_DIR)/objects/trillian_get.o: ./source/base/types/trillian/trillian_get.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEBUG_DIR)/dependencies/trillian_get.d -c ./source/base/types/trillian/trillian_get.c -o $(DEBUG_DIR)/objects/trillian_get.o

$(DEBUG_DIR)/objects/trillian_get_height.o: ./source/base/types/trillian/trillian_get_height.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEBUG_DIR)/dependencies/trillian_get_height.d -c ./source/base/types/trillian/trillian_get_height.c -o $(DEBUG_DIR)/objects/trillian_get_height.o

$(DEBUG_DIR)/objects/trillian_insert.o: ./source/base/types/trillian/trillian_insert.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEBUG_DIR)/dependencies/trillian_insert.d -c ./source/base/types/trillian/trillian_insert.c -o $(DEBUG_DIR)/objects/trillian_insert.o

$(DEBUG_DIR)/objects/trillian_print.o: ./source/base/types/trillian/trillian_print.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEBUG_DIR)/dependencies/trillian_print.d -c ./source/base/types/trillian/trillian_print.c -o $(DEBUG_DIR)/objects/trillian_print.o

$(DEBUG_DIR)/objects/trillian_rebalance.o: ./source/base/types/trillian/trillian_rebalance.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEBUG_DIR)/dependencies/trillian_rebalance.d -c ./source/base/types/trillian/trillian_rebalance.c -o $(DEBUG_DIR)/objects/trillian_rebalance.o

$(DEBUG_DIR)/objects/trillian_search.o: ./source/base/types/trillian/trillian_search.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEBUG_DIR)/dependencies/trillian_search.d -c ./source/base/types/trillian/trillian_search.c -o $(DEBUG_DIR)/objects/trillian_search.o

$(DEBUG_DIR)/objects/trillian_update_height.o: ./source/base/types/trillian/trillian_update_height.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEBUG_DIR)/dependencies/trillian_update_height.d -c ./source/base/types/trillian/trillian_update_height.c -o $(DEBUG_DIR)/objects/trillian_update_height.o

$(DEBUG_DIR)/objects/assert.o: ./source/functions/assert/assert.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEBUG_DIR)/dependencies/assert.d -c ./source/functions/assert/assert.c -o $(DEBUG_DIR)/objects/assert.o

$(DEBUG_DIR)/objects/debug.o: ./source/functions/debug/debug.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEBUG_DIR)/dependencies/debug.d -c ./source/functions/debug/debug.c -o $(DEBUG_DIR)/objects/debug.o

$(DEBUG_DIR)/objects/error.o: ./source/functions/error/error.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEBUG_DIR)/dependencies/error.d -c ./source/functions/error/error.c -o $(DEBUG_DIR)/objects/error.o

$(DEBUG_DIR)/objects/print.o: ./source/functions/print/print.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEBUG_DIR)/dependencies/print.d -c ./source/functions/print/print.c -o $(DEBUG_DIR)/objects/print.o

$(DEBUG_DIR)/objects/character_create.o: ./source/types/character/character_create.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEBUG_DIR)/dependencies/character_create.d -c ./source/types/character/character_create.c -o $(DEBUG_DIR)/objects/character_create.o

$(DEBUG_DIR)/objects/character_destroy.o: ./source/types/character/character_destroy.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEBUG_DIR)/dependencies/character_destroy.d -c ./source/types/character/character_destroy.c -o $(DEBUG_DIR)/objects/character_destroy.o

$(DEBUG_DIR)/objects/character_get.o: ./source/types/character/character_get.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEBUG_DIR)/dependencies/character_get.d -c ./source/types/character/character_get.c -o $(DEBUG_DIR)/objects/character_get.o

$(DEBUG_DIR)/objects/file_create.o: ./source/types/file/file_create.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEBUG_DIR)/dependencies/file_create.d -c ./source/types/file/file_create.c -o $(DEBUG_DIR)/objects/file_create.o

$(DEBUG_DIR)/objects/file_destroy.o: ./source/types/file/file_destroy.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEBUG_DIR)/dependencies/file_destroy.d -c ./source/types/file/file_destroy.c -o $(DEBUG_DIR)/objects/file_destroy.o

$(DEBUG_DIR)/objects/fractional_create.o: ./source/types/fractional/fractional_create.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEBUG_DIR)/dependencies/fractional_create.d -c ./source/types/fractional/fractional_create.c -o $(DEBUG_DIR)/objects/fractional_create.o

$(DEBUG_DIR)/objects/fractional_destroy.o: ./source/types/fractional/fractional_destroy.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEBUG_DIR)/dependencies/fractional_destroy.d -c ./source/types/fractional/fractional_destroy.c -o $(DEBUG_DIR)/objects/fractional_destroy.o

$(DEBUG_DIR)/objects/integer_create.o: ./source/types/integer/integer_create.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEBUG_DIR)/dependencies/integer_create.d -c ./source/types/integer/integer_create.c -o $(DEBUG_DIR)/objects/integer_create.o

$(DEBUG_DIR)/objects/integer_destroy.o: ./source/types/integer/integer_destroy.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEBUG_DIR)/dependencies/integer_destroy.d -c ./source/types/integer/integer_destroy.c -o $(DEBUG_DIR)/objects/integer_destroy.o

$(DEBUG_DIR)/objects/integer_get.o: ./source/types/integer/integer_get.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEBUG_DIR)/dependencies/integer_get.d -c ./source/types/integer/integer_get.c -o $(DEBUG_DIR)/objects/integer_get.o

$(DEBUG_DIR)/objects/string_create.o: ./source/types/string/string_create.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEBUG_DIR)/dependencies/string_create.d -c ./source/types/string/string_create.c -o $(DEBUG_DIR)/objects/string_create.o

$(DEBUG_DIR)/objects/string_destroy.o: ./source/types/string/string_destroy.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEBUG_DIR)/dependencies/string_destroy.d -c ./source/types/string/string_destroy.c -o $(DEBUG_DIR)/objects/string_destroy.o

$(DEBUG_DIR)/objects/string_get.o: ./source/types/string/string_get.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEBUG_DIR)/dependencies/string_get.d -c ./source/types/string/string_get.c -o $(DEBUG_DIR)/objects/string_get.o

$(DEBUG_DIR)/objects/string_is_int.o: ./source/types/string/string_is_int.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEBUG_DIR)/dependencies/string_is_int.d -c ./source/types/string/string_is_int.c -o $(DEBUG_DIR)/objects/string_is_int.o

$(DEBUG_DIR)/objects/string_to_integer.o: ./source/types/string/string_to_integer.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEBUG_DIR)/dependencies/string_to_integer.d -c ./source/types/string/string_to_integer.c -o $(DEBUG_DIR)/objects/string_to_integer.o

$(DEBUG_DIR)/objects/vector_create.o: ./source/types/vector/vector_create.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEBUG_DIR)/dependencies/vector_create.d -c ./source/types/vector/vector_create.c -o $(DEBUG_DIR)/objects/vector_create.o

$(DEBUG_DIR)/objects/vector_destroy.o: ./source/types/vector/vector_destroy.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEBUG_DIR)/dependencies/vector_destroy.d -c ./source/types/vector/vector_destroy.c -o $(DEBUG_DIR)/objects/vector_destroy.o

$(DEBUG_DIR)/objects/vector_expand.o: ./source/types/vector/vector_expand.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEBUG_DIR)/dependencies/vector_expand.d -c ./source/types/vector/vector_expand.c -o $(DEBUG_DIR)/objects/vector_expand.o

$(DEBUG_DIR)/objects/vector_get.o: ./source/types/vector/vector_get.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEBUG_DIR)/dependencies/vector_get.d -c ./source/types/vector/vector_get.c -o $(DEBUG_DIR)/objects/vector_get.o

$(DEBUG_DIR)/objects/vector_get_length.o: ./source/types/vector/vector_get_length.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEBUG_DIR)/dependencies/vector_get_length.d -c ./source/types/vector/vector_get_length.c -o $(DEBUG_DIR)/objects/vector_get_length.o

$(DEBUG_DIR)/objects/vector_pop.o: ./source/types/vector/vector_pop.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEBUG_DIR)/dependencies/vector_pop.d -c ./source/types/vector/vector_pop.c -o $(DEBUG_DIR)/objects/vector_pop.o

$(DEBUG_DIR)/objects/vector_push.o: ./source/types/vector/vector_push.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEBUG_DIR)/dependencies/vector_push.d -c ./source/types/vector/vector_push.c -o $(DEBUG_DIR)/objects/vector_push.o

$(DEBUG_DIR)/objects/vector_reverse.o: ./source/types/vector/vector_reverse.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEBUG_DIR)/dependencies/vector_reverse.d -c ./source/types/vector/vector_reverse.c -o $(DEBUG_DIR)/objects/vector_reverse.o

$(DEBUG_DIR)/objects/vector_set.o: ./source/types/vector/vector_set.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEBUG_DIR)/dependencies/vector_set.d -c ./source/types/vector/vector_set.c -o $(DEBUG_DIR)/objects/vector_set.o

$(DEBUG_DIR)/objects/vector_shift.o: ./source/types/vector/vector_shift.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEBUG_DIR)/dependencies/vector_shift.d -c ./source/types/vector/vector_shift.c -o $(DEBUG_DIR)/objects/vector_shift.o

$(DEBUG_DIR)/objects/vector_unshift.o: ./source/types/vector/vector_unshift.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEBUG_DIR)/dependencies/vector_unshift.d -c ./source/types/vector/vector_unshift.c -o $(DEBUG_DIR)/objects/vector_unshift.o

$(DEBUG_DIR)/objects/julien.o: ./source/functions/julien/julien.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEBUG_DIR)/dependencies/julien.d -c ./source/functions/julien/julien.c -o $(DEBUG_DIR)/objects/julien.o

$(DEBUG_DIR)/objects/julien_adjust_a.o: ./source/functions/julien/julien_adjust_a.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEBUG_DIR)/dependencies/julien_adjust_a.d -c ./source/functions/julien/julien_adjust_a.c -o $(DEBUG_DIR)/objects/julien_adjust_a.o

$(DEBUG_DIR)/objects/julien_for_five.o: ./source/functions/julien/julien_for_five.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEBUG_DIR)/dependencies/julien_for_five.d -c ./source/functions/julien/julien_for_five.c -o $(DEBUG_DIR)/objects/julien_for_five.o

$(DEBUG_DIR)/objects/julien_for_four.o: ./source/functions/julien/julien_for_four.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEBUG_DIR)/dependencies/julien_for_four.d -c ./source/functions/julien/julien_for_four.c -o $(DEBUG_DIR)/objects/julien_for_four.o

$(DEBUG_DIR)/objects/julien_for_more_than_five.o: ./source/functions/julien/julien_for_more_than_five.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEBUG_DIR)/dependencies/julien_for_more_than_five.d -c ./source/functions/julien/julien_for_more_than_five.c -o $(DEBUG_DIR)/objects/julien_for_more_than_five.o

$(DEBUG_DIR)/objects/julien_for_one.o: ./source/functions/julien/julien_for_one.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEBUG_DIR)/dependencies/julien_for_one.d -c ./source/functions/julien/julien_for_one.c -o $(DEBUG_DIR)/objects/julien_for_one.o

$(DEBUG_DIR)/objects/julien_for_three.o: ./source/functions/julien/julien_for_three.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEBUG_DIR)/dependencies/julien_for_three.d -c ./source/functions/julien/julien_for_three.c -o $(DEBUG_DIR)/objects/julien_for_three.o

$(DEBUG_DIR)/objects/julien_for_two.o: ./source/functions/julien/julien_for_two.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEBUG_DIR)/dependencies/julien_for_two.d -c ./source/functions/julien/julien_for_two.c -o $(DEBUG_DIR)/objects/julien_for_two.o

$(DEBUG_DIR)/objects/julien_get_option.o: ./source/functions/julien/julien_get_option.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEBUG_DIR)/dependencies/julien_get_option.d -c ./source/functions/julien/julien_get_option.c -o $(DEBUG_DIR)/objects/julien_get_option.o

$(DEBUG_DIR)/objects/julien_get_price.o: ./source/functions/julien/julien_get_price.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEBUG_DIR)/dependencies/julien_get_price.d -c ./source/functions/julien/julien_get_price.c -o $(DEBUG_DIR)/objects/julien_get_price.o

$(DEBUG_DIR)/objects/julien_push.o: ./source/functions/julien/julien_push.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEBUG_DIR)/dependencies/julien_push.d -c ./source/functions/julien/julien_push.c -o $(DEBUG_DIR)/objects/julien_push.o

$(DEBUG_DIR)/objects/julien_push_cheapest.o: ./source/functions/julien/julien_push_cheapest.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEBUG_DIR)/dependencies/julien_push_cheapest.d -c ./source/functions/julien/julien_push_cheapest.c -o $(DEBUG_DIR)/objects/julien_push_cheapest.o

$(DEBUG_DIR)/objects/fill_stack_a.o: ./source/functions/push_swap/fill_stack_a.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEBUG_DIR)/dependencies/fill_stack_a.d -c ./source/functions/push_swap/fill_stack_a.c -o $(DEBUG_DIR)/objects/fill_stack_a.o

$(DEBUG_DIR)/objects/pa.o: ./source/functions/push_swap/pa.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEBUG_DIR)/dependencies/pa.d -c ./source/functions/push_swap/pa.c -o $(DEBUG_DIR)/objects/pa.o

$(DEBUG_DIR)/objects/pb.o: ./source/functions/push_swap/pb.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEBUG_DIR)/dependencies/pb.d -c ./source/functions/push_swap/pb.c -o $(DEBUG_DIR)/objects/pb.o

$(DEBUG_DIR)/objects/push_swap.o: ./source/functions/push_swap/push_swap.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEBUG_DIR)/dependencies/push_swap.d -c ./source/functions/push_swap/push_swap.c -o $(DEBUG_DIR)/objects/push_swap.o

$(DEBUG_DIR)/objects/ra.o: ./source/functions/push_swap/ra.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEBUG_DIR)/dependencies/ra.d -c ./source/functions/push_swap/ra.c -o $(DEBUG_DIR)/objects/ra.o

$(DEBUG_DIR)/objects/rb.o: ./source/functions/push_swap/rb.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEBUG_DIR)/dependencies/rb.d -c ./source/functions/push_swap/rb.c -o $(DEBUG_DIR)/objects/rb.o

$(DEBUG_DIR)/objects/rr.o: ./source/functions/push_swap/rr.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEBUG_DIR)/dependencies/rr.d -c ./source/functions/push_swap/rr.c -o $(DEBUG_DIR)/objects/rr.o

$(DEBUG_DIR)/objects/rra.o: ./source/functions/push_swap/rra.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEBUG_DIR)/dependencies/rra.d -c ./source/functions/push_swap/rra.c -o $(DEBUG_DIR)/objects/rra.o

$(DEBUG_DIR)/objects/rrb.o: ./source/functions/push_swap/rrb.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEBUG_DIR)/dependencies/rrb.d -c ./source/functions/push_swap/rrb.c -o $(DEBUG_DIR)/objects/rrb.o

$(DEBUG_DIR)/objects/rrr.o: ./source/functions/push_swap/rrr.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEBUG_DIR)/dependencies/rrr.d -c ./source/functions/push_swap/rrr.c -o $(DEBUG_DIR)/objects/rrr.o

$(DEBUG_DIR)/objects/sa.o: ./source/functions/push_swap/sa.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEBUG_DIR)/dependencies/sa.d -c ./source/functions/push_swap/sa.c -o $(DEBUG_DIR)/objects/sa.o

$(DEBUG_DIR)/objects/sb.o: ./source/functions/push_swap/sb.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEBUG_DIR)/dependencies/sb.d -c ./source/functions/push_swap/sb.c -o $(DEBUG_DIR)/objects/sb.o

$(DEBUG_DIR)/objects/ss.o: ./source/functions/push_swap/ss.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEBUG_DIR)/dependencies/ss.d -c ./source/functions/push_swap/ss.c -o $(DEBUG_DIR)/objects/ss.o

$(DEBUG_DIR)/objects/validate_argc.o: ./source/functions/push_swap/validate_argc.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEBUG_DIR)/dependencies/validate_argc.d -c ./source/functions/push_swap/validate_argc.c -o $(DEBUG_DIR)/objects/validate_argc.o

$(DEBUG_DIR)/objects/validate_arguments.o: ./source/functions/push_swap/validate_arguments.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEBUG_DIR)/dependencies/validate_arguments.d -c ./source/functions/push_swap/validate_arguments.c -o $(DEBUG_DIR)/objects/validate_arguments.o

$(DEBUG_DIR)/objects/validate_argv.o: ./source/functions/push_swap/validate_argv.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEBUG_DIR)/dependencies/validate_argv.d -c ./source/functions/push_swap/validate_argv.c -o $(DEBUG_DIR)/objects/validate_argv.o

$(DEBUG_DIR)/objects/stack_create.o: ./source/types/stack/stack_create.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEBUG_DIR)/dependencies/stack_create.d -c ./source/types/stack/stack_create.c -o $(DEBUG_DIR)/objects/stack_create.o

$(DEBUG_DIR)/objects/stack_destroy.o: ./source/types/stack/stack_destroy.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEBUG_DIR)/dependencies/stack_destroy.d -c ./source/types/stack/stack_destroy.c -o $(DEBUG_DIR)/objects/stack_destroy.o

$(DEBUG_DIR)/objects/stack_get_height.o: ./source/types/stack/stack_get_height.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEBUG_DIR)/dependencies/stack_get_height.d -c ./source/types/stack/stack_get_height.c -o $(DEBUG_DIR)/objects/stack_get_height.o

$(DEBUG_DIR)/objects/stack_peek.o: ./source/types/stack/stack_peek.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEBUG_DIR)/dependencies/stack_peek.d -c ./source/types/stack/stack_peek.c -o $(DEBUG_DIR)/objects/stack_peek.o

$(DEBUG_DIR)/objects/stack_pop.o: ./source/types/stack/stack_pop.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEBUG_DIR)/dependencies/stack_pop.d -c ./source/types/stack/stack_pop.c -o $(DEBUG_DIR)/objects/stack_pop.o

$(DEBUG_DIR)/objects/stack_print.o: ./source/types/stack/stack_print.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEBUG_DIR)/dependencies/stack_print.d -c ./source/types/stack/stack_print.c -o $(DEBUG_DIR)/objects/stack_print.o

$(DEBUG_DIR)/objects/stack_push.o: ./source/types/stack/stack_push.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEBUG_DIR)/dependencies/stack_push.d -c ./source/types/stack/stack_push.c -o $(DEBUG_DIR)/objects/stack_push.o

$(DEBUG_DIR)/objects/stack_reverse_rotate.o: ./source/types/stack/stack_reverse_rotate.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEBUG_DIR)/dependencies/stack_reverse_rotate.d -c ./source/types/stack/stack_reverse_rotate.c -o $(DEBUG_DIR)/objects/stack_reverse_rotate.o

$(DEBUG_DIR)/objects/stack_rotate.o: ./source/types/stack/stack_rotate.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEBUG_DIR)/dependencies/stack_rotate.d -c ./source/types/stack/stack_rotate.c -o $(DEBUG_DIR)/objects/stack_rotate.o

$(DEBUG_DIR)/objects/stack_swap.o: ./source/types/stack/stack_swap.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEBUG_DIR)/dependencies/stack_swap.d -c ./source/types/stack/stack_swap.c -o $(DEBUG_DIR)/objects/stack_swap.o


$(DEFAULT_DIR)/objects/allocate.o: ./source/base/functions/allocate/allocate.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEFAULT_DIR)/dependencies/allocate.d -c ./source/base/functions/allocate/allocate.c -o $(DEFAULT_DIR)/objects/allocate.o

$(DEFAULT_DIR)/objects/deallocate.o: ./source/base/functions/deallocate/deallocate.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEFAULT_DIR)/dependencies/deallocate.d -c ./source/base/functions/deallocate/deallocate.c -o $(DEFAULT_DIR)/objects/deallocate.o

$(DEFAULT_DIR)/objects/delete.o: ./source/base/functions/delete/delete.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEFAULT_DIR)/dependencies/delete.d -c ./source/base/functions/delete/delete.c -o $(DEFAULT_DIR)/objects/delete.o

$(DEFAULT_DIR)/objects/new.o: ./source/base/functions/new/new.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEFAULT_DIR)/dependencies/new.d -c ./source/base/functions/new/new.c -o $(DEFAULT_DIR)/objects/new.o

$(DEFAULT_DIR)/objects/any_create.o: ./source/base/types/any/any_create.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEFAULT_DIR)/dependencies/any_create.d -c ./source/base/types/any/any_create.c -o $(DEFAULT_DIR)/objects/any_create.o

$(DEFAULT_DIR)/objects/any_destroy.o: ./source/base/types/any/any_destroy.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEFAULT_DIR)/dependencies/any_destroy.d -c ./source/base/types/any/any_destroy.c -o $(DEFAULT_DIR)/objects/any_destroy.o

$(DEFAULT_DIR)/objects/trillian_create.o: ./source/base/types/trillian/trillian_create.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEFAULT_DIR)/dependencies/trillian_create.d -c ./source/base/types/trillian/trillian_create.c -o $(DEFAULT_DIR)/objects/trillian_create.o

$(DEFAULT_DIR)/objects/trillian_delete.o: ./source/base/types/trillian/trillian_delete.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEFAULT_DIR)/dependencies/trillian_delete.d -c ./source/base/types/trillian/trillian_delete.c -o $(DEFAULT_DIR)/objects/trillian_delete.o

$(DEFAULT_DIR)/objects/trillian_destroy.o: ./source/base/types/trillian/trillian_destroy.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEFAULT_DIR)/dependencies/trillian_destroy.d -c ./source/base/types/trillian/trillian_destroy.c -o $(DEFAULT_DIR)/objects/trillian_destroy.o

$(DEFAULT_DIR)/objects/trillian_get.o: ./source/base/types/trillian/trillian_get.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEFAULT_DIR)/dependencies/trillian_get.d -c ./source/base/types/trillian/trillian_get.c -o $(DEFAULT_DIR)/objects/trillian_get.o

$(DEFAULT_DIR)/objects/trillian_get_height.o: ./source/base/types/trillian/trillian_get_height.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEFAULT_DIR)/dependencies/trillian_get_height.d -c ./source/base/types/trillian/trillian_get_height.c -o $(DEFAULT_DIR)/objects/trillian_get_height.o

$(DEFAULT_DIR)/objects/trillian_insert.o: ./source/base/types/trillian/trillian_insert.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEFAULT_DIR)/dependencies/trillian_insert.d -c ./source/base/types/trillian/trillian_insert.c -o $(DEFAULT_DIR)/objects/trillian_insert.o

$(DEFAULT_DIR)/objects/trillian_print.o: ./source/base/types/trillian/trillian_print.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEFAULT_DIR)/dependencies/trillian_print.d -c ./source/base/types/trillian/trillian_print.c -o $(DEFAULT_DIR)/objects/trillian_print.o

$(DEFAULT_DIR)/objects/trillian_rebalance.o: ./source/base/types/trillian/trillian_rebalance.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEFAULT_DIR)/dependencies/trillian_rebalance.d -c ./source/base/types/trillian/trillian_rebalance.c -o $(DEFAULT_DIR)/objects/trillian_rebalance.o

$(DEFAULT_DIR)/objects/trillian_search.o: ./source/base/types/trillian/trillian_search.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEFAULT_DIR)/dependencies/trillian_search.d -c ./source/base/types/trillian/trillian_search.c -o $(DEFAULT_DIR)/objects/trillian_search.o

$(DEFAULT_DIR)/objects/trillian_update_height.o: ./source/base/types/trillian/trillian_update_height.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEFAULT_DIR)/dependencies/trillian_update_height.d -c ./source/base/types/trillian/trillian_update_height.c -o $(DEFAULT_DIR)/objects/trillian_update_height.o

$(DEFAULT_DIR)/objects/assert.o: ./source/functions/assert/assert.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEFAULT_DIR)/dependencies/assert.d -c ./source/functions/assert/assert.c -o $(DEFAULT_DIR)/objects/assert.o

$(DEFAULT_DIR)/objects/debug.o: ./source/functions/debug/debug.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEFAULT_DIR)/dependencies/debug.d -c ./source/functions/debug/debug.c -o $(DEFAULT_DIR)/objects/debug.o

$(DEFAULT_DIR)/objects/error.o: ./source/functions/error/error.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEFAULT_DIR)/dependencies/error.d -c ./source/functions/error/error.c -o $(DEFAULT_DIR)/objects/error.o

$(DEFAULT_DIR)/objects/print.o: ./source/functions/print/print.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEFAULT_DIR)/dependencies/print.d -c ./source/functions/print/print.c -o $(DEFAULT_DIR)/objects/print.o

$(DEFAULT_DIR)/objects/character_create.o: ./source/types/character/character_create.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEFAULT_DIR)/dependencies/character_create.d -c ./source/types/character/character_create.c -o $(DEFAULT_DIR)/objects/character_create.o

$(DEFAULT_DIR)/objects/character_destroy.o: ./source/types/character/character_destroy.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEFAULT_DIR)/dependencies/character_destroy.d -c ./source/types/character/character_destroy.c -o $(DEFAULT_DIR)/objects/character_destroy.o

$(DEFAULT_DIR)/objects/character_get.o: ./source/types/character/character_get.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEFAULT_DIR)/dependencies/character_get.d -c ./source/types/character/character_get.c -o $(DEFAULT_DIR)/objects/character_get.o

$(DEFAULT_DIR)/objects/file_create.o: ./source/types/file/file_create.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEFAULT_DIR)/dependencies/file_create.d -c ./source/types/file/file_create.c -o $(DEFAULT_DIR)/objects/file_create.o

$(DEFAULT_DIR)/objects/file_destroy.o: ./source/types/file/file_destroy.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEFAULT_DIR)/dependencies/file_destroy.d -c ./source/types/file/file_destroy.c -o $(DEFAULT_DIR)/objects/file_destroy.o

$(DEFAULT_DIR)/objects/fractional_create.o: ./source/types/fractional/fractional_create.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEFAULT_DIR)/dependencies/fractional_create.d -c ./source/types/fractional/fractional_create.c -o $(DEFAULT_DIR)/objects/fractional_create.o

$(DEFAULT_DIR)/objects/fractional_destroy.o: ./source/types/fractional/fractional_destroy.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEFAULT_DIR)/dependencies/fractional_destroy.d -c ./source/types/fractional/fractional_destroy.c -o $(DEFAULT_DIR)/objects/fractional_destroy.o

$(DEFAULT_DIR)/objects/integer_create.o: ./source/types/integer/integer_create.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEFAULT_DIR)/dependencies/integer_create.d -c ./source/types/integer/integer_create.c -o $(DEFAULT_DIR)/objects/integer_create.o

$(DEFAULT_DIR)/objects/integer_destroy.o: ./source/types/integer/integer_destroy.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEFAULT_DIR)/dependencies/integer_destroy.d -c ./source/types/integer/integer_destroy.c -o $(DEFAULT_DIR)/objects/integer_destroy.o

$(DEFAULT_DIR)/objects/integer_get.o: ./source/types/integer/integer_get.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEFAULT_DIR)/dependencies/integer_get.d -c ./source/types/integer/integer_get.c -o $(DEFAULT_DIR)/objects/integer_get.o

$(DEFAULT_DIR)/objects/string_create.o: ./source/types/string/string_create.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEFAULT_DIR)/dependencies/string_create.d -c ./source/types/string/string_create.c -o $(DEFAULT_DIR)/objects/string_create.o

$(DEFAULT_DIR)/objects/string_destroy.o: ./source/types/string/string_destroy.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEFAULT_DIR)/dependencies/string_destroy.d -c ./source/types/string/string_destroy.c -o $(DEFAULT_DIR)/objects/string_destroy.o

$(DEFAULT_DIR)/objects/string_get.o: ./source/types/string/string_get.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEFAULT_DIR)/dependencies/string_get.d -c ./source/types/string/string_get.c -o $(DEFAULT_DIR)/objects/string_get.o

$(DEFAULT_DIR)/objects/string_is_int.o: ./source/types/string/string_is_int.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEFAULT_DIR)/dependencies/string_is_int.d -c ./source/types/string/string_is_int.c -o $(DEFAULT_DIR)/objects/string_is_int.o

$(DEFAULT_DIR)/objects/string_to_integer.o: ./source/types/string/string_to_integer.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEFAULT_DIR)/dependencies/string_to_integer.d -c ./source/types/string/string_to_integer.c -o $(DEFAULT_DIR)/objects/string_to_integer.o

$(DEFAULT_DIR)/objects/vector_create.o: ./source/types/vector/vector_create.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEFAULT_DIR)/dependencies/vector_create.d -c ./source/types/vector/vector_create.c -o $(DEFAULT_DIR)/objects/vector_create.o

$(DEFAULT_DIR)/objects/vector_destroy.o: ./source/types/vector/vector_destroy.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEFAULT_DIR)/dependencies/vector_destroy.d -c ./source/types/vector/vector_destroy.c -o $(DEFAULT_DIR)/objects/vector_destroy.o

$(DEFAULT_DIR)/objects/vector_expand.o: ./source/types/vector/vector_expand.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEFAULT_DIR)/dependencies/vector_expand.d -c ./source/types/vector/vector_expand.c -o $(DEFAULT_DIR)/objects/vector_expand.o

$(DEFAULT_DIR)/objects/vector_get.o: ./source/types/vector/vector_get.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEFAULT_DIR)/dependencies/vector_get.d -c ./source/types/vector/vector_get.c -o $(DEFAULT_DIR)/objects/vector_get.o

$(DEFAULT_DIR)/objects/vector_get_length.o: ./source/types/vector/vector_get_length.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEFAULT_DIR)/dependencies/vector_get_length.d -c ./source/types/vector/vector_get_length.c -o $(DEFAULT_DIR)/objects/vector_get_length.o

$(DEFAULT_DIR)/objects/vector_pop.o: ./source/types/vector/vector_pop.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEFAULT_DIR)/dependencies/vector_pop.d -c ./source/types/vector/vector_pop.c -o $(DEFAULT_DIR)/objects/vector_pop.o

$(DEFAULT_DIR)/objects/vector_push.o: ./source/types/vector/vector_push.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEFAULT_DIR)/dependencies/vector_push.d -c ./source/types/vector/vector_push.c -o $(DEFAULT_DIR)/objects/vector_push.o

$(DEFAULT_DIR)/objects/vector_reverse.o: ./source/types/vector/vector_reverse.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEFAULT_DIR)/dependencies/vector_reverse.d -c ./source/types/vector/vector_reverse.c -o $(DEFAULT_DIR)/objects/vector_reverse.o

$(DEFAULT_DIR)/objects/vector_set.o: ./source/types/vector/vector_set.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEFAULT_DIR)/dependencies/vector_set.d -c ./source/types/vector/vector_set.c -o $(DEFAULT_DIR)/objects/vector_set.o

$(DEFAULT_DIR)/objects/vector_shift.o: ./source/types/vector/vector_shift.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEFAULT_DIR)/dependencies/vector_shift.d -c ./source/types/vector/vector_shift.c -o $(DEFAULT_DIR)/objects/vector_shift.o

$(DEFAULT_DIR)/objects/vector_unshift.o: ./source/types/vector/vector_unshift.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEFAULT_DIR)/dependencies/vector_unshift.d -c ./source/types/vector/vector_unshift.c -o $(DEFAULT_DIR)/objects/vector_unshift.o

$(DEFAULT_DIR)/objects/julien.o: ./source/functions/julien/julien.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEFAULT_DIR)/dependencies/julien.d -c ./source/functions/julien/julien.c -o $(DEFAULT_DIR)/objects/julien.o

$(DEFAULT_DIR)/objects/julien_adjust_a.o: ./source/functions/julien/julien_adjust_a.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEFAULT_DIR)/dependencies/julien_adjust_a.d -c ./source/functions/julien/julien_adjust_a.c -o $(DEFAULT_DIR)/objects/julien_adjust_a.o

$(DEFAULT_DIR)/objects/julien_for_five.o: ./source/functions/julien/julien_for_five.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEFAULT_DIR)/dependencies/julien_for_five.d -c ./source/functions/julien/julien_for_five.c -o $(DEFAULT_DIR)/objects/julien_for_five.o

$(DEFAULT_DIR)/objects/julien_for_four.o: ./source/functions/julien/julien_for_four.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEFAULT_DIR)/dependencies/julien_for_four.d -c ./source/functions/julien/julien_for_four.c -o $(DEFAULT_DIR)/objects/julien_for_four.o

$(DEFAULT_DIR)/objects/julien_for_more_than_five.o: ./source/functions/julien/julien_for_more_than_five.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEFAULT_DIR)/dependencies/julien_for_more_than_five.d -c ./source/functions/julien/julien_for_more_than_five.c -o $(DEFAULT_DIR)/objects/julien_for_more_than_five.o

$(DEFAULT_DIR)/objects/julien_for_one.o: ./source/functions/julien/julien_for_one.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEFAULT_DIR)/dependencies/julien_for_one.d -c ./source/functions/julien/julien_for_one.c -o $(DEFAULT_DIR)/objects/julien_for_one.o

$(DEFAULT_DIR)/objects/julien_for_three.o: ./source/functions/julien/julien_for_three.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEFAULT_DIR)/dependencies/julien_for_three.d -c ./source/functions/julien/julien_for_three.c -o $(DEFAULT_DIR)/objects/julien_for_three.o

$(DEFAULT_DIR)/objects/julien_for_two.o: ./source/functions/julien/julien_for_two.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEFAULT_DIR)/dependencies/julien_for_two.d -c ./source/functions/julien/julien_for_two.c -o $(DEFAULT_DIR)/objects/julien_for_two.o

$(DEFAULT_DIR)/objects/julien_get_option.o: ./source/functions/julien/julien_get_option.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEFAULT_DIR)/dependencies/julien_get_option.d -c ./source/functions/julien/julien_get_option.c -o $(DEFAULT_DIR)/objects/julien_get_option.o

$(DEFAULT_DIR)/objects/julien_get_price.o: ./source/functions/julien/julien_get_price.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEFAULT_DIR)/dependencies/julien_get_price.d -c ./source/functions/julien/julien_get_price.c -o $(DEFAULT_DIR)/objects/julien_get_price.o

$(DEFAULT_DIR)/objects/julien_push.o: ./source/functions/julien/julien_push.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEFAULT_DIR)/dependencies/julien_push.d -c ./source/functions/julien/julien_push.c -o $(DEFAULT_DIR)/objects/julien_push.o

$(DEFAULT_DIR)/objects/julien_push_cheapest.o: ./source/functions/julien/julien_push_cheapest.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEFAULT_DIR)/dependencies/julien_push_cheapest.d -c ./source/functions/julien/julien_push_cheapest.c -o $(DEFAULT_DIR)/objects/julien_push_cheapest.o

$(DEFAULT_DIR)/objects/fill_stack_a.o: ./source/functions/push_swap/fill_stack_a.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEFAULT_DIR)/dependencies/fill_stack_a.d -c ./source/functions/push_swap/fill_stack_a.c -o $(DEFAULT_DIR)/objects/fill_stack_a.o

$(DEFAULT_DIR)/objects/pa.o: ./source/functions/push_swap/pa.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEFAULT_DIR)/dependencies/pa.d -c ./source/functions/push_swap/pa.c -o $(DEFAULT_DIR)/objects/pa.o

$(DEFAULT_DIR)/objects/pb.o: ./source/functions/push_swap/pb.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEFAULT_DIR)/dependencies/pb.d -c ./source/functions/push_swap/pb.c -o $(DEFAULT_DIR)/objects/pb.o

$(DEFAULT_DIR)/objects/push_swap.o: ./source/functions/push_swap/push_swap.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEFAULT_DIR)/dependencies/push_swap.d -c ./source/functions/push_swap/push_swap.c -o $(DEFAULT_DIR)/objects/push_swap.o

$(DEFAULT_DIR)/objects/ra.o: ./source/functions/push_swap/ra.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEFAULT_DIR)/dependencies/ra.d -c ./source/functions/push_swap/ra.c -o $(DEFAULT_DIR)/objects/ra.o

$(DEFAULT_DIR)/objects/rb.o: ./source/functions/push_swap/rb.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEFAULT_DIR)/dependencies/rb.d -c ./source/functions/push_swap/rb.c -o $(DEFAULT_DIR)/objects/rb.o

$(DEFAULT_DIR)/objects/rr.o: ./source/functions/push_swap/rr.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEFAULT_DIR)/dependencies/rr.d -c ./source/functions/push_swap/rr.c -o $(DEFAULT_DIR)/objects/rr.o

$(DEFAULT_DIR)/objects/rra.o: ./source/functions/push_swap/rra.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEFAULT_DIR)/dependencies/rra.d -c ./source/functions/push_swap/rra.c -o $(DEFAULT_DIR)/objects/rra.o

$(DEFAULT_DIR)/objects/rrb.o: ./source/functions/push_swap/rrb.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEFAULT_DIR)/dependencies/rrb.d -c ./source/functions/push_swap/rrb.c -o $(DEFAULT_DIR)/objects/rrb.o

$(DEFAULT_DIR)/objects/rrr.o: ./source/functions/push_swap/rrr.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEFAULT_DIR)/dependencies/rrr.d -c ./source/functions/push_swap/rrr.c -o $(DEFAULT_DIR)/objects/rrr.o

$(DEFAULT_DIR)/objects/sa.o: ./source/functions/push_swap/sa.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEFAULT_DIR)/dependencies/sa.d -c ./source/functions/push_swap/sa.c -o $(DEFAULT_DIR)/objects/sa.o

$(DEFAULT_DIR)/objects/sb.o: ./source/functions/push_swap/sb.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEFAULT_DIR)/dependencies/sb.d -c ./source/functions/push_swap/sb.c -o $(DEFAULT_DIR)/objects/sb.o

$(DEFAULT_DIR)/objects/ss.o: ./source/functions/push_swap/ss.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEFAULT_DIR)/dependencies/ss.d -c ./source/functions/push_swap/ss.c -o $(DEFAULT_DIR)/objects/ss.o

$(DEFAULT_DIR)/objects/validate_argc.o: ./source/functions/push_swap/validate_argc.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEFAULT_DIR)/dependencies/validate_argc.d -c ./source/functions/push_swap/validate_argc.c -o $(DEFAULT_DIR)/objects/validate_argc.o

$(DEFAULT_DIR)/objects/validate_arguments.o: ./source/functions/push_swap/validate_arguments.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEFAULT_DIR)/dependencies/validate_arguments.d -c ./source/functions/push_swap/validate_arguments.c -o $(DEFAULT_DIR)/objects/validate_arguments.o

$(DEFAULT_DIR)/objects/validate_argv.o: ./source/functions/push_swap/validate_argv.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEFAULT_DIR)/dependencies/validate_argv.d -c ./source/functions/push_swap/validate_argv.c -o $(DEFAULT_DIR)/objects/validate_argv.o

$(DEFAULT_DIR)/objects/stack_create.o: ./source/types/stack/stack_create.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEFAULT_DIR)/dependencies/stack_create.d -c ./source/types/stack/stack_create.c -o $(DEFAULT_DIR)/objects/stack_create.o

$(DEFAULT_DIR)/objects/stack_destroy.o: ./source/types/stack/stack_destroy.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEFAULT_DIR)/dependencies/stack_destroy.d -c ./source/types/stack/stack_destroy.c -o $(DEFAULT_DIR)/objects/stack_destroy.o

$(DEFAULT_DIR)/objects/stack_get_height.o: ./source/types/stack/stack_get_height.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEFAULT_DIR)/dependencies/stack_get_height.d -c ./source/types/stack/stack_get_height.c -o $(DEFAULT_DIR)/objects/stack_get_height.o

$(DEFAULT_DIR)/objects/stack_peek.o: ./source/types/stack/stack_peek.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEFAULT_DIR)/dependencies/stack_peek.d -c ./source/types/stack/stack_peek.c -o $(DEFAULT_DIR)/objects/stack_peek.o

$(DEFAULT_DIR)/objects/stack_pop.o: ./source/types/stack/stack_pop.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEFAULT_DIR)/dependencies/stack_pop.d -c ./source/types/stack/stack_pop.c -o $(DEFAULT_DIR)/objects/stack_pop.o

$(DEFAULT_DIR)/objects/stack_print.o: ./source/types/stack/stack_print.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEFAULT_DIR)/dependencies/stack_print.d -c ./source/types/stack/stack_print.c -o $(DEFAULT_DIR)/objects/stack_print.o

$(DEFAULT_DIR)/objects/stack_push.o: ./source/types/stack/stack_push.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEFAULT_DIR)/dependencies/stack_push.d -c ./source/types/stack/stack_push.c -o $(DEFAULT_DIR)/objects/stack_push.o

$(DEFAULT_DIR)/objects/stack_reverse_rotate.o: ./source/types/stack/stack_reverse_rotate.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEFAULT_DIR)/dependencies/stack_reverse_rotate.d -c ./source/types/stack/stack_reverse_rotate.c -o $(DEFAULT_DIR)/objects/stack_reverse_rotate.o

$(DEFAULT_DIR)/objects/stack_rotate.o: ./source/types/stack/stack_rotate.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEFAULT_DIR)/dependencies/stack_rotate.d -c ./source/types/stack/stack_rotate.c -o $(DEFAULT_DIR)/objects/stack_rotate.o

$(DEFAULT_DIR)/objects/stack_swap.o: ./source/types/stack/stack_swap.c
	@$(CC) $(CFLAGS) $(CPATHS) -MMD -MF $(DEFAULT_DIR)/dependencies/stack_swap.d -c ./source/types/stack/stack_swap.c -o $(DEFAULT_DIR)/objects/stack_swap.o


