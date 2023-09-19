/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynafiss <ynafiss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 16:05:37 by ynafiss           #+#    #+#             */
/*   Updated: 2023/09/15 09:12:53 by ynafiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name):ClapTrap(name){
    std::cout << "ScavTrap constructer called" << std::endl;
    Name = name;
};

ScavTrap::ScavTrap():ClapTrap(){
}

ScavTrap::ScavTrap(ScavTrap& ori):ClapTrap(ori.name){
    Name = ori.Name;
}

ScavTrap& ScavTrap::operator=(ScavTrap& ori){
    if (this != &ori){
        this->Name = ori.Name;    
    }
    return *this;
        
}

void    ScavTrap::attack(std::string target){
    if (Energy <= 0){
        std::cout << "There is no Energy points to Attack !" << std::endl;
        return;
    }
    else if (Hit <= 0){
        std::cout << "There is no Hit points to Attack !" << std::endl;
        return;
    }
    std::cout << "ScavTrap " << Name << ", causing " << Attack << " poits of damage to" << target << std::endl;
    Energy -= 1;
    return;
}

void ScavTrap::guardGate(){
    std::cout << "ScavTrap " << Name << "is in Gate Keeper mode" << std::endl;
}

ScavTrap::~ScavTrap(void){
    std::cout << "ScavTrap destructer called" << std::endl;
}