/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynafiss <ynafiss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 09:49:58 by ynafiss           #+#    #+#             */
/*   Updated: 2023/08/15 10:31:41 by ynafiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string newName)
{
    this->name = newName;
    weaponB = NULL;
}

void HumanB::setWeapon(Weapon &newWeapon)
{
    this->weaponB = &newWeapon;
}

void HumanB::attack(void)
{
    // std:: cout <<this->weaponB->getType()<< std::endl;
    if(this->weaponB != NULL)
        std::cout << this->name << " attacks with their " << this->weaponB->getType() << std::endl;
    else
        std::cout << this->name << " dosn't have a weapon" << std::endl;
}