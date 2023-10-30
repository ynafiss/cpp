/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynafiss <ynafiss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 02:41:52 by ynafiss           #+#    #+#             */
/*   Updated: 2023/10/12 18:15:27 by ynafiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria&   AMateria::operator=(const AMateria& ori){
    if (this != &ori){
        type = ori.type;
    }
    return *this;
}

AMateria::AMateria(){
}

AMateria::AMateria(const AMateria& ori){
    type = ori.type;
}

void AMateria::use(ICharacter& target){
    (void)target;
    return ;
}

AMateria::AMateria(const std::string &type) : type(type) {}

AMateria::~AMateria() {}

std::string const &AMateria::getType() const {
    return type;
}

ICharacter::~ICharacter() {
    // Empty destructor definition
}