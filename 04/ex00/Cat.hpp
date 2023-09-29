/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynafiss <ynafiss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 23:00:17 by ynafiss           #+#    #+#             */
/*   Updated: 2023/09/29 01:18:34 by ynafiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP


#include "Animal.hpp"

class Cat : public Animal{
    public:
        Cat();
        Cat(const Cat& ori);
        Cat(std::string Type);
        Cat& operator=(const Cat& ori);
        void makeSound();
};

#endif