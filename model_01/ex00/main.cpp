#include "Zombie.hpp"

int main()
{
    std::string str = "kill";
    Zombie a = Zombie("lol");
    Zombie* nw1 = newZombie("rachid");
    Zombie* nw = newZombie(str);
    randomChump("WA");
    nw->annonce();
    nw1->annonce();
    
}