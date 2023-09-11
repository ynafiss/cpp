all: Zombie

Zombie: newZombie.cpp randomChump.cpp Zombie.cpp 
	c++ -Wall -Wextra -Werror -std=c++98 newZombie.cpp randomChump.cpp Zombie.cpp main.cpp -o Zombie
fclean:
	rm -rf Zombie
re: fclean all