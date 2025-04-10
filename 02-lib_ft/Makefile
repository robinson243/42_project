# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: romukena <romukena@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/01 19:45:22 by romukena          #+#    #+#              #
#    Updated: 2025/04/10 12:15:06 by romukena         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = $(shell echo *.c)

OBJS = $(SRCS:.c=.o)

LIB = libft.a

NAME = libft

CC = gcc

RM = rm -f

CFLAGS = -Wall -Wextra -Werror

all:	$(NAME)

$(NAME): $(OBJS) $(LIB)
	@$(CC) $(CFLAGS) $(OBJS) $(LIB) -o $(NAME)

$(LIB): $(OBJS) 
	ar rcs $(LIB) $(OBJS)

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(LIB) $(NAME)

re: fclean all

.PHONY: all clean fclean re