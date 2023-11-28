NAME= Span
SRC= main.cpp Span.cpp
CPPFLAGS= -Wall -Werror -Wextra -std=c++98
CXX= c++
OBJ= ${SRC:.cpp=.o}

all: ${NAME}

${NAME}: ${OBJ} Span.hpp
	${CXX} ${CPPFLAGS} ${SRC} -o ${NAME}

clean:
	rm -rf ${OBJ}
fclean: clean
	rm -rf ${NAME}
re: fclean all