# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: sad-aude <sad-aude@student.le-101.fr>      +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2020/02/04 21:49:21 by sad-aude     #+#   ##    ##    #+#        #
#    Updated: 2020/02/04 22:12:43 by sad-aude    ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

C = gcc

NAME = libftprintf.a

SRCS = src/ft_printf.c

FLAGS = -Wall -Wextra -Werror -I include/

OBJ = $(SRCS:.c=.o)

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