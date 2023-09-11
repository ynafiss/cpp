/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynafiss <ynafiss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 11:19:47 by ynafiss           #+#    #+#             */
/*   Updated: 2023/08/28 13:06:36 by ynafiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(const int i){
    std::cout << "Int constructor called" << std::endl;
    this->value = i << this->literal_value;
}

int Fixed::toInt(void) const{
    return this->value >> 8;
}

Fixed::Fixed(const float f){
    std::cout << "Float constructor called" << std::endl;
    this->value = round(f * (1 << this->literal_value));
}

float Fixed::toFloat(void) const{
    return static_cast<float>(this->value) / (1 << this->literal_value);
}

Fixed::Fixed(const Fixed& ori){
    std::cout << "copy constructor called" << std::endl;
    value = ori.value;
}

Fixed::Fixed(void){
    std::cout << "Default constructor called" << std::endl;
    this->value = 0;
}

Fixed&  Fixed::operator=(const Fixed& ori){
    std::cout << "Copy assignment operator called " << std::endl;
    if (this != &ori)
        value = ori.value;
    return *this;
}

std::ostream&    operator << (std::ostream& output, const Fixed& ori){
    output << ori.toFloat();
    return output;
}

int Fixed::getRawBits(void){
    // std::cout << "getRawBits member function called" << std::endl;
    return this->value;
}

void    Fixed::setRawBits(int const raw){
    this->value = raw;
}

Fixed::~Fixed(void){
    std::cout << "Destructor called" << std::endl;
}
