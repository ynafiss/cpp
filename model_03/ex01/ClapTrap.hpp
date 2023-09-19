/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynafiss <ynafiss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 12:22:50 by ynafiss           #+#    #+#             */
/*   Updated: 2023/09/13 17:56:42 by ynafiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap{
    protected:
        std::string Name;
        int         Hit;
        int         Energy;
        int         Attack;
    public:
        ClapTrap(std::string name);
        ClapTrap();
        void attack(const std::string& target);
        ClapTrap& operator=(ClapTrap& ori);
        ClapTrap(ClapTrap& ori);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        ~ClapTrap(void);
};

#endif