/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.Hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynafiss <ynafiss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 22:57:07 by ynafiss           #+#    #+#             */
/*   Updated: 2023/09/02 23:38:05 by ynafiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"

class   DiamondTrap: public FragTrap : public ScavTrap{
    private:
        std::string Name;
    public:
        DiamondTrap(std::string new_name);
        void whoAmI();
};



#endif