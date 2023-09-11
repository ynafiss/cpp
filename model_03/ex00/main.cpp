/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynafiss <ynafiss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 12:23:21 by ynafiss           #+#    #+#             */
/*   Updated: 2023/08/31 13:10:51 by ynafiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(){
    ClapTrap d(" << DEAMON >> ");
    ClapTrap a(d);
    a.attack(" >> ME << ");
    a.takeDamage(2);
    a.beRepaired(2);
    a.attack(" >> ME << ");
    a.takeDamage(2);
    // d.beRepaired(2);
    // d.attack(" >> ME << ");
    // d.takeDamage(2);
    // d.beRepaired(2);
    // d.attack(" >> ME << ");
    // d.takeDamage(2);
    // d.beRepaired(2);
}