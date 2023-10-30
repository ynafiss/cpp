/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynafiss <ynafiss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 23:46:30 by ynafiss           #+#    #+#             */
/*   Updated: 2023/10/15 11:32:15 by ynafiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(){
    for (int i = 0; i < 4; ++i)
        inventory[i] = nullptr;
}

Character::Character(const Character& ori){
    for (int i = 0; i < 4; ++i)
        inventory[i] = ori.inventory[i];
}

Character&  Character::operator=(const Character& ori){
    if (this != &ori){
        for (int i = 0; i < 4; ++i)
            inventory[i] = ori.inventory[i];
    }
    return *this;
}

Character::Character(const std::string &name) : name(name) {
    for (int i = 0; i < 4; ++i)
        inventory[i] = nullptr;
}


std::string const &Character::getName() const {
    return name;
}

void Character::equip(AMateria *m) {
    for (int i = 0; i < 4; ++i) {
        if (inventory[i] == nullptr) {
            inventory[i] = m;
            return;
        }
    }
}

void Character::unequip(int idx) {
    if (idx >= 0 && idx < 4)
        inventory[idx] = nullptr;
}

void Character::use(int idx, ICharacter &target) {
    if (idx >= 0 && idx < 4 && inventory[idx] != nullptr) {
        inventory[idx]->use(target);
    }
}

Character::~Character() {
    for (int i = 0; i < 4; ++i) {
        if (inventory[i] != nullptr)
            delete inventory[i];
    }
}