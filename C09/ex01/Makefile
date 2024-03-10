# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: irychkov <irychkov@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/31 14:54:38 by irychkov          #+#    #+#              #
#    Updated: 2024/01/31 19:09:53 by irychkov         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC		= ./srcs/ft_putchar.c ./srcs/ft_swap.c ./srcs/ft_putstr.c ./srcs/ft_strlen.c ./srcs/ft_strcmp.c

OBJS	= ${SRC:.c=.o}

HEAD	= ./includes/ft.h

NAME	= libft.a

AR		= ar rc

LIB		= ranlib

CC		= cc

CFLAGS	= -Wall -Wextra -Werror

all:	${NAME}

.c.o:	
	${CC} ${CFLAGS} -c -I ${HEAD} $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			${AR} ${NAME} ${OBJS}
			${LIB} ${NAME}

clean:	
	rm -f ${OBJS}

fclean:	clean
		rm -f ${NAME}

re:		fclean all

.PHONY:	all clean fclean re
