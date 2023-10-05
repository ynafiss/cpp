/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynafiss <ynafiss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 15:27:59 by ynafiss           #+#    #+#             */
/*   Updated: 2023/09/30 15:29:05 by ynafiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "WrongDog.hpp"

WrongDog::WrongDog(){
    std::cout << "WrongDOG Default constructor called" << std::endl;
    type = "WrongDog";
}

WrongDog::WrongDog(const WrongDog& ori) : WrongAnimal(ori.type){
    type = ori.type;
}

WrongDog&    WrongDog::operator=(const WrongDog& ori){
    if (this != &ori){
        type = ori.type;
    }
    return *this;
}

void    WrongDog::makeSound() const{
    std::cout << "Wrong Woof Woof" << std::endl;
}

WrongDog::~WrongDog(){
    std::cout << "WrongDOG Destructor called" << std::endl;
}