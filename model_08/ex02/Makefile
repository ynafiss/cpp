NAME= Mutantstack
SRC= main.cpp
CPPFLAGS= -Wall -Werror -Wextra -std=c++98
CXX= c++
OBJ= ${SRC:.cpp=.o}

all: ${NAME}

${NAME}: ${OBJ} MutantStack.hpp
	${CXX} ${CPPFLAGS} ${SRC} -o ${NAME}

clean:
	rm -rf ${OBJ}
fclean: clean
	rm -rf ${NAME}
re: fclean all