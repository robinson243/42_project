# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: romukena <romukena@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/24 17:58:03 by romukena          #+#    #+#              #
#    Updated: 2025/04/01 18:33:03 by romukena         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = $(wildcard srcs/*.c)

OBJS = $(SRCS:.c=.o)

LIB = libft.a

EXEC = libft

CC = gcc

RM = rm -f

CFLAGS = -Wall -Wextra -Werror -I includes/

all:	$(EXEC)

$(EXEC) : $(OBJS) $(LIB)
	@$(CC) $(CFLAGS) $(OBJS) $(LIB) -o $(EXEC)

$(LIB): $(OBJS) 
	ar rcs $(LIB) $(OBJS)

%.o : %.c
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(LIB) $(EXEC)

re: fclean all

.PHONY: all clean fclean re