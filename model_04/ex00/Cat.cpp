/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynafiss <ynafiss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 23:00:14 by ynafiss           #+#    #+#             */
/*   Updated: 2023/09/29 16:47:24 by ynafiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(){
    std::cout << "CAT Default constructor called" << std::endl;
    type = "Cat";
}

Cat::Cat(const Cat& ori) : Animal(ori.type){
    type = ori.type;
}

Cat&    Cat::operator=(const Cat& ori){
    if (this != &ori){
        type = ori.type;
    }
    return *this;
}


void    Cat::makeSound() const{
    std::cout << "Meaw Meaw" << std::endl;
}

Cat::~Cat(){
    std::cout << "CAT Destructor called" << std::endl;
}
