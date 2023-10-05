/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynafiss <ynafiss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 01:22:56 by ynafiss           #+#    #+#             */
/*   Updated: 2023/10/04 16:40:07 by ynafiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure"){
}

Cure::Cure(const Cure& ori) : AMateria(ori.getType()){
}

Cure&    Cure::operator=(const Cure& ori){
    (void)ori;
   return *this;
}

void Cure::use(ICharacter &target) const{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

AMateria*    Cure::clone()const{
    return new Cure(*this);    
}

Cure::~Cure(){
}