/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynafiss <ynafiss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 23:00:20 by ynafiss           #+#    #+#             */
/*   Updated: 2023/09/29 01:59:14 by ynafiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(){
}

Dog::Dog(const Dog& ori){
    type = ori.type;
}

Dog&    Dog::operator=(const Dog& ori){
    if (this != &ori){
        type = ori.type;
    }
    return *this;
}

void    Dog::makeSound(){
    std::cout << "Woof Woof" << std::endl;
}
