/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynafiss <ynafiss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 08:23:59 by ynafiss           #+#    #+#             */
/*   Updated: 2023/08/15 10:15:15 by ynafiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB{
    private:
        std::string name;
        Weapon     *weaponB;
    public:
        HumanB(std::string newName);
        void    setWeapon(Weapon &newWeapon);
        void    attack(void);
};

#endif