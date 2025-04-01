# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: romukena <romukena@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/01 18:13:32 by romukena          #+#    #+#              #
#    Updated: 2025/04/01 18:33:31 by romukena         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = main.c ft_putstr.c

OBJS = $(SRCS:.c=.o)

NAME = ft_display_file

CC = gcc

RM = rm -f

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@


CFLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME) : $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all 

.PHONY: all clean fclean re