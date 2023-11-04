/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynafiss <ynafiss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 18:07:47 by ynafiss           #+#    #+#             */
/*   Updated: 2023/09/30 15:29:14 by ynafiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(){
    std::cout << "WrongCAT Default constructor called" << std::endl;
    type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& ori) : WrongAnimal(ori.type){
    type = ori.type;
}

WrongCat&    WrongCat::operator=(const WrongCat& ori){
    if (this != &ori){
        type = ori.type;
    }
    return *this;
}


void    WrongCat::makeSound() const{
    std::cout << "Wrong Meaw Meaw" << std::endl;
}

WrongCat::~WrongCat(){
    std::cout << "WrongCAT Destructor called" << std::endl;
}
