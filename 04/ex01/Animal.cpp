/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynafiss <ynafiss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 23:00:07 by ynafiss           #+#    #+#             */
/*   Updated: 2023/09/29 16:43:38 by ynafiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(){
    std::cout << "Animal Default constructor called" << std::endl;
}

Animal::Animal(std::string Type) : type(Type){
}

Animal::Animal(const Animal& ori){
    type = ori.type;
}

Animal&    Animal::operator=(const Animal& ori){
    if (this != &ori)
    {
        this->type = ori.type;
    }
    return *this;
}

void    Animal::makeSound() const{
    std::cout << "I DON'T KNOW WITCH SOUND SHOULD I MAKE" << std::endl;
}

std::string Animal::getType() const{
    return type;
}

Animal::~Animal(){
    std::cout << "Animal Destructor called" << std::endl;
}

