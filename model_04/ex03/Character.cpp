/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynafiss <ynafiss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 23:46:30 by ynafiss           #+#    #+#             */
/*   Updated: 2023/10/07 00:14:53 by ynafiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AMateria.hpp"

Character::Character(){
    for(int i = 0; i < 4; i++){
        materia[i] = NULL;
    }
}

Character::Character(const Character& ori){
    for (int i = 0; i < 4; i++){
        materia[i] = ori.materia[i];
    }
    Name = ori.getName();
}

Character& Character::operator=(const Character& ori){
    if (this == &ori)
        return *this;
    for (int i = 0; i < 4; i++){
        materia[i] = ori.materia[i];
    }
    Name = ori.getName();
    return *this;
}

Character::Character(std::string n){
    Name = n;
    for(int i = 0; i < 4; i++){
        materia[i] = NULL;
    }
}

std::string const &  Character::getName() const{
    return Name;
}

void Character::equip(AMateria* m){
    for (int i = 0; i < 4; i++){
        if (materia[i] == NULL){
            materia[i] = m;
            return ;
        }
    }
    return ;
}

void    Character::unequip(int idx){
    if (idx < 0 || idx > 3){
        std::cout << "Index Out Of Range" << std::endl;
        return ;
    }
    else
        materia[idx] = NULL;
}

void    Character::use(int idx, ICharacter& target){
    if (idx < 0 || idx > 3){
        std::cout << "Index Out Of Range" << std::endl;
        return ;
    }
    if (materia[idx] != NULL)
        materia[idx]->use(target);
}

Character::~Character(){
    for(int i = 0; i < 4; i++){
        if (materia[i] != NULL)
            delete materia[i];
    }
}