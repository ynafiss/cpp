/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynafiss <ynafiss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 14:00:18 by ynafiss           #+#    #+#             */
/*   Updated: 2023/11/02 14:37:47 by ynafiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("non", 25, 5){
    target = "non";
}

RobotomyRequestForm::RobotomyRequestForm(std::string in_target) : AForm(in_target, 72, 45){
    target = in_target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm & ori) : AForm(ori), target(ori.target){ 
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm & ori){
    if (this != &ori){
        target = ori.target;
    }
    return *this;
}

void    RobotomyRequestForm::execute(Bureaucrat const & executor) const{
    if (getAFormSign() && executor.getGrade() <= 72 && getAFormExGrade() <= 45){
        std::cout << "Make some noise!!!" << std::endl;
        if ((rand() % 2) + 1 == 2)
            std::cout << target << " has been robotomized successfully !" << std::endl;
        else
            std::cout << target << " failed to robotomized :(" << std::endl;
    }
    else{
        throw AForm::GradeTooLowException();
    }
}

RobotomyRequestForm::~RobotomyRequestForm(){
}