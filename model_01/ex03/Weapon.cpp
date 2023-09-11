/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynafiss <ynafiss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 10:20:54 by ynafiss           #+#    #+#             */
/*   Updated: 2023/08/15 10:19:35 by ynafiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"


Weapon::Weapon(std::string defaultWeapon){
    this->weapon = defaultWeapon;
}

std::string  Weapon::getType(void){
    return this->weapon;
}

void Weapon::setType(std::string newType){
    
    this->weapon.assign(newType);
}