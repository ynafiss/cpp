NAME=ex01
SRC= Fixed.cpp main.cpp
FLAGS=-std=c++98 -Wall -Wextra -Werror
CXX=c++
OBJ= ${SRC:.cpp=.o}

all: ${NAME}

${NAME}: ${OBJ}
	${CXX} ${FLAGS} ${SRC} -o ${NAME}

clean:
	rm -rf ${OBJ}
fclean: clean
	rm -rf ${NAME}
re: fclean all