/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynafiss <ynafiss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 12:22:46 by ynafiss           #+#    #+#             */
/*   Updated: 2023/08/31 13:08:52 by ynafiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name){
    Name = name;
    Hit = 10;
    Energy = 10;
    Attack = 0;
    std::cout << "Default constructor of " << Name << " called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap& ori){
    std::cout << "Copy constructor called" << std::endl;
    Name = ori.Name;
    Hit = ori.Hit;
    Energy = ori.Energy;
    Attack = ori.Attack;
}

ClapTrap& ClapTrap::operator=(ClapTrap& ori){
    std::cout << "Copy assignment operator called " << std::endl;
    if (this != &ori){
        Name = ori.Name;
        Hit = ori.Hit;
        Energy = ori.Energy;
        Attack = ori.Attack;
    }
    return *this;
}

void    ClapTrap::attack(const std::string& target){
    if (Energy <= 0){
        std::cout << "There is no Energy points to Attack !" << std::endl;
        return;
    }
    else if (Hit <= 0){
        std::cout << "There is no Hit points to Attack !" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << Name << ", causing " << Attack << " poits of damage to" << target << std::endl;
    Energy -= 1;
    return;
}

void    ClapTrap::takeDamage(unsigned int amount){
    if (Hit <= 0){
        std::cout << "ClapTrap" << Name << "already dead !" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << Name << " takes " << amount << " of damage"<< std::endl;
    Hit -= amount;
    return;
}

void    ClapTrap::beRepaired(unsigned int amount){
    if (Energy <= 0){
        std::cout << "There is no Energy points to repair your Hit points !" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << Name << " gets " << amount << " poits of hit !" << std::endl;
    Hit += amount;
    Energy -= 1;
    return ;
}

ClapTrap::~ClapTrap(void){
    std::cout << "destructor of " << Name <<" called" << std::endl;
}