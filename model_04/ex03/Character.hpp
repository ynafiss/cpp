/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynafiss <ynafiss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 16:41:06 by ynafiss           #+#    #+#             */
/*   Updated: 2023/10/06 10:31:54 by ynafiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter{
    private:
        AMateria *materia[4];
        std::string Name;
    public:
        Character();
        Character(std::string n);
        Character(const Character& ori);
        Character& operator=(const Character& ori);
        void    equip(AMateria* m);
        void    unequip(int idx);
        std::string const & getName() const;
        void    use(int idx, ICharacter &target);
        ~Character();
};

#endif