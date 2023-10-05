/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynafiss <ynafiss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 23:00:17 by ynafiss           #+#    #+#             */
/*   Updated: 2023/10/01 17:26:10 by ynafiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP


#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal{
    private:
        Brain* catBrain;
    public:
        Cat();
        Cat(const Cat& ori);
        Cat(std::string Type);
        Cat& operator=(const Cat& ori);
        void makeSound() const;
        ~Cat();
};

#endif