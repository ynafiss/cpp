/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynafiss <ynafiss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 23:00:07 by ynafiss           #+#    #+#             */
/*   Updated: 2023/09/28 23:43:33 by ynafiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(){
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

void    Animal::makeSound(){
    std::cout << "I DON'T KNOW WITCH SOUND SHOULD I MAKE" << std::endl;
}

