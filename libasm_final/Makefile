# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/29 16:16:41 by akhalidy          #+#    #+#              #
#    Updated: 2021/01/31 08:55:55 by akhalidy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all clean fclean re

NAME = libasm.a

SRC = ft_strlen.s \
ft_read.s \
ft_write.s \
ft_strcmp.s \
ft_strcpy.s \
ft_strdup.s

NA = nasm

OBJ = $(SRC:.s=.o)

FLAG = -f macho64

all: $(NAME)

$(NAME): $(OBJ)
		@ar rc $(NAME) $(OBJ)
		@ranlib $(NAME)

$(OBJ):
		@for i in $(SRC); do $(NA) $(FLAG) $$i; done

clean:
		@rm -f $(OBJ)
		
fclean: clean
		@rm -f $(NAME)
		
re: fclean all

run:
	gcc main.c -L. -lasm $(NAME) -Wl,-no_pie -o libasm