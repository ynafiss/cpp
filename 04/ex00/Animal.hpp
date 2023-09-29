/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynafiss <ynafiss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 23:00:02 by ynafiss           #+#    #+#             */
/*   Updated: 2023/09/29 01:59:27 by ynafiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
    protected:
        std::string type;
    public:
    Animal();
    Animal(const Animal& ori);
    Animal(std::string Type);
    Animal& operator=(const Animal& ori);
    virtual void makeSound();
    ~Animal();
};

#endif