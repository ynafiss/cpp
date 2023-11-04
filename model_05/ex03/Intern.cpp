/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynafiss <ynafiss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 16:03:26 by ynafiss           #+#    #+#             */
/*   Updated: 2023/11/02 16:22:59 by ynafiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

AForm   *Intern::makeForm(std::string form_name, std::string target){
    std::string tab[] = {"shrubbery", "robo", "presidential"};
    int i = 0;
    while (i < 3){
        if (form_name == tab[i])
            break;
        i++;
    }
    switch(i){
        case 0:
            return new ShrubberyCrationForm(target);
        case 1:
            return new RobotomyRequestForm(target);
        case 2:
            return new PresidentialPardonForm(target);
        default:
            throw("lol");
    }
}