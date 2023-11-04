NAME=Materia
SRC= AMateria.cpp Cure.cpp Ice.cpp ICharacter.cpp main.cpp Character.cpp MateriaSource.cpp
CPPFLAGS= -Wall -Wextra -Werror -std=c++98 #-fsanitize=address
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