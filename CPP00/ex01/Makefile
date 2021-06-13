# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mturquin <mturquin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/22 21:39:48 by mturquin          #+#    #+#              #
#    Updated: 2021/05/26 03:34:50 by mturquin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	phonebook

SRCS	=	main.cpp\
			Contact.class.cpp\

ALLOBJS	=	${SRCS}

FLAGS	=	-Wall -Wextra -Werror

CC		=	clang++

INCLUDE	=	Contact.class.hpp\

COMPILE	=	${CC} ${FLAGS}

RM		=	rm -rf

all		:	$(NAME)

$(NAME)	:	${ALLOBJS} $(INCLUDES)
			$(COMPILE) -o $(NAME) ${ALLOBJS}

clean:
			$(RM) *.o

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
