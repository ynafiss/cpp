/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynafiss <ynafiss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 23:00:23 by ynafiss           #+#    #+#             */
/*   Updated: 2023/09/30 16:26:49 by ynafiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP


#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal{
    private:
        Brain* dogBrain;
    public:
        Dog();
        Dog(const Dog& ori);
        Dog(std::string Type);
        Dog& operator=(const Dog& ori);
        void makeSound() const;
        ~Dog();
};

#endif