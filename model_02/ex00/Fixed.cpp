/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynafiss <ynafiss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 13:34:35 by ynafiss           #+#    #+#             */
/*   Updated: 2023/09/15 08:59:04 by ynafiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(Fixed& ori){
    std::cout << "copy constructor called" << std::endl;
    setRawBits(ori.getRawBits());
}

Fixed::Fixed(void){
    std::cout << "Default constructor called" << std::endl;
    this->value = 0;
}

Fixed&  Fixed::operator=(Fixed& ori){
    std::cout << "Copy assignment operator called " << std::endl;
    if (this != &ori)
        setRawBits(ori.getRawBits());
    return *this;
}

int Fixed::getRawBits(void){
    std::cout << "getRawBits member function called" << std::endl;
    return this->value;
}

void    Fixed::setRawBits(int const raw){
    this->value = raw;
}

Fixed::~Fixed(void){
    std::cout << "Destructor called" << std::endl;
}
