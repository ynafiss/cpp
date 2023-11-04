/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynafiss <ynafiss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 15:29:23 by ynafiss           #+#    #+#             */
/*   Updated: 2023/09/30 15:33:25 by ynafiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGDOG_HPP
#define WRONGDOG_HPP


#include "WrongAnimal.hpp"

class WrongDog : public WrongAnimal{
    public:
        WrongDog();
        WrongDog(const WrongDog& ori);
        WrongDog(std::string Type);
        WrongDog& operator=(const WrongDog& ori);
        void makeSound() const;
        ~WrongDog();
};

#endif