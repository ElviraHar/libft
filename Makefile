# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: elharuty <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/25 19:11:17 by elharuty          #+#    #+#              #
#    Updated: 2023/02/02 22:44:19 by elharuty         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

SRCS = 	ft_isalpha.c 	\
		ft_isdigit.c	\
		ft_isalnum.c	\
		ft_isascii.c	\
		ft_isprint.c	\
		ft_strlen.c		\
		ft_strlcpy.c	\
		ft_strlcat.c	\
		ft_strncmp.c	\
		ft_strchr.c		\
		ft_strrchr.c	\
		ft_strnstr.c	\
		ft_toupper.c	\
		ft_tolower.c	\
		ft_memset.c		\
		ft_memcpy.c		\
		ft_memmove.c	\
		ft_memchr.c		\
		ft_memcmp.c		\
		ft_atoi.c		\
		ft_bzero.c		\
		ft_calloc.c		\
		ft_strdup.c		\
		ft_strmapi.c	\
		ft_substr.c		\
		ft_strjoin.c	\
		ft_strtrim.c	\
		ft_striteri.c	\
		ft_putchar_fd.c	\
		ft_putendl_fd.c	\
		ft_putnbr_fd.c	\
		ft_putstr_fd.c	\
		ft_itoa.c
HEADER	= libft.h
OBJ		= $(SRCS:.c=.o)
CC		= cc
CFLAGS	= -Wall -Wextra -Werror
.PHONY	: all clean fclean re

all		:	$(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME)	:	$(OBJ)
	@ar -rcs $(NAME) $(OBJ)

fclean	:	clean
	rm -f $(NAME)

clean	:
	rm -f $(OBJ)

re		:	fclean all
