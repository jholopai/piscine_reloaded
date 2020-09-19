# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jholopai <jholopai@hive.fi>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/09/19 19:01:28 by jholopai          #+#    #+#              #
#    Updated: 2020/09/19 23:43:48 by jholopai         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

SOURCE = ./ft_putstr.c ./ft_err_msg.c ./ft_display_file.c

OBJS = $(SOURCE:.c=.o)

HEADER = ./header.h

FLAGS = -Wall -Werror -Wextra

all:
	gcc -c $(SOURCE);
	gcc -o $(NAME) $(FLAGS) $(OBJS) -I $(HEADER);

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
