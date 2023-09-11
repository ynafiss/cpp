/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynafiss <ynafiss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 12:22:50 by ynafiss           #+#    #+#             */
/*   Updated: 2023/08/31 13:02:23 by ynafiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
class ClapTrap{
    private:
        std::string Name;
        int         Hit;
        int         Energy;
        int         Attack;
    public:
        ClapTrap(std::string name);
        void attack(const std::string& target);
        ClapTrap& operator=(ClapTrap& ori);
        ClapTrap(ClapTrap& ori);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        ~ClapTrap(void);
};

#endif