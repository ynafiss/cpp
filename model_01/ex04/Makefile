NAME=replace
FLAGS= c++ -Wall -Werror -Wextra -std=c++98
SRC= main.cpp

OBJ= ${SRC:.cpp=.o}

all: ${NAME}

${NAME}: ${OBJ}
	${FLAGS} ${SRC} -o ${NAME}

clean:
	rm -rf ${OBJ}

fclean: clean
	rm -rf ${NAME}

re: fclean all