/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynafiss <ynafiss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 12:27:43 by ynafiss           #+#    #+#             */
/*   Updated: 2023/08/17 12:34:51 by ynafiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){}

Harl::~Harl(){}

void    Harl::debug(void){
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger.\nI really do!" << std::endl;
}

void    Harl::info(void){
    std::cout << "I cannot believe adding extra bacon costs more money.\nYou didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void    Harl::warning(void){
    std::cout << "I think I deserve to have some extra bacon for free.\nI’ve been coming for years whereas you started working here since last month." << std::endl;
}

void    Harl::error(void){
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void    Harl::complain(std::string level){
    void (Harl::*FunctionPtr[4])() = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };
    std::string     levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int     i = 0;

    while (i < 4)
    {
        if (levels[i] == level){
            while (i < 4)
            {
                std::cout << "[" << levels[i] << "]" << std::endl;
                (this->*FunctionPtr[i++])();
                std::cout << std::endl;
            }
            return ;
        }
        i++;
    }
    std::cout << "level not founde" << std::endl;
}