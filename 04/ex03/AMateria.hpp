/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynafiss <ynafiss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 16:08:37 by ynafiss           #+#    #+#             */
/*   Updated: 2023/10/13 21:15:41 by ynafiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
class  AMateria; // Forward declaration

class ICharacter {
public:
    virtual ~ICharacter();
    ICharacter(){};
    virtual std::string const &getName() const = 0;
    virtual void equip(AMateria *m) = 0;
    virtual void unequip(int idx) = 0;
    virtual void use(int idx, ICharacter &target) = 0;
};

class AMateria {
protected:
    std::string type;

public:
    AMateria(const std::string &type);
    AMateria();
    AMateria(const AMateria& ori);
    AMateria& operator=(const AMateria& ori);
    std::string const &getType() const;
    virtual AMateria *clone() const = 0;
    virtual void use(ICharacter &target);
    virtual ~AMateria();
};


#endif