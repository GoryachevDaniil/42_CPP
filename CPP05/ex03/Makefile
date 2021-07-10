NAME	=	bureaucrat

SRCS	=	main.cpp\
			Bureaucrat.cpp\
			Form.cpp\
			ShrubberyCreationForm.cpp\
			RobotomyRequestForm.cpp\
			PresidentialPardonForm.cpp\
			Intern.cpp\

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
