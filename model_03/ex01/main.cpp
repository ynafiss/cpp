/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynafiss <ynafiss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 12:23:21 by ynafiss           #+#    #+#             */
/*   Updated: 2023/11/01 16:13:51 by ynafiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
  ScavTrap a( "1337" );
    ScavTrap a2( a );

    a.attack( "ALO" );
    a.takeDamage( 10 );
    a.beRepaired( 10 );
    a.guardGate();
}