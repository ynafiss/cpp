NAME=Attack
SRC=HumanA.cpp HumanB.cpp Weapon.cpp main.cpp
FLAGS=c++ -Wall -Werror -Wextra
OBJ= ${SRC:.cpp=.o}

all: ${NAME}

${NAME} : ${OBJ}
	${FLAGS} ${SRC} -o ${NAME}