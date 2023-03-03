# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ykenzaou <ykenzaou@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/11 02:33:41 by ykenzaou          #+#    #+#              #
#    Updated: 2022/12/11 02:33:45 by ykenzaou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = cc
FLG = -Wall -Wextra -Werror
RM = rm -f
AR = ar rc

FILES = ft_isalpha.c ft_isdigit.c ft_toupper.c ft_tolower.c ft_isalnum.c ft_strlen.c ft_isprint.c ft_memset.c ft_bzero.c \
		ft_memcpy.c ft_strchr.c ft_strrchr.c ft_memcmp.c ft_memchr.c ft_strlcpy.c  ft_calloc.c ft_strdup.c \
		ft_putstr_fd.c ft_putchar_fd.c ft_strjoin.c ft_putendl_fd.c ft_putnbr_fd.c ft_substr.c ft_itoa.c ft_memmove.c ft_isascii.c \
		ft_strmapi.c  ft_striteri.c ft_strlcat.c ft_strncmp.c ft_atoi.c ft_strnstr.c ft_strtrim.c ft_split.c
	

OBJ = $(FILES:.c=.o)

all : $(NAME)

$(NAME): $(OBJ)
		$(AR) $(NAME) $(OBJ)
		
%.o: %.c libft.h
	$(CC) -c $< $(FLG)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all