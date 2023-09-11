/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynafiss <ynafiss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 12:23:21 by ynafiss           #+#    #+#             */
/*   Updated: 2023/08/31 16:46:44 by ynafiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(){
    ScavTrap d(" << VV >> ");

    d.attack(" he ");
    d.takeDamage(2);
    d.beRepaired(2);
    d.attack(" >> ME << ");
    d.takeDamage(2);
    d.beRepaired(2);
}