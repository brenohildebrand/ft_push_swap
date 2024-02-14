# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/13 17:02:19 by bhildebr          #+#    #+#              #
#    Updated: 2024/02/13 20:19:00 by bhildebr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = build/push_swap
FRAMEWORK = libs/ft_framework/build/libframework.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror

SOURCES = \
	source/processes/**/*.c
	source/types/**/*.c

OBJECTS = $(patsubst $(SRC_DIR)/%.c,$(OBJ_DIR)/%.o,$(SRCS))
	objects/sources.o

INCLUDES = \
	-include ft_framework.h \
	-iquote lib/ft_framework/base/processes/** \
	-iquote lib/ft_framework/base/types/** \
	-iquote lib/ft_framework/processes/** \
	-iquote lib/ft_framework/types/** \
	-iquote source/processes/** \
	-iquote source/types/** \

all: $(NAME)

$(NAME): $(FRAMEWORK) $(OBJECTS)
	@cc -o $(NAME) $(OBJECTS) $(FRAMEWORK)
	
$(FRAMEWORK):
	$(MAKE) -C libs/ft_framework

clean:
	$(RM) $(OBJECTS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

%.o: %.c
    $(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

.PHONY: $(NAME) all clean fclean re