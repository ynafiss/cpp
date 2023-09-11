NAME=complain
SRC=Harl.cpp main.cpp
FLAGS= c++ -Wall -Werror -Wextra -std=c++98

OBJ= ${SRC:.cpp=.o}

all: ${NAME}

${NAME}: ${OBJ}
	${FLAGS} ${SRC} -o ${NAME}

clean:
	rm -rf ${OBJ}

fclean: clean
	rm -rf ${NAME}

re: fclean all