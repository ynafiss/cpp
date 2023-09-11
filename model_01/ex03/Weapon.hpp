/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynafiss <ynafiss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 17:35:33 by ynafiss           #+#    #+#             */
/*   Updated: 2023/08/14 14:17:50 by ynafiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string.h>

class Weapon{
private:
    std::string weapon;
public:
    Weapon(std::string defaultWeapon);
    std::string getType(void);
    void        setType(std::string newType);
};

#endif