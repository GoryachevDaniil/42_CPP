# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mturquin <mturquin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/22 21:39:48 by mturquin          #+#    #+#              #
#    Updated: 2021/05/23 16:26:18 by mturquin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	megaphone

SRCS	=	megaphone.cpp

ALLOBJS	=	${SRCS}

FLAGS	=	-Wall -Wextra -Werror

CC		=	clang++

COMPILE	=	${CC} ${FLAGS}

RM		=	rm -rf

all		:	$(NAME)

$(NAME)	:	${ALLOBJS}
			$(COMPILE) -o $(NAME) ${ALLOBJS}
			
clean:
			$(RM) *.o

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re