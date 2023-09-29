/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynafiss <ynafiss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 16:50:50 by ynafiss           #+#    #+#             */
/*   Updated: 2023/09/25 00:16:38 by ynafiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name):ClapTrap(name){
    std::cout << "FragTrap constructer called" << std::endl;
    Name = name;
}

FragTrap::FragTrap(void){
}

FragTrap::FragTrap(const FragTrap& ori){
    Name = ori.Name;
}

void highFivesGuys(){
    std::cout << "High Five Guys !!" << std::endl;
}

FragTrap::~FragTrap(){
    std::cout << "FragTrap destructer called" << std::endl;
}