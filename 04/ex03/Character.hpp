/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynafiss <ynafiss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 16:41:06 by ynafiss           #+#    #+#             */
/*   Updated: 2023/10/04 03:52:46 by ynafiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter{
    private:
        AMateria *materia[4];
    public:
        Character();
        void    equip(AMateria* m);
        void    unequip(int idx);
        void    use(int idx, ICharacter &target);
        ~Character();
};

#endif