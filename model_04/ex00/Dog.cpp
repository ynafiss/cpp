/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynafiss <ynafiss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 23:00:20 by ynafiss           #+#    #+#             */
/*   Updated: 2023/09/29 16:47:11 by ynafiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(){
    std::cout << "DOG Default constructor called" << std::endl;
    type = "Dog";
}

Dog::Dog(const Dog& ori) : Animal(ori.type){
    type = ori.type;
}

Dog&    Dog::operator=(const Dog& ori){
    if (this != &ori){
        type = ori.type;
    }
    return *this;
}

void    Dog::makeSound() const{
    std::cout << "Woof Woof" << std::endl;
}

Dog::~Dog(){
    std::cout << "DOG Destructor called" << std::endl;
}