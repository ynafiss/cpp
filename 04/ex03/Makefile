NAME=Materia
SRC=  Character.cpp main.cpp MateriaSource.cpp AMateria.cpp Cure.cpp Ice.cpp 
CPPFLAGS= -Wall -Wextra -Werror -std=c++98 -fsanitize=address
CXX = c++
OBJ= ${SRC:.cpp=.o}

all: ${NAME}

${NAME}: ${OBJ}
	${CXX} ${CPPFLAGS} ${SRC} -o ${NAME}
clean:
	rm -rf ${OBJ}
fclean:
	rm -rf ${OBJ} ${NAME}
re: fclean all