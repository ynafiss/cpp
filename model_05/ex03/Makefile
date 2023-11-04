NAME=Bureaucrat
SRC=Bureaucrat.cpp Intern.cpp main.cpp AForm.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp ShrubberyCrationForm.cpp
CPPFLAGS= -Wall -Werror -Wextra -std=c++98
CXX= c++
OBJ= ${SRC:.cpp=.o}

all: ${NAME}

${NAME}: ${OBJ}
	${CXX} ${CPPFLAGS} ${SRC} -o ${NAME}

clean : 
	rm -rf ${OBJ}

fclean: 
	rm -rf ${OBJ} ${NAME}

sh:
	rm -rf *_shrubbery

re: fclean all