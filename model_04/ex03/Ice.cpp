/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynafiss <ynafiss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 01:29:06 by ynafiss           #+#    #+#             */
/*   Updated: 2023/10/06 09:53:39 by ynafiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice"){
}

Ice::Ice(const Ice& ori) : AMateria(ori.getType()){
}

void Ice::use(ICharacter &target) const{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

Ice&    Ice::operator=(const Ice& ori){
    (void)ori;
   return *this;
}


AMateria*    Ice::clone()const{
    return new Ice(*this);    
}

Ice::~Ice(){
}