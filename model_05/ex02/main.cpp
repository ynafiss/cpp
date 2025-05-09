/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynafiss <ynafiss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 15:46:28 by ynafiss           #+#    #+#             */
/*   Updated: 2023/10/31 18:39:10 by ynafiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCrationForm.hpp"

int main(){
    Bureaucrat a(1, "BOSS");
    RobotomyRequestForm b("robo");
    ShrubberyCrationForm c("5555");

try {    b.beSigned(a);
    c.beSigned(a);
    b.execute(a);
    c.execute(a);
    b.execute(a);
    c.execute(a);
    b.execute(a);
    c.execute(a);
    b.execute(a);
    c.execute(a);
    b.execute(a);
    c.execute(a);
    b.execute(a);
    c.execute(a);
    b.execute(a);
    c.execute(a);
    }
    catch (const std::exception& e){
                std::cerr << e.what() << '\n';
    }
    
}