NAME=ex02
SRC= Fixed.cpp main.cpp
FLAGS= g++ -std=c++98 -Wall -Wextra -Werror
OBJ= ${SRC:.cpp=.o}
CXX=c++

all: ${NAME}

${NAME}: ${OBJ}
	${CXX} ${FLAGS} ${SRC} -o ${NAME}

clean:
	rm -rf ${OBJ}
fclean: clean
	rm -rf ${NAME}
re: fclean all