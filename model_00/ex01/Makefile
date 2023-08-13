NAME=PhoneBook
SRC= PhoneBook.cpp main.cpp
FLAGS= c++ -Wall -Wextra -Werror -std=c++98

all: $(NAME)

OBJ= $(SRC:.cpp=.o)
$(NAME): $(OBJ)
	$(FLAGS) $(OBJ) -o $(NAME)
clean:
	rm -rf $(OBJ)
fclean: clean
	rm -rf $(NAME)
re : fclean all
