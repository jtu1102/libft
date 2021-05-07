# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: soahn <soahn@student.42seoul.kr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/04 15:41:49 by soahn             #+#    #+#              #
#    Updated: 2021/05/07 15:46:58 by soahn            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror

NAME = libft.a
SOURCES = ft_memset.c\
	   ft_memcpy.c\
	   ft_bzero.c\
	   ft_memccpy.c\
	   ft_memchr.c\
	   ft_memmove.c\
	   ft_memcmp.c\
	   ft_strlen.c\
	   ft_atoi.c\
	   ft_strlcpy.c\
	   ft_strchr.c\
	   ft_strnstr.c\
	   ft_strncmp.c\
	   ft_isalpha.c\
	   ft_isdigit.c\
	   ft_isalnum.c\
	   ft_strtrim.c\
	   ft_strdup.c\
	   ft_calloc.c\
	   ft_isascii.c\
	   ft_isprint.c\
	   ft_strlcat.c\
	   ft_tolower.c\
	   ft_toupper.c\
	   ft_putchar_fd.c\
	   ft_putnbr_fd.c\
	   ft_putstr_fd.c\
	   ft_substr.c\
	   ft_strrchr.c\
	   ft_strjoin.c\
	   ft_split.c\
	   ft_itoa.c\
	   ft_strmapi.c\
	   ft_putendl_fd.c
BONUS = ft_lstnew_bonus.c\
	   ft_lstadd_front_bonus.c\
	   ft_lstsize_bonus.c\
	   ft_lstlast_bonus.c\
	   ft_lstadd_back_bonus.c\
	   ft_lstdelone_bonus.c\
	   ft_lstclear_bonus.c\
	   ft_lstiter_bonus.c\
	   ft_lstmap_bonus.c
OBJECTS = $(SOURCES:.c=.o)
BONUS_OBJ = $(BONUS:.c=.o)

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@ -I ./

$(NAME): $(OBJECTS)
	ar rc $@ $(OBJECTS)

bonus: $(OBJECTS) $(BONUS_OBJ)
	ar rc $(NAME) $(OBJECTS) $(BONUS_OBJ)

clean:
	rm -f $(OBJECTS) $(BONUS_OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
