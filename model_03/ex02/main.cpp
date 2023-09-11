/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynafiss <ynafiss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 12:23:21 by ynafiss           #+#    #+#             */
/*   Updated: 2023/08/31 22:25:55 by ynafiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(){
    FragTrap d(" << VV >> ");

    d.attack(" he ");
    d.takeDamage(2);
    d.beRepaired(2);
    d.attack(" >> ME << ");
    d.takeDamage(2);
    d.beRepaired(2);
}