# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jholopai <jholopai@hive.fi>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/09/09 19:58:54 by jholopai          #+#    #+#              #
#    Updated: 2020/09/09 20:08:14 by jholopai         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

/*
** Makefile that compiles a library from some of the functions created
** during this project.
*/

NAME = libft.a

SOURCE = ./srcs/ft_putchar.c ./srcs/ft_putstr.c ./srcs/ft_strcmp.c \
./srcs/ft_strlen.c ./srcs/ft_swap.c

OBJECTS = $(SOURCE:.c=.o)

HEADER = ./includes

FLAGS = -Wall -Werror -Wextra

all:
	gcc -c $(FLAGS) $(SOURCE) -I $(HEADER);
	ar -r $(NAME) $(OBJECTS) 

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all
