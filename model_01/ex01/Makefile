NAME=Zombie
SRC=newZombie.cpp randomChump.cpp Zombie.cpp
FLAGS= c++ -Wall -Wextra -Werror -std=c++98

all: $(NAME)

OBJ= ${SRC:.cpp=.o}

$(NAME): ${OBJ}
	${FLAGS} ${SRC} -o ${NAME}
clean:
	rm -rf ${OBJ}
fclean: clean
	rm -rf ${NAME}
re: fclean all