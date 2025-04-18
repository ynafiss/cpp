/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynafiss <ynafiss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 01:37:17 by ynafiss           #+#    #+#             */
/*   Updated: 2023/08/13 13:51:55 by ynafiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie{
private:
    std::string name;
public:
    Zombie(void){};
    void set_name(std::string newName);
    void annonce(void);
    ~Zombie(void);
};

Zombie* zombieHorde(int N, std::string name);



#endif