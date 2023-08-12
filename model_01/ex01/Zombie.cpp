/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynafiss <ynafiss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 02:02:20 by ynafiss           #+#    #+#             */
/*   Updated: 2023/08/12 02:04:44 by ynafiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void    Zombie::annonce(void)
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(std::string newName)
{
    name = newName;
    
}
Zombie::~Zombie()
{
   std::cout << name << "   hana met\n";
    
}

int main()
{
    std::string str = "kill";
    Zombie a = Zombie("lol");
    Zombie* nw1 = newZombie("rachid");
    Zombie* nw = newZombie(str);
    randomChump("WA HASSAN");
    nw->annonce();
    nw1->annonce();
}