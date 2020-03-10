# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sad-aude <sad-aude@student.le-101.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/15 17:48:42 by sad-aude          #+#    #+#              #
#    Updated: 2020/03/10 06:35:59 by sad-aude         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #


NAME = libftprintf.a

SRCS = src/ft_printf.c \
		src/ft_spec.c \
		src/ft_convert.c \

OBJ = $(SRCS:.c=.o)

C = gcc

FLAGS = -Wall -Wextra -Werror -I include/

LIB = libft/libft.a

all: $(NAME)

$(LIB):
	make -C libft

$(NAME): $(LIB) $(OBJ)
	cp libft/libft.a $(NAME)
	ar rcs $(NAME) $(OBJ) $(LIB)

%.o: %.c
	$(C) $(FLAGS) -o $@ -c $<

clean:
	rm -rf $(OBJ)
	make clean -C libft

fclean: clean
	rm -rf $(NAME)
	rm -rf $(LIB)
	
re: fclean all
