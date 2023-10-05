/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynafiss <ynafiss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 23:00:14 by ynafiss           #+#    #+#             */
/*   Updated: 2023/10/01 15:13:13 by ynafiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(){
    std::cout << "CAT Default constructor called" << std::endl;
    type = "Cat";
    catBrain = new Brain();
}

Cat::Cat(const Cat& ori) : Animal(ori.type){
    type = ori.type;
    catBrain = new Brain();
    for (int i = 0; i < 100; i++){
        catBrain->ideas[i] = ori.catBrain->ideas[i];
    }
}

Cat&    Cat::operator=(const Cat& ori){
    if (this != &ori){
        type = ori.type;
        catBrain = new Brain();
        for (int i = 0; i < 100; i++){
            catBrain->ideas[i] = ori.catBrain->ideas[i];
        }
    }
    return *this;
}


void    Cat::makeSound() const{
    std::cout << "Meaw Meaw" << std::endl;
}

Cat::~Cat(){
    std::cout << "CAT Destructor called" << std::endl;
    delete catBrain;
}
