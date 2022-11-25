# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lahamoun <lahamoun@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/09 01:03:34 by lahamoun          #+#    #+#              #
#    Updated: 2022/11/13 01:46:30 by lahamoun         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS= -Wall -Wextra -Werror

FILES=  ft_hexa.c \
		ft_ptr.c \
		ft_utoa.c \
		ft_nbr.c \
		ft_itoa.c \
		ft_string.c \
		ft_char.c\
		ft_printf.c \
		ft_putchar.c \
		ft_unsigned.c \
		ft_percentage.c \
		ft_hexa_ptr_len.c \

NAME= libftprintf.a

OFILES= $(FILES:.c=.o)

all : $(NAME)

$(NAME) : $(OFILES)

$(OFILES):$(FILES)
	$(CC) $(CFLAGS) -c $(FILES)
	ar -rc $(NAME) $(OFILES)

clean :
	rm -rf $(OFILES)
fclean : clean
	rm -rf $(NAME)
re : fclean all	
		
		