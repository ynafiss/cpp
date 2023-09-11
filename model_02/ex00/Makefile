NAME=ex00
SRC= Fixed.cpp main.cpp
FLAGS= c++ -std=c++98 -Wall -Wextra -Werror
OBJ= ${SRC:.cpp=.o}

all: ${NAME}

${NAME}: ${OBJ}
	${FLAGS} ${SRC} -o ${NAME}

clean:
	rm -rf ${OBJ}
fclean: clean
	rm -rf ${NAME}
re: fclean all