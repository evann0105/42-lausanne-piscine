# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pclerget <marvin@42lausanne.ch>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/07 11:54:16 by pclerget          #+#    #+#              #
#    Updated: 2024/09/08 19:55:13 by pclerget         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: clean fclean all re

SRCS =	main.c \
		ft_util.c \
		ft_check_args.c \
		malltab.c \
		table.c \
		read_write_dico.c

OBJS = $(SRCS:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = rush-02

all:$(NAME)

.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)
