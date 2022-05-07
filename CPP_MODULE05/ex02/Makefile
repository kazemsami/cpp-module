NAME = form_polymorphism
FLAGS = -Wall -Wextra -Werror
CC = c++
SRCS = main.cpp Bureaucrat.cpp Form.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp
OBJS = ${SRCS:.cpp=.o}

all: ${NAME}

${NAME}: ${OBJS}
	${CC} ${FLAGS} -std=c++98 ${OBJS} -o $@

%.o: %.cpp
	${CC} ${FLAGS} -std=c++98 -c $<

clean:
	rm -rf *.o

fclean: clean
	rm -rf ${NAME}

re: fclean all