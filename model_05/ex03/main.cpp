/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynafiss <ynafiss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 15:46:28 by ynafiss           #+#    #+#             */
/*   Updated: 2023/11/02 16:22:52 by ynafiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCrationForm.hpp"
#include "Intern.hpp"
int main(){
    Bureaucrat a(1, "BOSS");
    RobotomyRequestForm b("robo");
    ShrubberyCrationForm c("5555");
    Intern someRandomIntern;
    AForm* rrf;
    rrf = someRandomIntern.makeForm("presiden4tial", "Bender");

try {    rrf->beSigned(a);
    c.beSigned(a);
    rrf->execute(a);
    }
    catch (const std::exception& e){
                std::cerr << e.what() << '\n';
    }
    catch (const char *){
                std::cout << "The form you want to make dosn't exist !!" << std::endl;
    }
    
}