/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynafiss <ynafiss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 09:41:16 by ynafiss           #+#    #+#             */
/*   Updated: 2023/08/14 11:37:11 by ynafiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string newName, Weapon& newWeapon) : weapon(newWeapon){
    this->name = newName;
}

void HumanA::attack(void){
    std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}