/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynafiss <ynafiss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 11:19:47 by ynafiss           #+#    #+#             */
/*   Updated: 2023/08/30 12:13:39 by ynafiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

float Fixed::min(const Fixed& A, const Fixed& B){
    if (A.value < B.value)
        return A.toFloat();
    else
        return B.toFloat();
}

float Fixed::max(const Fixed& A, const Fixed& B){
    if (A.value > B.value)
        return A.toFloat();
    else
        return B.toFloat();
}

float Fixed::min(Fixed& A, Fixed& B){
    if (A.value < B.value)
        return A.toFloat();
    else
        return B.toFloat();
}

float Fixed::max(Fixed& A, Fixed& B){
    if (A.value > B.value)
        return A.toFloat();
    else
        return B.toFloat();
}

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

Fixed&  Fixed::operator=(const Fixed& ori){
    std::cout << "Copy assignment operator called " << std::endl;
    if (this != &ori)
        value = ori.value;
    return *this;
}

Fixed   Fixed::operator+(const Fixed& A){
    Fixed new_obj;
    
    new_obj.value = A.value + this->value;
    return new_obj;
}

Fixed   Fixed::operator*(const Fixed& A){
    Fixed new_obj(A.toFloat() * this->toFloat());
    return new_obj;
}

Fixed   Fixed::operator/(const Fixed& A){
    Fixed new_obj(this->toFloat() / A.toFloat());
    return new_obj;
}

Fixed   Fixed::operator-(const Fixed& A){
    Fixed new_obj;
    
    new_obj.value = this->value - A.value;
    return new_obj;
}

Fixed& Fixed::operator++(){
    value++;
    return *this;
}

Fixed Fixed::operator++(int){
    Fixed tmp = *this;
    value++;
    return tmp;
}

std::ostream&    operator << (std::ostream& output, const Fixed& ori){
    output << ori.toFloat();
    return output;
}

bool   Fixed::operator>(const Fixed& A) const{
    return (this->value > A.value);
}

bool   Fixed::operator>=(const Fixed& A) const{
    return (this->value >= A.value);
}

bool   Fixed::operator<(const Fixed& A) const{
    return (this->value < A.value);
}

bool   Fixed::operator<=(const Fixed& A) const{
    return (this->value <= A.value);
}

bool   Fixed::operator==(const Fixed& A) const{
    return (this->value == A.value);
}

bool   Fixed::operator!=(const Fixed& A) const{
    return (this->value != A.value);
}