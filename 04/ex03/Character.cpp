/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynafiss <ynafiss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 23:46:30 by ynafiss           #+#    #+#             */
/*   Updated: 2023/10/04 03:53:20 by ynafiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(){
    for(int i = 0; i < 4; i++){
        materia[i] = nullptr;
    }
}

void Character::equip(AMateria* m){
    for (int i = 0; i < 4; i++){
        if (materia[i] == nullptr){
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
        materia[idx] = nullptr;
}

void    Character::use(int idx, ICharacter& target){
    if (idx < 0 || idx > 3){
        std::cout << "Index Out Of Range" << std::endl;
        return ;
    }
    materia[idx]->use(target);
}

Character::~Character(){
}