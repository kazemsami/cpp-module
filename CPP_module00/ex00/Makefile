NAME = megaphone
SRC = megaphone.cpp
OBJ = ${SRC:.cpp=.o}
CFLAGS = -Wall -Wextra -Werror
CC = c++

all: ${NAME}

${NAME}: ${OBJ}
	${CC} ${CFLAGS} -std=c++98 ${OBJ} -o $@

%.o: %.cpp
	${CC} ${CFLAGS} -std=c++98 -c $< -o $@

clean:
	rm -rf *.o
fclean: clean
	rm -rf ${NAME}

re: fclean all