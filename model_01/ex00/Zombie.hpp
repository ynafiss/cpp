/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynafiss <ynafiss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 02:01:27 by ynafiss           #+#    #+#             */
/*   Updated: 2023/08/12 02:05:53 by ynafiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie{
private:
    std::string name;
public:
    void    annonce();
    Zombie(std::string newName);
    ~Zombie();
};

void randomChump(std::string name);
Zombie* newZombie(std::string name);

#endif