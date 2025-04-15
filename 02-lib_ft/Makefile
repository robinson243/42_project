# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: romukena <romukena@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/01 19:45:22 by romukena          #+#    #+#              #
#    Updated: 2025/04/15 02:54:16 by romukena         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = \
	ft_memset.c ft_bzero.c ft_memcpy.c ft_memchr.c ft_memcmp.c \
	ft_strlen.c ft_strdup.c ft_strlcat.c ft_strchr.c ft_strrchr.c \
	ft_strnstr.c ft_strncmp.c ft_atoi.c ft_isalpha.c ft_isdigit.c \
	ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c \
	ft_memmove.c ft_strlcpy.c ft_calloc.c ft_substr.c ft_strtrim.c \
	ft_strjoin.c ft_split.c ft_itoa.c ft_putchar_fd.c ft_putstr_fd.c \
	ft_putendl_fd.c ft_putnbr_fd.c ft_strmapi.c ft_striteri.c

SRCS_bonus = \
	ft_lstadd_front.c ft_lstnew.c ft_lstsize.c \


OBJS = $(SRCS:.c=.o)

OBJS_bonus = $(SRCS_bonus:.c=.o)

NAME = libft.a

CC = gcc

RM = rm -f

CFLAGS = -Wall -Wextra -Werror

all:	$(NAME)

$(NAME): $(OBJS) 
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

bonus : $(OBJS_bonus) $(OBJS)
	ar rcs $(NAME) $(OBJS_bonus)

clean:
	$(RM) $(OBJS) $(OBJS_bonus)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re