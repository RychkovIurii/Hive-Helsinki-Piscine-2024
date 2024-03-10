# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: omartela <omartela@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/27 16:16:04 by omartela          #+#    #+#              #
#    Updated: 2024/01/28 20:38:59 by omartela         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME = rush-02
SRCS = src/main.c src/ft_utils.c src/ft_print_output.c src/parse_dict.c src/check_dig.c src/separator.c src/ft_clean_input.c
OBJS = ${SRC:.C=.o}
FLAGS = -Wall -Werror -Wextra

all:	${NAME}
${NAME}: ${OBJS}
	cc -o ${NAME} ${SRCS} -Iincludes ${FLAGS}


clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all


.PHONY: all clean fclean
