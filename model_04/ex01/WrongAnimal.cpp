/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynafiss <ynafiss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 18:04:54 by ynafiss           #+#    #+#             */
/*   Updated: 2023/09/30 15:34:40 by ynafiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
    std::cout << "WrongAnimal Default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string Type) : type(Type){
}

WrongAnimal::WrongAnimal(const WrongAnimal& ori){
    type = ori.type;
}

WrongAnimal&    WrongAnimal::operator=(const WrongAnimal& ori){
    if (this != &ori)
    {
        this->type = ori.type;
    }
    return *this;
}

void    WrongAnimal::makeSound() const{
    std::cout << "I DON'T KNOW WITCH SOUND SHOULD I MAKE" << std::endl;
}

std::string WrongAnimal::getType() const{
    return type;
}

WrongAnimal::~WrongAnimal(){
    std::cout << "WrongAnimal Destructor called" << std::endl;
}
