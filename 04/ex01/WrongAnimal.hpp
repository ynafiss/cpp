/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynafiss <ynafiss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 18:04:49 by ynafiss           #+#    #+#             */
/*   Updated: 2023/09/29 18:07:44 by ynafiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
    protected:
        std::string type;
    public:
    WrongAnimal();
    WrongAnimal(const WrongAnimal& ori);
    WrongAnimal(std::string Type);
    WrongAnimal& operator=(const WrongAnimal& ori);
    void makeSound() const;
    std::string getType() const;
    ~WrongAnimal();
};

#endif