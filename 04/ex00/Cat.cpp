/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynafiss <ynafiss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 23:00:14 by ynafiss           #+#    #+#             */
/*   Updated: 2023/09/29 01:56:56 by ynafiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(){
}

Cat::Cat(const Cat& ori){
    type = ori.type;
}

Cat&    Cat::operator=(const Cat& ori){
    if (this != &ori){
        type = ori.type;
    }
    return *this;
}

void    Cat::makeSound(){
    std::cout << "Meaw Meaw" << std::endl;
}
