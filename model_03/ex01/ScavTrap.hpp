/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynafiss <ynafiss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 16:05:41 by ynafiss           #+#    #+#             */
/*   Updated: 2023/09/15 09:07:08 by ynafiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap{
    public:
        ScavTrap();
        ScavTrap(ScavTrap& ori);
        ScavTrap& operator=(ScavTrap& ori);
        ScavTrap(std::string name);
        void    attack(std::string target);
        void    guardGate();
        ~ScavTrap();
};

#endif