NAME= brain
SRC=main.cpp
FLAGS= c++ -Wall -Wextra -Werror -std=c++98
OBJ= ${SRC:.cpp=.o}

all: ${NAME}

${NAME}: ${OBJ}
	${FLAGS} ${SRC} -o ${NAME}
clean:
	rm -rf ${OBJ}

fclean:
	rm -rf ${OBJ} ${NAME}

re: fclean all
