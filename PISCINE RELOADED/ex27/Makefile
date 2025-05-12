# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thasousa <thasousa@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/09 15:17:23 by thasousa          #+#    #+#              #
#    Updated: 2025/04/09 15:24:36 by thasousa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
CC = cc
FLAGS = -Wall -Wextra -Werror
DISP = ft_display_file.c
NAMEO = $(DISP:.c=.o)

all: $(NAME)

$(NAME): $(NAMEO)
	$(CC) $(FLAGS) -o $@ $<

clean:
	rm -rf $(NAMEO)

fclean: clean
	rm -rf $(NAME)

re: fclean all