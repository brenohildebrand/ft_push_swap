# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/14 13:52:24 by bhildebr          #+#    #+#              #
#    Updated: 2024/02/14 16:25:10 by bhildebr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = build/libframework.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror

SOURCES = \
	source/base/processes/allocate/allocate.c \
	source/base/processes/deallocate/deallocate.c \
	source/base/processes/delete/delete.c \
	source/base/processes/new/new.c \
	source/base/types/any/any_create.c \
	source/base/types/any/any_destroy.c \
	source/base/types/trillian/trillian_create.c \
	source/base/types/trillian/trillian_delete.c \
	source/base/types/trillian/trillian_destroy.c \
	source/base/types/trillian/trillian_get.c \
	source/base/types/trillian/trillian_get_height.c \
	source/base/types/trillian/trillian_insert.c \
	source/base/types/trillian/trillian_print.c \
	source/base/types/trillian/trillian_rebalance.c \
	source/base/types/trillian/trillian_search.c \
	source/base/types/trillian/trillian_update_height.c \
	source/processes/assert/assert.c \
	source/processes/debug/debug.c \
	source/processes/error/error.c \
	source/processes/print/print.c \
	source/types/character/character_create.c \
	source/types/character/character_destroy.c \
	source/types/character/character_get.c \
	source/types/file/file_create.c \
	source/types/file/file_destroy.c \
	source/types/fractional/fractional_create.c \
	source/types/fractional/fractional_destroy.c \
	source/types/integer/integer_create.c \
	source/types/integer/integer_destroy.c \
	source/types/integer/integer_get.c \
	source/types/string/string_create.c \
	source/types/string/string_destroy.c \
	source/types/string/string_get.c \
	source/types/string/string_is_int.c \
	source/types/string/string_to_integer.c \
	source/types/vector/vector_create.c \
	source/types/vector/vector_destroy.c \
	source/types/vector/vector_expand.c \
	source/types/vector/vector_get.c \
	source/types/vector/vector_get_length.c \
	source/types/vector/vector_pop.c \
	source/types/vector/vector_push.c \
	source/types/vector/vector_reverse.c \
	source/types/vector/vector_set.c \
	source/types/vector/vector_shift.c \
	source/types/vector/vector_unshift.c

OBJECTS = \
	objects/allocate.o \
	objects/deallocate.o \
	objects/delete.o \
	objects/new.o \
	objects/any_create.o \
	objects/any_destroy.o \
	objects/trillian_create.o \
	objects/trillian_delete.o \
	objects/trillian_destroy.o \
	objects/trillian_get.o \
	objects/trillian_get_height.o \
	objects/trillian_insert.o \
	objects/trillian_print.o \
	objects/trillian_rebalance.o \
	objects/trillian_search.o \
	objects/trillian_update_height.o \
	objects/assert.o \
	objects/debug.o \
	objects/error.o \
	objects/print.o \
	objects/character_create.o \
	objects/character_destroy.o \
	objects/character_get.o \
	objects/file_create.o \
	objects/file_destroy.o \
	objects/fractional_create.o \
	objects/fractional_destroy.o \
	objects/integer_create.o \
	objects/integer_destroy.o \
	objects/integer_get.o \
	objects/string_create.o \
	objects/string_destroy.o \
	objects/string_get.o \
	objects/string_is_int.o \
	objects/string_to_integer.o \
	objects/vector_create.o \
	objects/vector_destroy.o \
	objects/vector_expand.o \
	objects/vector_get.o \
	objects/vector_get_length.o \
	objects/vector_pop.o \
	objects/vector_push.o \
	objects/vector_reverse.o \
	objects/vector_set.o \
	objects/vector_shift.o \
	objects/vector_unshift.o

INCLUDES = \
	-include ft_framework.h \
	-iquote includes \
	-iquote source/base/processes/allocate \
	-iquote source/base/processes/deallocate \
	-iquote source/base/processes/delete \
	-iquote source/base/processes/new \
	-iquote source/base/types/any \
	-iquote source/base/types/trillian \
	-iquote source/processes/assert \
	-iquote source/processes/debug \
	-iquote source/processes/error \
	-iquote source/processes/print \
	-iquote source/types/character \
	-iquote source/types/file \
	-iquote source/types/fractional \
	-iquote source/types/integer \
	-iquote source/types/string \
	-iquote source/types/vector

all: $(NAME)

$(NAME): $(OBJECTS) | build
	ar rcs $(NAME) $(OBJECTS)

$(OBJECTS): $(SOURCES) | objects
	$(CC) $(CFLAGS) $(INCLUDES) -c $(SOURCES)

clean:
	$(RM) $(OBJECTS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all $(NAME) $(OBJECTS) clean fclean re
