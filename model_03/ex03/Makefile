NAME=Frag
SRC= ClapTrap.cpp main.cpp ScavTrap.cpp FragTrap.cpp
FLAGS= g++ -Wall -Wextra -Werror -std=c++98

OBJ= ${SRC:.cpp=.o}

all: ${NAME}

${NAME}: ${OBJ}
	${FLAGS} ${SRC} -o ${NAME}
clean:
	rm -rf ${OBJ}
fclean:
	rm -rf ${OBJ} ${NAME}
re: fclean all