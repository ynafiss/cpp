/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynafiss <ynafiss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 01:29:06 by ynafiss           #+#    #+#             */
/*   Updated: 2023/10/12 18:24:33 by ynafiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {}

Ice::Ice(const Ice& ori) : AMateria(ori.getType()){
}

void Ice::use(ICharacter &target) {
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

Ice&    Ice::operator=(const Ice& ori){
    type = ori.type;
    return *this;
}

AMateria *Ice::clone() const {
    return new Ice(*this);
}


Ice::~Ice() {}