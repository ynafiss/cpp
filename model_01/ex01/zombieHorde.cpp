/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynafiss <ynafiss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 01:36:33 by ynafiss           #+#    #+#             */
/*   Updated: 2023/08/13 14:05:20 by ynafiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ){
    Zombie* zombies = new Zombie [N];
    int     i = 0;
    while (i < N)
    {
        zombies[i].set_name(name);
        i++;
    }
    return zombies;
}
